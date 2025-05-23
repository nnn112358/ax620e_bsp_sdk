/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <assert.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>
#include <sys/time.h>
#include <time.h>

#include "ax_sys_api.h"
#include "ax_avs_api.h"
#include "avs_common_arg_parse.h"
#include "avs_common_api.h"

static struct option long_opts[] = {
    {"config", 1, 0, 5000},
    {0,     0, 0, 0 }
};

static pthread_t gSendPipePid;
static pthread_t gGetPipePid;
AX_BOOL gLoopExit = AX_FALSE;

void *AVSGetFrameProc(void *arg) {
    SAMPLE_AVS_BASE_PARA_T *pAVSBaseParam = (SAMPLE_AVS_BASE_PARA_T*)arg;

    AX_S32 s32GrpId = 0;
    AX_S32 s32ChnId = 0;
    AX_S32 s32Ret = -1;
    AX_VIDEO_FRAME_INFO_T stFrameInfo;
    AX_U64 totalOutputFrames = 0;
    AX_S32 s32LoopNum = pAVSBaseParam->s32LoopNum;

    FILE *fFileOut = NULL;
    fFileOut = fopen((AX_CHAR*)(pAVSBaseParam->pOutput), "wb");
    if (fFileOut == NULL) {
        SAMPLE_ERR_LOG("Open input file error!\n");
        return NULL;
    }

    while(pAVSBaseParam->bGetThreadStart && (s32LoopNum > totalOutputFrames)) {
        SAMPLE_DEBUG_LOG("GetFrame thread running: totalOutputFrames %d!\n", totalOutputFrames);
        s32Ret = AX_AVS_GetChnFrame(s32GrpId, s32ChnId, &stFrameInfo, 0);
        if (s32Ret) {
            SAMPLE_DEBUG_LOG("Get chn %d frame fail!\n", s32ChnId);
            usleep(20 * 1000);
            continue;
        } else {
            if (pAVSBaseParam->bDumpYUV) {
                if (pAVSBaseParam->bOutputCompress) {
                    SaveFBC(&stFrameInfo, fFileOut);
                } else {
                    SaveYUV(&stFrameInfo, fFileOut);
                }

            }
            s32Ret = AX_AVS_ReleaseChnFrame(s32GrpId, s32ChnId, &stFrameInfo);
            if (s32Ret) {
                SAMPLE_ERR_LOG("Release chn %d frame fail!\n", s32ChnId);
            }
            totalOutputFrames++;
        }
    }
    fclose(fFileOut);
    SAMPLE_LOG("GetFrameProc thread exit, get output frames %lld, Loop num %d\n", totalOutputFrames, s32LoopNum);
    gLoopExit = AX_TRUE;
    return NULL;
}

static void *AVSSendFrameProc(void *arg) {
    SAMPLE_AVS_BASE_PARA_T *pAVSBaseParam = (SAMPLE_AVS_BASE_PARA_T*)arg;
    AX_S32 s32GrpId = 0;
    AX_S32 s32ChnId = 0;
    AX_S32 s32PipeNum = pAVSBaseParam->s32PipeNum;
    AX_S32 s32Ret = -1;
    AX_BLK BlkId;
    AX_VIDEO_FRAME_INFO_T stFrame;
    AX_S32 s32ReadSize = 0;
    AX_S32 s32FrameFormat = AX_FORMAT_YUV420_SEMIPLANAR;
    AX_S32 s32LoopNum = pAVSBaseParam->s32LoopNum;
    AX_U64 totalInputFrames = 0;

    FILE *fFileIn[4] = {NULL};

    for (AX_S32 i = 0; i < s32PipeNum; i++) {
        fFileIn[i] = fopen((AX_CHAR*)(pAVSBaseParam->pInput[i]), "rb");
        if (fFileIn[i] == NULL) {
            SAMPLE_ERR_LOG("Open input file error, index %d, %s\n", i, pAVSBaseParam->pInput[i]);
            return NULL;
        }
    }


    s32Ret = AX_AVS_EnableChn(s32GrpId, s32ChnId);
    if (s32Ret)
    {
        SAMPLE_ERR_LOG("AX_AVS_EnableChn fail, ret 0x%X\n", s32Ret);
        return NULL;
    }

    s32Ret = AX_AVS_StartGrp(s32GrpId);
    if (s32Ret)
    {
        SAMPLE_ERR_LOG("AX_AVS_StartGrp fail, ret 0x%X\n", s32Ret);
        return NULL;
    }

    memset(&stFrame, 0, sizeof(AX_VIDEO_FRAME_INFO_T));

    while(pAVSBaseParam->bSendThreadStart && s32LoopNum) {
        SAMPLE_DEBUG_LOG("SendFrame thread running: totalInputFrames %d!\n", totalInputFrames);
        for (AX_S32 i = 0; i < s32PipeNum; i++) {
            BlkId = AX_POOL_GetBlock(pAVSBaseParam->s32UserPoolId, pAVSBaseParam->s32InputFrameSize, NULL);
            if (AX_INVALID_BLOCKID == BlkId) {
                SAMPLE_LOG("Get block fail.s32UserPoolId=%d,frameSize=0x%x\n",
                        pAVSBaseParam->s32UserPoolId, pAVSBaseParam->s32InputFrameSize);
                usleep(5*1000);
                i--;
                continue;
            }
            stFrame.stVFrame.u32FrameSize = pAVSBaseParam->s32InputFrameSize;
            stFrame.stVFrame.u64VirAddr[0] = (AX_U64)(AX_ULONG)AX_POOL_GetBlockVirAddr(BlkId);
            stFrame.stVFrame.u64PhyAddr[0] = AX_POOL_Handle2PhysAddr(BlkId);

            stFrame.stVFrame.u32BlkId[0] = BlkId;
            stFrame.stVFrame.u32BlkId[1] = 0;//must set 0 if not used
            stFrame.stVFrame.u32BlkId[2] = 0;//must set 0 if not used

            stFrame.stVFrame.u64SeqNum = totalInputFrames;
            stFrame.stVFrame.enImgFormat = s32FrameFormat;
            stFrame.stVFrame.u32Width = pAVSBaseParam->s32InputWidth;
            stFrame.stVFrame.u32Height = pAVSBaseParam->s32InputHeight;
            stFrame.stVFrame.u32PicStride[0] = pAVSBaseParam->s32InputWidth;

            if (pAVSBaseParam->bInputCompress) {
                s32ReadSize = LoadFrameFromFbcFile(fFileIn[i],
                                            pAVSBaseParam->s32InputWidth,
                                            pAVSBaseParam->s32InputWidth,
                                            pAVSBaseParam->s32InputHeight,
                                            s32FrameFormat,
                                            (AX_VOID*)(AX_ULONG)stFrame.stVFrame.u64VirAddr[0],
                                            pAVSBaseParam->s32InputComLevel);
                stFrame.stVFrame.stCompressInfo.enCompressMode = AX_COMPRESS_MODE_LOSSY;
                stFrame.stVFrame.stCompressInfo.u32CompressLevel = pAVSBaseParam->s32InputComLevel;
                stFrame.stVFrame.u64PhyAddr[1] = stFrame.stVFrame.u64PhyAddr[0] + (TILE_ALIGN(pAVSBaseParam->s32InputWidth, 128) / 128)
                    * (TILE_ALIGN(pAVSBaseParam->s32InputHeight, 2) / 2) * gTileSizeTable[pAVSBaseParam->s32InputComLevel];
                stFrame.stVFrame.u64VirAddr[1] = stFrame.stVFrame.u64VirAddr[0] + (TILE_ALIGN(pAVSBaseParam->s32InputWidth, 128) / 128)
                    * (TILE_ALIGN(pAVSBaseParam->s32InputHeight, 2) / 2) * gTileSizeTable[pAVSBaseParam->s32InputComLevel];
            } else {
                s32ReadSize = LoadFrameFromFile(fFileIn[i],
                                            pAVSBaseParam->s32InputWidth,
                                            pAVSBaseParam->s32InputWidth,
                                            pAVSBaseParam->s32InputHeight,
                                            s32FrameFormat,
                                            (AX_VOID*)(AX_ULONG)stFrame.stVFrame.u64VirAddr[0]);
                stFrame.stVFrame.u64PhyAddr[1] = stFrame.stVFrame.u64PhyAddr[0] + stFrame.stVFrame.u32PicStride[0] * stFrame.stVFrame.u32Height;
                stFrame.stVFrame.u64VirAddr[1] = stFrame.stVFrame.u64VirAddr[0] + stFrame.stVFrame.u32PicStride[0] * stFrame.stVFrame.u32Height;
            }

            fseek(fFileIn[i], 0, SEEK_SET);

            if (s32FrameFormat == AX_FORMAT_YUV420_SEMIPLANAR || s32FrameFormat == AX_FORMAT_YUV420_SEMIPLANAR_VU) {
                stFrame.stVFrame.u32PicStride[1] = stFrame.stVFrame.u32PicStride[0];
                stFrame.stVFrame.u32PicStride[2] = 0;
            }

            if (s32ReadSize == 0) {
                SAMPLE_ERR_LOG("Load frame from file fail\n");
            }

            SAMPLE_DEBUG_LOG("Input Frame data Vir0 %d, Vir1%d, Phy0 %lld, Phy1 %lld, read size %d\n",
                ((AX_U8 *)stFrame.stVFrame.u64VirAddr[0])[5], ((AX_U8 *)stFrame.stVFrame.u64VirAddr[1])[5],
                stFrame.stVFrame.u64PhyAddr[0], stFrame.stVFrame.u64PhyAddr[1], s32ReadSize);

            s32Ret = AX_AVS_SendPipeFrame(s32GrpId, i, &stFrame, 100);
            if (s32Ret)
            {
                SAMPLE_ERR_LOG("AX_AVS_SendPipeFrame fail, ret 0x%X\n", s32Ret);
                return NULL;
            }
            AX_POOL_ReleaseBlock(stFrame.stVFrame.u32BlkId[0]);
            usleep(5*1000);
        }
        totalInputFrames++;
        s32LoopNum--;
    }

    SAMPLE_LOG("SendFrameProc thread exit, send frames %lld for each pipe\n", totalInputFrames);
    return NULL;
}

AX_S32 SampleAVSUsage(SAMPLE_AVS_BASE_PARA_T* pAVSBaseParam) {
    AX_S32 s32PipeNum = pAVSBaseParam->s32PipeNum;
    AX_S32 s32GrpId = 0;
    AX_S32 s32ChnId = 0;
    AX_S32 s32Ret = -1;
    AX_S32 s32InputWidth = pAVSBaseParam->s32InputWidth;
    AX_S32 s32InputHeight = pAVSBaseParam->s32InputHeight;
    AX_S32 s32OutputWidth = pAVSBaseParam->s32OutputWidth;
    AX_S32 s32OutputStride = AX_ALIGN_UP(pAVSBaseParam->s32OutputWidth, 64);
    AX_S32 s32OutputHeight = pAVSBaseParam->s32OutputHeight;
    AX_S32 s32PanoWidth = pAVSBaseParam->s32PanoWidth;
    AX_S32 s32PanoHeight = pAVSBaseParam->s32PanoHeight;
    AX_S32 s32InputFrameSize = AX_ALIGN_UP(s32InputWidth * s32InputHeight * 3 / 2, 4096);
    AX_S32 s32OutputFrameSize = AX_ALIGN_UP(s32OutputStride * s32OutputHeight * 3 / 2, 4096);
    AX_S32 s32MaskWidth = pAVSBaseParam->s32MaskWidth;
    AX_S32 s32MaskHeight = pAVSBaseParam->s32MaskHeight;
    AX_S32 s32PrjMode = pAVSBaseParam->s32PrjMode;

    AX_AVS_GRP_ATTR_T *pAVSGrpAttr = NULL;
    AX_AVS_CHN_ATTR_T stAVSChnAttr = {0};

    pAVSGrpAttr = malloc(sizeof(AX_AVS_GRP_ATTR_T));
    if (pAVSGrpAttr == NULL) {
        SAMPLE_ERR_LOG("pAVSGrpAttr malloc failed!\n");
        return -1;
    } else {
        memset(pAVSGrpAttr, 0, sizeof(AX_AVS_GRP_ATTR_T));
    }

    if (pAVSBaseParam->bInputCompress) {
        s32InputFrameSize = AX_ALIGN_UP((TILE_ALIGN(s32InputWidth, 128) / 128) * (TILE_ALIGN(s32InputHeight, 2) / 2)
                        * gTileSizeTable[pAVSBaseParam->s32InputComLevel] * 3 / 2, 4096);
    }
    if (pAVSBaseParam->bOutputCompress) {
        s32OutputFrameSize = AX_ALIGN_UP((TILE_ALIGN(s32OutputStride, 128) / 128) * (TILE_ALIGN(s32OutputHeight, 2) / 2)
                        * gTileSizeTable[pAVSBaseParam->s32OutputComLevel] * 3 / 2, 4096);
    }

    pAVSGrpAttr->u32PipeNum = s32PipeNum;
    pAVSGrpAttr->enMode = AVS_MODE_BLEND;
    pAVSGrpAttr->bDynamicSeam = pAVSBaseParam->bDynamicSeam;
    pAVSGrpAttr->enBlendMode = pAVSBaseParam->s32BlendMode;
    pAVSGrpAttr->bSyncPipe = pAVSBaseParam->bFrameSync;
    if (pAVSBaseParam->s32CalibrationMode == 1) {
        pAVSGrpAttr->enCalibrationMode = AVS_CALIBRATION_PARAM_CAMERA;
        /* TODO: replace by file */
        pAVSGrpAttr->stGrpCameraParam.enCameraType = AVS_CAMERA_TYPE_PINHOLE;
        pAVSGrpAttr->stGrpCameraParam.s32ImgHeight = s32InputHeight;
        pAVSGrpAttr->stGrpCameraParam.s32ImgWidth = s32InputWidth;
        pAVSGrpAttr->stGrpCameraParam.s32PanoHeight = s32PanoHeight;
        pAVSGrpAttr->stGrpCameraParam.s32PanoWidth = s32PanoWidth;
        pAVSGrpAttr->stGrpCameraParam.stImgFOV[0].u32FOVX = pAVSBaseParam->f32InputFOV[0];
        pAVSGrpAttr->stGrpCameraParam.stImgFOV[1].u32FOVX = pAVSBaseParam->f32InputFOV[1];
        pAVSGrpAttr->stGrpCameraParam.stPanoFOV.u32FOVX = pAVSBaseParam->f32PanoFOV;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nTranslationParam[0] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nTranslationParam[1] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nTranslationParam[2] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nTranslationParam[3] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nTranslationParam[4] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nTranslationParam[0] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nTranslationParam[1] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nTranslationParam[2] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nTranslationParam[3] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nTranslationParam[4] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nRotationParam[0] = -21;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nRotationParam[1] = 0.97397;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[0].nRotationParam[2] = 1.77023;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nRotationParam[0] = 19.8066;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nRotationParam[1] = 1.2368;
        pAVSGrpAttr->stGrpCameraParam.stPipeExtrinsic[1].nRotationParam[2] = -0.10687;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nDistortionCoeff[0] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nDistortionCoeff[1] = 0.016592;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nDistortionCoeff[2] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nDistortionCoeff[0] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nDistortionCoeff[1] = 0.016592;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nDistortionCoeff[2] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nNormalDistortionCoeff[0] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nNormalDistortionCoeff[1] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nNormalDistortionCoeff[2] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nNormalDistortionCoeff[3] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[0].nNormalDistortionCoeff[4] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nNormalDistortionCoeff[0] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nNormalDistortionCoeff[1] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nNormalDistortionCoeff[2] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nNormalDistortionCoeff[3] = 0;
        pAVSGrpAttr->stGrpCameraParam.stPipeIntrinsic[1].nNormalDistortionCoeff[4] = 0;
        pAVSGrpAttr->stOutAttr.enPrjMode = s32PrjMode;
        pAVSGrpAttr->stOutAttr.u32Width = 3840; // 3904
        pAVSGrpAttr->stOutAttr.u32Height = 880; // 896
        s32OutputWidth = 3840;
        s32OutputStride = AX_ALIGN_UP(pAVSBaseParam->s32OutputWidth, 64);
        s32OutputHeight = 880;
    } else if (pAVSBaseParam->s32CalibrationMode == 2) {
        pAVSGrpAttr->enCalibrationMode = AVS_CALIBRATION_PARAM_FILE;
        pAVSGrpAttr->pGrpCalibrationFile = (AX_CHAR*)pAVSBaseParam->pCalibrationFile;
        pAVSGrpAttr->stOutAttr.enPrjMode = s32PrjMode;
        pAVSGrpAttr->stOutAttr.u32Width = 3840; // 3904
        pAVSGrpAttr->stOutAttr.u32Height = 880; // 896
        s32OutputWidth = 3840;
        s32OutputStride = AX_ALIGN_UP(pAVSBaseParam->s32OutputWidth, 64);
        s32OutputHeight = 880;
    } else {
        pAVSGrpAttr->enCalibrationMode = AVS_CALIBRATION_PARAM_TRANSFORM;
        for (AX_S32 i = 0; i < s32PipeNum - 1; i++) {
            pAVSGrpAttr->stGrpTransformParam.stSeamInfo[i].u16W = s32MaskWidth;
            pAVSGrpAttr->stGrpTransformParam.stSeamInfo[i].u16H = s32MaskHeight;
            pAVSGrpAttr->stGrpTransformParam.stSeamInfo[i].u16X = pAVSBaseParam->s32MaskX;
            pAVSGrpAttr->stGrpTransformParam.stSeamInfo[i].u16Y = pAVSBaseParam->s32MaskY;
        }

        for (AX_S32 i = 0; i < s32PipeNum; i++) {
            if (i) {
                s32Ret = LoadFileToMem((AX_CHAR*)pAVSBaseParam->pMask[i - 1], (AX_U8**)&pAVSGrpAttr->stGrpTransformParam.stMask.pstVirAddr[i - 1],
                                    (AX_S32*)&pAVSGrpAttr->stGrpTransformParam.stMask.s32MaskSize[i - 1]);
                if (s32Ret) {
                    SAMPLE_ERR_LOG("Mask LoadFileToMem failed!\n");
                    return -1;
                }
                SAMPLE_DEBUG_LOG("Mask %d, Viraddr %p, size %d\n", i - 1, pAVSGrpAttr->stGrpTransformParam.stMask.pstVirAddr[i - 1],
                                pAVSGrpAttr->stGrpTransformParam.stMask.s32MaskSize[i - 1]);
            }

            s32Ret = LoadMeshFileToMem((AX_CHAR*)pAVSBaseParam->pMesh[i], &pAVSGrpAttr->stGrpTransformParam.stPipeMesh.pstVirAddr[i],
                                    &pAVSGrpAttr->stGrpTransformParam.stPipeMesh.s32MeshSize[i]);
            if (s32Ret) {
                SAMPLE_ERR_LOG("Mesh LoadFileToMem failed!\n");
                return -1;
            }
            SAMPLE_DEBUG_LOG("Mesh %d, Viraddr %p, size %d\n", i, pAVSGrpAttr->stGrpTransformParam.stPipeMesh.pstVirAddr[i],
                            pAVSGrpAttr->stGrpTransformParam.stPipeMesh.s32MeshSize[i]);
        }
    }


    s32Ret = CommonPoolInit(s32OutputFrameSize, 4);
    if (s32Ret) {
        SAMPLE_ERR_LOG("CommonPoolInit failed, CMM memory may not enough!\n");
        return -1;
    }

    pAVSBaseParam->s32UserPoolId = PoolInit(s32InputFrameSize, s32PipeNum * 4);
    pAVSBaseParam->s32InputFrameSize = s32InputFrameSize;
    if(pAVSBaseParam->s32UserPoolId == AX_INVALID_POOLID)
    {
        SAMPLE_ERR_LOG("PoolInit failed, CMM memory may not enough!\n");
        free(pAVSGrpAttr);
        return -1;
    }

/*
    Not support to config outAttr
    pAVSGrpAttr->stOutAttr.enPrjMode = AVS_PROJECTION_EQUIRECTANGULER;
*/
    s32Ret = AX_AVS_CreateGrp(s32GrpId, pAVSGrpAttr);
    if (s32Ret)
    {
        SAMPLE_ERR_LOG("AX_AVS_CreateGrp fail, ret 0x%X\n", s32Ret);
        free(pAVSGrpAttr);
        return -1;
    }
    free(pAVSGrpAttr);

    stAVSChnAttr.u32Depth = 4;
    stAVSChnAttr.stOutAttr.u32Width = s32OutputWidth;
    stAVSChnAttr.stOutAttr.u32Height = s32OutputHeight;

    if (pAVSBaseParam->bOutputCompress) {
        stAVSChnAttr.stCompressInfo.enCompressMode = AX_COMPRESS_MODE_LOSSY;
        stAVSChnAttr.stCompressInfo.u32CompressLevel = pAVSBaseParam->s32OutputComLevel;
    }

/*
    Only support one channel output.
*/
    s32Ret = AX_AVS_SetChnAttr(s32GrpId, s32ChnId, &stAVSChnAttr);
    if (s32Ret)
    {
        SAMPLE_ERR_LOG("AX_AVS_SetChnAttr fail, ret 0x%X\n", s32Ret);
        return -1;
    }

    pAVSBaseParam->bSendThreadStart = AX_TRUE;
    pthread_create(&gSendPipePid, NULL, AVSSendFrameProc, (void *)pAVSBaseParam);

    pAVSBaseParam->bGetThreadStart = AX_TRUE;
    pthread_create(&gGetPipePid, NULL, AVSGetFrameProc, (void *)pAVSBaseParam);

    while (!gLoopExit) {
        sleep(2);
    }
    SAMPLE_LOG("Avs process success, starts to exit!\n");
    pAVSBaseParam->bGetThreadStart = AX_FALSE;
    pAVSBaseParam->bSendThreadStart = AX_FALSE;

    pthread_join(gSendPipePid, NULL);
    s32Ret = AX_AVS_StopGrp(s32GrpId);
    if (s32Ret)
    {
        SAMPLE_ERR_LOG("AX_AVS_StopGrp fail, ret 0x%X\n", s32Ret);
        return -1;
    }

    s32Ret = AX_AVS_DestroyGrp(s32GrpId);
    if (s32Ret)
    {
        SAMPLE_ERR_LOG("AX_AVS_DestroyGrp fail, ret 0x%X\n", s32Ret);
        return -1;
    }
    pthread_join(gGetPipePid, NULL);

    return 0;
}

extern char *__progname;

AX_VOID __PrintHelp(AX_VOID) {
    printf("Example: %s --config=/opt/data/avs/config/avs_base.ini\n", __progname);

}

AX_S32 AVSParameterGet(AX_S32 argc, AX_CHAR **argv, SAMPLE_AVS_BASE_PARA_T* pAVSBaseParam) {
    const AX_S32 s32Len = 256;
    AX_CHAR cKey[s32Len];
    INI_DICT *ini;
    AX_CHAR *pInitFileName = NULL;
    AX_S32 s32ArgId;
    AX_S32 s32OptIdx = 0;

    AX_CHAR cFmtstr[] = "\t %-40s : %s \n";
    AX_CHAR cFmtint[] = "\t %-40s : %d \n";
    AX_CHAR cFmtfloat[] = "\t %-40s : %f \n";

    if (argc < 2) {
        __PrintHelp();
        exit(0);
    }

    s32ArgId = getopt_long(argc, argv, "", long_opts, &s32OptIdx);
    if (s32ArgId == 5000) {
        pInitFileName = optarg;
    } else {
        SAMPLE_ERR_LOG("Config name error\n");
        __PrintHelp();
        return -1;
    }

    ini = iniparser_load(pInitFileName);
    if (ini == NULL) {
        SAMPLE_ERR_LOG("Load ini fail\n");
        return -1;
    }

    pAVSBaseParam->s32PipeNum = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":pipe_num"), 0);
    pAVSBaseParam->pInput[0] = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":input_left"), 0);
    pAVSBaseParam->pInput[1] = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":input_right"), 0);
    pAVSBaseParam->s32InputWidth = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":input_width"), 0);
    pAVSBaseParam->s32InputHeight = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":input_height"), 0);
    pAVSBaseParam->pOutput = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":output"), 0);
    pAVSBaseParam->s32PanoWidth = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":pano_width"), 0);
    pAVSBaseParam->s32PanoHeight = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":pano_height"), 0);
    pAVSBaseParam->s32OutputWidth = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":output_width"), 0);
    pAVSBaseParam->s32OutputHeight = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":output_height"), 0);
    pAVSBaseParam->s32LoopNum = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":loop_num"), 0);
    pAVSBaseParam->pMesh[0] = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":mesh_left"), 0);
    pAVSBaseParam->pMesh[1] = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":mesh_right"), 0);
    pAVSBaseParam->pMask[0] = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":mask_file"), 0);
    pAVSBaseParam->s32MaskWidth = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":mask_width"), 0);
    pAVSBaseParam->s32MaskHeight = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":mask_height"), 0);
    pAVSBaseParam->s32MaskX = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":mask_x"), 0);
    pAVSBaseParam->s32MaskY = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":mask_y"), 0);
    pAVSBaseParam->bDumpYUV = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":dump_yuv"), 0);
    pAVSBaseParam->bDynamicSeam = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":dynamic_seam"), 0);
    pAVSBaseParam->s32BlendMode = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":blend_mode"), 0);
    pAVSBaseParam->bFrameSync = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":frame_sync"), 0);
    pAVSBaseParam->s32CalibrationMode = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":calibration_mode"), 0);
    pAVSBaseParam->f32InputFOV[0] = ini_getdouble(ini, ax_strcat(cKey, "avs_attr", ":input_fov_0"), 0);
    pAVSBaseParam->f32InputFOV[1] = ini_getdouble(ini, ax_strcat(cKey, "avs_attr", ":input_fov_1"), 0);
    pAVSBaseParam->f32PanoFOV = ini_getdouble(ini, ax_strcat(cKey, "avs_attr", ":pano_fov"), 0);
    pAVSBaseParam->pCalibrationFile = (AX_S8*)ini_get_string(ini, ax_strcat(cKey, "avs_attr", ":calibration_file"), 0);
    pAVSBaseParam->s32PrjMode = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":output_prj_mode"), 1);
    pAVSBaseParam->bInputCompress = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":input_compress"), 1);
    pAVSBaseParam->bOutputCompress = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":output_compress"), 1);
    pAVSBaseParam->s32InputComLevel = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":input_comlevel"), 1);
    pAVSBaseParam->s32OutputComLevel = ini_getint(ini, ax_strcat(cKey, "avs_attr", ":output_comlevel"), 1);


    printf(cFmtstr, "Input left pipe", pAVSBaseParam->pInput[0]);
    printf(cFmtstr, "Input right pipe", pAVSBaseParam->pInput[1]);
    printf(cFmtstr, "Output file", pAVSBaseParam->pOutput);
    printf(cFmtstr, "Left mesh", pAVSBaseParam->pMesh[0]);
    printf(cFmtstr, "Right mesh", pAVSBaseParam->pMesh[1]);
    printf(cFmtstr, "Mask", pAVSBaseParam->pMask[0]);
    printf(cFmtint, "Input width", pAVSBaseParam->s32InputWidth);
    printf(cFmtint, "Input height", pAVSBaseParam->s32InputHeight);
    printf(cFmtint, "Loop num", pAVSBaseParam->s32LoopNum);
    printf(cFmtint, "Is dump yuv", pAVSBaseParam->bDumpYUV);
    printf(cFmtint, "Is frame sync", pAVSBaseParam->bFrameSync);
    printf(cFmtint, "Calibration mode", pAVSBaseParam->s32CalibrationMode);
    if (pAVSBaseParam->bInputCompress) {
        printf(cFmtint, "Input compress level", pAVSBaseParam->s32InputComLevel);
    }
    if (pAVSBaseParam->bOutputCompress) {
        printf(cFmtint, "Output compress level", pAVSBaseParam->s32OutputComLevel);
    }
    printf(cFmtint, "Output prj mode", pAVSBaseParam->s32PrjMode);
    if (pAVSBaseParam->s32CalibrationMode) {
        printf(cFmtfloat, "Input 0 FOVX", pAVSBaseParam->f32InputFOV[0]);
        printf(cFmtfloat, "Input 1 FOVX", pAVSBaseParam->f32InputFOV[1]);
        printf(cFmtfloat, "Pano FOVX", pAVSBaseParam->f32PanoFOV);
        printf(cFmtint, "Pano width", pAVSBaseParam->s32PanoWidth);
        printf(cFmtint, "Pano height", pAVSBaseParam->s32PanoHeight);
    } else {
        printf(cFmtint, "Output width", pAVSBaseParam->s32OutputWidth);
        printf(cFmtint, "Output height", pAVSBaseParam->s32OutputHeight);
        printf(cFmtint, "Seam width", pAVSBaseParam->s32MaskWidth);
        printf(cFmtint, "Seam height", pAVSBaseParam->s32MaskHeight);
        printf(cFmtint, "Seam x", pAVSBaseParam->s32MaskX);
        printf(cFmtint, "Seam y", pAVSBaseParam->s32MaskY);
    }

    pAVSBaseParam->ini = ini;

    return 0;
}

AX_VOID AVSParameterFree(SAMPLE_AVS_BASE_PARA_T* pAVSBaseParam) {
    if (pAVSBaseParam != NULL) {
        if (pAVSBaseParam->ini != NULL) {
            iniparser_freedict(pAVSBaseParam->ini);
        }
    }
}


void AVSParameterDefault(SAMPLE_AVS_BASE_PARA_T* pAVSBaseParam) {
    pAVSBaseParam->s32GroupId = 0;
    pAVSBaseParam->s32PipeNum = 2;
    for (AX_S32 i = 0 ;i < SAMPLE_AVS_PIPE_NUM_MAX; i++) {
        pAVSBaseParam->pInput[i] = NULL;
    }
    pAVSBaseParam->pOutput = NULL;
    pAVSBaseParam->s32LoopNum = 1;
}