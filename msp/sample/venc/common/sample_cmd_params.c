/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include "sample_cmd_params.h"

#include <string.h>

#include "sample_cmd_parse.h"
#include "sample_global.h"
#include "sample_unit_test.h"
#include "sample_venc_log.h"

AX_VOID SampleSetDefaultParams(SAMPLE_VENC_CMD_PARA_T *pstPara)
{
    memset(pstPara, 0, sizeof(SAMPLE_VENC_CMD_PARA_T));

    pstPara->input = "input.yuv";
    pstPara->output = NULL;
    pstPara->vencRoiMap = "venc_map.roi";
    pstPara->jencRoiMap = "jpeg_map.roi";

    pstPara->chnNum = 4;
    pstPara->srcFrameRate = 30;
    pstPara->dstFrameRate = 30;

    pstPara->virILen = 15;
    pstPara->bitRate = 2048;
    pstPara->startQp = -1;
    pstPara->IQp = 25;
    pstPara->PQp = 30;
    pstPara->BQp = 32;
    pstPara->fixedQp = -1;
    pstPara->encFrameNum = 0;
    pstPara->bNormal = 1;
    pstPara->picFormat = AX_FORMAT_YUV420_PLANAR;
    pstPara->dynAttrIdx = 1;
    pstPara->ut = 0;
    pstPara->temporalID = 2;
    pstPara->dynAttrIdx = 5;
    pstPara->roiEnable = AX_FALSE;
    pstPara->logLevel = COMM_VENC_LOG_INFO;

    pstPara->refreshNum = 5;

    /* cvbr */
    pstPara->shtStaTime = 3;
    pstPara->ltStaTime = 600;
    pstPara->ltMaxBt = pstPara->bitRate;
    pstPara->ltMinBt = pstPara->ltMaxBt * 0.8;
    pstPara->minQpDelta = 0;
    pstPara->maxQpDelta = 0;


    /* total encode thread number */
    pstPara->encThdNum = 1;

    /* rate jam */
    pstPara->drpFrmMode = 0;
    pstPara->encFrmGap = 0;
    pstPara->frmThrBps = 200 * 1000; /* 200 kb */
    /* super frame */
    pstPara->pri = 0;
    pstPara->thrI = 500 * 1000; /* in bits */
    pstPara->thrP = 500 * 1000; /* in bits */
    /* multi slice */
    pstPara->sliceNum = 2;

    pstPara->bSaveStrm = AX_TRUE;
    pstPara->syncSend = -1; /* block mode */
    pstPara->syncGet = -1; /* block mode */
    pstPara->rcModeNew = SAMPLE_RC_FIXQP;
    pstPara->IQpDelta = -2;
    pstPara->vq = AX_VENC_VBR_QUALITY_LEVEL_INV;
    pstPara->qFactor = 90;
    pstPara->qRoiFactor = 90;

    pstPara->poolId = AX_INVALID_POOLID;
    pstPara->poolIdDynRes = AX_INVALID_POOLID;
    /* user data size */
    pstPara->uDataSize = 10;
    pstPara->bitDepth = VENC_FBC_8BIT;
    /* VUI */
    pstPara->bSignalPresent = AX_TRUE;
    pstPara->videoFormat = 5;
    pstPara->bFullRange = AX_TRUE;
    pstPara->bColorPresent = AX_TRUE;
    pstPara->colorPrimaries = 2;
    pstPara->transferCharacter = 2;
    pstPara->matrixCoeffs = 2;
    pstPara->u32StartChan = 0;
    /* total block count */
    pstPara->vbCnt = 5;
    pstPara->newgopLen = 25;
    pstPara->gopLen = 120;
}

AX_VOID SampleHelp(AX_CHAR *testApp)
{
    char help_info[] = {
#include "help.dat"
    };


    fprintf(stdout, "\nUsage:  %s [options] -i input file\n\n", testApp);

    fprintf(stdout, "  -H --help                        help information\n\n");

    fprintf(stdout, "%s", help_info);
    fprintf(stdout, "\n");

    return;
}

AX_S32 SampleParameterCheck(SAMPLE_VENC_CMD_PARA_T *pCml)
{
    if (pCml->ut > VENC_TEST_ALL_CASE)
        return -1;

    if (pCml->fbcType) {
        if (AX_COMPRESS_MODE_LOSSLESS == pCml->fbcType) {
            SAMPLE_LOG_ERR("Don't support lossless fbcType(%d).\n", pCml->fbcType);
            return -1;
        }

        if (AX_COMPRESS_MODE_LOSSY != pCml->fbcType) {
            SAMPLE_LOG_ERR("Invalid fbcType(%d).\n", pCml->fbcType);
            return -1;
        }
    }

    if (AX_COMPRESS_MODE_LOSSY == pCml->fbcType) {
        if (VENC_FBC_10BIT == pCml->bitDepth) {
            SAMPLE_LOG_ERR("Don't support lossy 10 bitDepth(%d).\n", pCml->bitDepth);
            return -1;
        }

        if (VENC_FBC_8BIT != pCml->bitDepth) {
            SAMPLE_LOG_ERR("Invalid bitDepth(%d).\n", pCml->bitDepth);
            return -1;
        }

        if ((pCml->compLevel < 1) || (pCml->compLevel > 8)) {
            SAMPLE_LOG_ERR("Invalid compress level(%d).\n", pCml->compLevel);
            return -1;
        }
    }

    if (NULL != pCml->output) {
        if (pCml->chnNum > 1) {
            SAMPLE_LOG_ERR("set output file name should use '--bChnCustom 1 -N 1 --codecType your-codec-type'.\n");
            return -1;
        }
    }
    if (pCml->vbCnt > SAMPLE_VENC_MAX_BLK_CNT || pCml->vbCnt < SAMPLE_VENC_MIN_BLK_CNT) {
        SAMPLE_LOG_ERR("invalid vb count(%d), over range[%d,%d].\n", pCml->vbCnt, SAMPLE_VENC_MIN_BLK_CNT,
                       SAMPLE_VENC_MAX_BLK_CNT);
        return -1;
    }

    if (pCml->chnNum > AX_MAX_VENC_CHN_NUM) {
        SAMPLE_LOG_ERR("chnNum(%d) exceed the max chn number AX_MAX_VENC_CHN_NUM(%d).\n", pCml->chnNum, AX_MAX_VENC_CHN_NUM);
        return -1;
    }
    return AX_SUCCESS;
}

static SAMPLE_OPTION_T options[] = {
    {"help", 'H', 2},
    {"input", 'i', 1},
    {"output", 'o', 1},
    {"bLoopEncode", 'p', 1},
    {"chnStart", 'c', 1},
    {"encFrameNum", 'n', 1},
    {"picFormat", 'l', 1},
    {"log", '0', 1},
    {"write", 'W', 1},

    {"encThdNum", 't', 1},

    {"strideY", '0', 1},
    {"strideU", '0', 1},
    {"strideV", '0', 1},
    {"bPerf", '0', 1},
    {"vbCnt", '0', 1},
    {"chnNum", 'N', 1},
    {"syncSend", '0', 1},
    {"syncGet", '0', 1},

    {"bChnCustom", '0', 1},
    {"codecType", '0', 1},

    {"picW", 'w', 1},
    {"picH", 'h', 1},
    {"maxPicW", '0', 1},
    {"maxPicH", '0', 1},

    {"bCrop", '0', 1},
    {"cropX", 'X', 1},
    {"cropY", 'Y', 1},
    {"cropW", 'x', 1},
    {"cropH", 'y', 1},

    {"bLinkMode", '0', 1},
    {"bSourcePool", '0', 1},
    {"strmBufSize", '0', 1},
    {"mbLinesPerSlice", '0', 1},

    {"rcMode", 'r', 1},

    {"gopLen", 'g', 1},
    {"srcFrameRate", 'j', 1},
    {"dstFrameRate", 'f', 1},
    {"bitRate", 'B', 1},

    {"startQp", '0', 1},
    {"vq", '0', 1}, /* video quality level for any picture*/
    {"minQp", '0', 1},  /* Minimum frame header qp for any picture */
    {"maxQp", '0', 1},  /* Maximum frame header qp for any picture */
    {"minIqp", '0', 1}, /* Minimum frame header qp for I picture */
    {"maxIqp", '0', 1}, /* Maximum frame header qp for I picture */
    {"maxIprop", '0', 1},
    {"minIprop", '0', 1}, /* HDR Conformance (ANNEX C) */
    {"IQp", '0', 1},
    {"PQp", '0', 1},
    {"BQp", '0', 1},
    {"fixedQp", '0', 1},
    {"deltaQpI", '0', 1}, /* QP adjustment for intra frames */

    {"ctbRcMode", '0', 1},
    {"qpMapQpType", '0', 1},
    {"qpMapBlkUnit", '0', 1},
    {"qpMapBlkType", '0', 1},
    {"svcRegionNum", '0', 1},
    {"svcQpMod", '0', 1},
    {"enableEncodeOnce", '0', 1},
    {"roiEnable", '0', 1},
    {"vencRoiMap", '0', 1},
    {"jencRoiMap", '0', 1},
    {"qRoiFactor", '0', 1},
    {"bDynProfileLevel", '0', 1},
    {"bDynRcMode", '0', 1},
    {"gopMode", 'M', 1},
    {"temporalID", '0', 1},
    {"virILen", 'L', 1},
    {"qFactor", 'q', 1},
    {"dynAttrIdx", '0', 1},
    {"ut", '0', 1},         /* unit test case id */
    {"refreshNum", 'R', 1}, /* intra refresh num */

    {"fbcType", '0', 1},
    {"bitDepth", '0', 1},
    {"compLevel", '0', 1},
    {"yHdrSize", '0', 1},
    {"yPadSize", '0', 1},
    {"uvHdrSize", '0', 1},
    {"uvPadSize", '0', 1},
    {"bGetStrmBufInfo", '0', 1},
    {"bQueryStatus", '0', 1},
    {"grpId", '0', 1},

    {"bDynRes", '0', 1},
    {"newInput", '0', 1},
    {"newPicW", '0', 1},
    {"newPicH", '0', 1},
    {"bIDR", '0', 1},
    {"drpFrmMode", '0', 1},
    {"encFrmGap", '0', 1},
    {"frmThrBps", '0', 1},
    {"pri", '0', 1},
    {"thrI", '0', 1},
    {"thrP", '0', 1},

    {"sliceNum", '0', 1},
    {"dynRc", '0', 1},
    {"uDataSize", '0', 1},

    {"ltStaTime", '0', 1},
    {"shtStaTime", '0', 1},
    {"ltMinBt", '0', 1},
    {"ltMaxBt", '0', 1},
    {"minQpDelta", '0', 1},
    {"maxQpDelta", '0', 1},

    {"rotation", '0', 1},
    {"thumbEnable", '0', 1},
    {"thumbWidth", '0', 1},
    {"thumbHeight", '0', 1},
    {"bDeBreathEffect", '0', 1},
    {"bRefRingbuf", '0', 1},
    {"bSleep", '0', 1},
    {"newGop", '0', 1},

    /* OSD config */
    {"osdEnable", '0', 1},
    /* OSD region 1 */
    {"osdInput1", '0', 1},
    {"osdFormat1", '0', 1},
    {"osdWidth1", '0', 1},
    {"osdHeight1", '0', 1},
    {"osdXoffset1", '0', 1},
    {"osdYoffset1", '0', 1},

    /* OSD region 2 */
    {"osdInput2", '0', 1},
    {"osdFormat2", '0', 1},
    {"osdWidth2", '0', 1},
    {"osdHeight2", '0', 1},
    {"osdXoffset2", '0', 1},
    {"osdYoffset2", '0', 1},

    /* OSD region 3 */
    {"osdInput3", '0', 1},
    {"osdFormat3", '0', 1},
    {"osdWidth3", '0', 1},
    {"osdHeight3", '0', 1},
    {"osdXoffset3", '0', 1},
    {"osdYoffset3", '0', 1},

    /* OSD region 4 */
    {"osdInput4", '0', 1},
    {"osdFormat4", '0', 1},
    {"osdWidth4", '0', 1},
    {"osdHeight4", '0', 1},
    {"osdXoffset4", '0', 1},
    {"osdYoffset4", '0', 1},

    /* OSD region 5 */
    {"osdInput5", '0', 1},
    {"osdFormat5", '0', 1},
    {"osdWidth5", '0', 1},
    {"osdHeight5", '0', 1},
    {"osdXoffset5", '0', 1},
    {"osdYoffset5", '0', 1},

    /* OSD region 6 */
    {"osdInput6", '0', 1},
    {"osdFormat6", '0', 1},
    {"osdWidth6", '0', 1},
    {"osdHeight6", '0', 1},
    {"osdXoffset6", '0', 1},
    {"osdYoffset6", '0', 1},

    /* OSD region 7 */
    {"osdInput7", '0', 1},
    {"osdFormat7", '0', 1},
    {"osdWidth7", '0', 1},
    {"osdHeight7", '0', 1},
    {"osdXoffset7", '0', 1},
    {"osdYoffset7", '0', 1},

    /* OSD region 8 */
    {"osdInput8", '0', 1},
    {"osdFormat8", '0', 1},
    {"osdWidth8", '0', 1},
    {"osdHeight8", '0', 1},
    {"osdXoffset8", '0', 1},
    {"osdYoffset8", '0', 1},
    /* VUI */
    {"bSignalPresent", '0', 1},
    {"videoFormat", '0', 1},
    {"bFullRange", '0', 1},
    {"bColorPresent", '0', 1},
    {"colorPrimaries", '0', 1},
    {"transferCharacter", '0', 1},
    {"matrixCoeffs", '0', 1},
    {"bSetPartition", '0', 1},
    {NULL, 0, 0} /* Format of last line */
};

AX_VOID SampleAdjustParams(SAMPLE_VENC_CMD_PARA_T *pstPara)
{
    AX_S32 maxCuSize = MAX_CU_SIZE;
    pstPara->maxPicW = VENCMAX3(pstPara->maxPicW, pstPara->picW, pstPara->newPicW);
    pstPara->maxPicH = VENCMAX3(pstPara->maxPicH, pstPara->picH, pstPara->newPicH);
    switch (pstPara->picFormat) {
    case AX_FORMAT_YUV420_PLANAR:
        if (0 == pstPara->strideY)
            pstPara->strideY = pstPara->picW;
        if (0 == pstPara->strideU)
            pstPara->strideU = pstPara->strideY / 2;
        if (0 == pstPara->strideV)
            pstPara->strideV = pstPara->strideY / 2;
        break;
    case AX_FORMAT_YUV420_SEMIPLANAR:
    case AX_FORMAT_YUV420_SEMIPLANAR_VU:
        if (0 == pstPara->strideY)
            pstPara->strideY = pstPara->picW;
        if (0 == pstPara->strideU)
            pstPara->strideU = pstPara->strideY;
        break;
    case AX_FORMAT_YUV422_INTERLEAVED_YUYV:
    case AX_FORMAT_YUV422_INTERLEAVED_UYVY:
        if (0 == pstPara->strideY)
            pstPara->strideY = 2 * pstPara->picW;
        break;
    case AX_FORMAT_YUV420_PLANAR_10BIT_I010:
        if (0 == pstPara->strideY)
            pstPara->strideY = 2 * pstPara->picW;
        if (0 == pstPara->strideU)
            pstPara->strideU = pstPara->strideY / 2;
        if (0 == pstPara->strideV)
            pstPara->strideV = pstPara->strideY / 2;
        break;
    case AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P010:
        if (0 == pstPara->strideY)
            pstPara->strideY = 2 * pstPara->picW;
        if (0 == pstPara->strideU)
            pstPara->strideU = pstPara->strideY;
        break;
    default:
        SAMPLE_LOG_ERR("Unknown input format(%d)!\n", pstPara->picFormat);
        break;
    }

    if (pstPara->bChnCustom) {
        if (SAMPLE_CODEC_H264 == pstPara->codecType)
            maxCuSize = MAX_AVC_CU_SIZE;
        else if (SAMPLE_CODEC_H265 == pstPara->codecType)
            maxCuSize = MAX_CU_SIZE;
        else
            maxCuSize = 0;
    }

    /* JPEG/MJPEG unsupport p-skip mode rate jam */
    if (SAMPLE_CODEC_JPEG == pstPara->codecType || SAMPLE_CODEC_MJPEG == pstPara->codecType) {
        if (pstPara->drpFrmMode)
            pstPara->drpFrmMode = 0;
    }

    pstPara->qpMapSize = TILE_ALIGN(pstPara->picW, maxCuSize) * TILE_ALIGN(pstPara->picH, maxCuSize) / (8 * 8);

    /* add output stream suffix */
    switch (pstPara->rcMode) {
    case SAMPLE_RC_CBR:
        strcpy(pstPara->strmSuffix, "cbr");
        break;
    case SAMPLE_RC_VBR:
        strcpy(pstPara->strmSuffix, "vbr");
        break;
    case SAMPLE_RC_AVBR:
        strcpy(pstPara->strmSuffix, "avbr");
        break;
    case SAMPLE_RC_CVBR:
        strcpy(pstPara->strmSuffix, "cvbr");
        break;
    case SAMPLE_RC_QPMAP:
        strcpy(pstPara->strmSuffix, "qpmap");
        break;
    case SAMPLE_RC_FIXQP:
        strcpy(pstPara->strmSuffix, "fixqp");
        break;
    default:
        SAMPLE_LOG_ERR("Unknow rc mode(%d).\n", pstPara->rcMode);
        break;
    }

    if (UT_CASE_RESOLUTION == pstPara->ut)
        pstPara->bDynRes = AX_TRUE;
}

AX_VOID SampleGetFrameSize(SAMPLE_VENC_CMD_PARA_T *pstPara)
{
    AX_S32 frameSize;

    if (1 == pstPara->fbcType) {
        pstPara->frameSize = pstPara->yHdrSize + pstPara->yPadSize + pstPara->uvHdrSize + pstPara->uvPadSize;
        return;
    }

    switch (pstPara->picFormat) {
    case AX_FORMAT_YUV420_PLANAR:         // I420
    case AX_FORMAT_YUV420_SEMIPLANAR:     // NV12
    case AX_FORMAT_YUV420_SEMIPLANAR_VU:  // NV21
        frameSize = pstPara->strideY * pstPara->picH * 3 / 2;
        pstPara->lumaSize = pstPara->strideY * pstPara->picH;
        pstPara->chromaSize = pstPara->lumaSize / 2;
        break;
    case AX_FORMAT_YUV422_INTERLEAVED_YUYV:  // YUYV422
    case AX_FORMAT_YUV422_INTERLEAVED_UYVY:  // UYVY422
        frameSize = pstPara->strideY * pstPara->picH * 2;
        break;
    case AX_FORMAT_YUV420_PLANAR_10BIT_I010:
    case AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P010:
        frameSize = pstPara->strideY * pstPara->picH * 3 / 2;
        break;
    default:
        SAMPLE_LOG_WARN("Invalid picture format.\n");
        frameSize = 0;
        break;
    }

    pstPara->frameSize = frameSize;
}

AX_S32 SampleCmdLineParse(AX_S32 argc, AX_CHAR **argv, SAMPLE_VENC_CMD_PARA_T *pstPara)
{
    SAMPLE_PARAMETER_T prm;
    AX_S32 status = AX_SUCCESS;
    AX_S32 ret;
    AX_CHAR *p;
    SAMPLE_PARAMETER_T *pPrm = &prm;
    SAMPLE_VENC_CMD_PARA_T *cml = pstPara;
    AX_CHAR *optarg;

    prm.cnt = 1;

    if (argc < 2) {
        SampleHelp(argv[0]);
        exit(0);
    }

    while ((ret = SampleGetOption(argc, argv, options, &prm)) != -1) {
        if (ret == -2)
            status = -1;

        p = prm.argument;
        optarg = p;

        switch (pPrm->short_opt) {
        case 'H':
            SampleHelp(argv[0]);
            exit(0);
        case 'i':
            pstPara->input = p;
            break;
        case 'o':
            pstPara->output = p;
            break;
        case 'c':
            pstPara->u32StartChan = atoi(p);
            break;
        case 'p':
            pstPara->bLoopEncode = atoi(p);
            break;
        case 'n':
            pstPara->encFrameNum = atoi(p);
            break;
        case 't':
            pstPara->encThdNum = atoi(p);
            break;
        case 'l':
            pstPara->picFormat = atoi(p);
            break;
        case 'W':
            pstPara->bSaveStrm = atoi(p);
            break;
        case 'N':
            pstPara->chnNum = atoi(p);
            break;
        case 'w':
            pstPara->picW = atoi(p);
            break;
        case 'h':
            pstPara->picH = atoi(p);
            break;
        case 'X':
            pstPara->cropX = atoi(p);
            break;
        case 'Y':
            pstPara->cropY = atoi(p);
            break;
        case 'x':
            pstPara->cropW = atoi(p);
            break;
        case 'y':
            pstPara->cropH = atoi(p);
            break;
        case 'r':
            pstPara->rcMode = atoi(p);
            break;
        case 'g':
            pstPara->gopLen = atoi(p);
            break;
        case 'j':
            pstPara->srcFrameRate = atof(p);
            break;
        case 'f':
            pstPara->dstFrameRate = atof(p);
            break;
        case 'B':
            pstPara->bitRate = atoi(p);
            break;
        case 'M':
            pstPara->gopMode = atoi(p);
            break;
        case 'L':
            pstPara->virILen = atoi(p);
            break;
        case 'q':
            pstPara->qFactor = atoi(p);
            break;
        case 'R':
            pstPara->refreshNum = atoi(p);
            break;

        /* long options */
        case '0':
            if (strcmp(pPrm->longOpt, "log") == 0) {
                cml->logLevel = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "dynRc") == 0) {
                cml->rcModeNew = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "uDataSize") == 0) {
                cml->uDataSize = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "write") == 0) {
                cml->bSaveStrm = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "maxPicW") == 0) {
                cml->maxPicW = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "maxPicH") == 0) {
                cml->maxPicH = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "encThdNum") == 0) {
                cml->encThdNum = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "grpId") == 0) {
                cml->grpId = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "strideY") == 0) {
                cml->strideY = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "strideU") == 0) {
                cml->strideU = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "strideV") == 0) {
                cml->strideV = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bPerf") == 0) {
                cml->bPerf = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "vbCnt") == 0) {
                cml->vbCnt = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "syncSend") == 0) {
                cml->syncSend = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "syncGet") == 0) {
                cml->syncGet = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bChnCustom") == 0) {
                cml->bChnCustom = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "codecType") == 0) {
                cml->codecType = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bCrop") == 0) {
                cml->bCrop = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bLinkMode") == 0) {
                cml->bLinkMode = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bSourcePool") == 0) {
                cml->bSourcePool = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "strmBufSize") == 0) {
                cml->strmBufSize = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "mbLinesPerSlice") == 0) {
                cml->mbLinesPerSlice = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "startQp") == 0) {
                cml->startQp = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "vq") == 0) {
                cml->vq = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "minQp") == 0) {
                cml->qpMin = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "maxQp") == 0) {
                cml->qpMax = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "minIqp") == 0) {
                cml->qpMinI = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "maxIqp") == 0) {
                cml->qpMaxI = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "maxIprop") == 0) {
                cml->maxIprop = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "minIprop") == 0) {
                cml->minIprop = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "deltaQpI") == 0) {
                cml->IQpDelta = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "ctbRcMode") == 0) {
                cml->ctbRcMode = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "qpMapQpType") == 0) {
                cml->qpMapQpType = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "qpMapBlkType") == 0) {
                cml->qpMapBlkType = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "qpMapBlkUnit") == 0) {
                cml->qpMapBlkUnit = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "svcRegionNum") == 0) {
                cml->svcRegionNum = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "svcQpMod") == 0) {
                cml->svcQpMod = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "enableEncodeOnce") == 0) {
                cml->enableEncodeOnce = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "roiEnable") == 0) {
                cml->roiEnable = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "vencRoiMap") == 0) {
                cml->vencRoiMap = optarg;
                break;
            }
            if (strcmp(pPrm->longOpt, "jencRoiMap") == 0) {
                cml->jencRoiMap = optarg;
                break;
            }
            if (strcmp(pPrm->longOpt, "qRoiFactor") == 0) {
                cml->qRoiFactor = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bDynProfileLevel") == 0) {
                cml->bDynProfileLevel = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "dynAttrIdx") == 0) {
                cml->dynAttrIdx = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "refreshNum") == 0) {
                cml->refreshNum = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "ut") == 0) {
                cml->ut = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "fbcType") == 0) {
                cml->fbcType = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bitDepth") == 0) {
                cml->bitDepth = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "compLevel") == 0) {
                cml->compLevel = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "yHdrSize") == 0) {
                cml->yHdrSize = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "yPadSize") == 0) {
                cml->yPadSize = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "uvHdrSize") == 0) {
                cml->uvHdrSize = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "uvPadSize") == 0) {
                cml->uvPadSize = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "IQp") == 0) {
                cml->IQp = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "PQp") == 0) {
                cml->PQp = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "BQp") == 0) {
                cml->BQp = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "fixedQp") == 0) {
                cml->fixedQp = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "gopMode") == 0) {
                cml->gopMode = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "temporalID") == 0) {
                cml->temporalID = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bGetStrmBufInfo") == 0) {
                cml->bGetStrmBufInfo = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bQueryStatus") == 0) {
                cml->bQueryStatus = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bDynRes") == 0) {
                cml->bDynRes = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "newInput") == 0) {
                cml->newInput = optarg;
                break;
            }
            if (strcmp(pPrm->longOpt, "newPicW") == 0) {
                cml->newPicW = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "newPicH") == 0) {
                cml->newPicH = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bIDR") == 0) {
                cml->bInsertIDR = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "drpFrmMode") == 0) {
                cml->drpFrmMode = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "encFrmGap") == 0) {
                cml->encFrmGap = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "frmThrBps") == 0) {
                cml->frmThrBps = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "pri") == 0) {
                cml->pri = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "thrI") == 0) {
                cml->thrI = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "thrP") == 0) {
                cml->thrP = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "sliceNum") == 0) {
                cml->sliceNum = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "ltStaTime") == 0) {
                cml->ltStaTime = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "shtStaTime") == 0) {
                cml->shtStaTime = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "ltMinBt") == 0) {
                cml->ltMinBt = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "ltMaxBt") == 0) {
                cml->ltMaxBt = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "minQpDelta") == 0) {
                cml->minQpDelta = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "maxQpDelta") == 0) {
                cml->maxQpDelta = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "rotation") == 0) {
                cml->rotation = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "thumbEnable") == 0) {
                cml->bThumbEnable = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "thumbWidth") == 0) {
                cml->u32ThumbWidth = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "thumbHeight") == 0) {
                cml->u32ThumbHeight = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bDeBreathEffect") == 0) {
                cml->bDeBreathEffect = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bRefRingbuf") == 0) {
                cml->bRefRingbuf = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bSleep") == 0) {
                cml->bSleep = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "newGop") == 0) {
                cml->newgopLen = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "osdEnable") == 0) {
                cml->osdEnable = atoi(optarg);
                break;
            }

            for (int i = 0; i < AX_MAX_VENC_OSD_NUM; i++) {
                char optionTemp[50];

                memset(optionTemp, 0, sizeof(optionTemp));

                sprintf(optionTemp, "osdInput%d", i + 1);
                if (strcmp(pPrm->longOpt, optionTemp) == 0) {
                    if (strlen(optarg) < MAX_FILE_PATH) {
                        strcpy(cml->osdInput[i], optarg);
                    } else {
                        status = -1;
                    }
                    break;
                }

                sprintf(optionTemp, "osdWidth%d", i + 1);
                if (strcmp(pPrm->longOpt, optionTemp) == 0) {
                    cml->osdWidth[i] = atoi(optarg);
                    break;
                }

                sprintf(optionTemp, "osdFormat%d", i + 1);
                if (strcmp(pPrm->longOpt, optionTemp) == 0) {
                    cml->osdFormat[i] = atoi(optarg);
                    break;
                }

                sprintf(optionTemp, "osdHeight%d", i + 1);
                if (strcmp(pPrm->longOpt, optionTemp) == 0) {
                    cml->osdHeight[i] = atoi(optarg);
                    break;
                }

                sprintf(optionTemp, "osdXoffset%d", i + 1);
                if (strcmp(pPrm->longOpt, optionTemp) == 0) {
                    cml->osdXoffset[i] = atoi(optarg);
                    break;
                }

                sprintf(optionTemp, "osdYoffset%d", i + 1);
                if (strcmp(pPrm->longOpt, optionTemp) == 0) {
                    cml->osdYoffset[i] = atoi(optarg);
                    break;
                }

            }
               /* VUI */
            if (strcmp(pPrm->longOpt, "bSignalPresent") == 0) {
                cml->bSignalPresent = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "videoFormat") == 0) {
                cml->videoFormat = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bFullRange") == 0) {
                cml->bFullRange = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bColorPresent") == 0) {
                cml->bColorPresent = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "colorPrimaries") == 0) {
                cml->colorPrimaries = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "transferCharacter") == 0) {
                cml->transferCharacter = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "matrixCoeffs") == 0) {
                cml->matrixCoeffs = atoi(optarg);
                break;
            }
            if (strcmp(pPrm->longOpt, "bSetPartition") == 0) {
                cml->bSetPartition = atoi(optarg);
                break;
            }
            break;
        default:
            SAMPLE_LOG_ERR("unknow options:%c.\n", prm.short_opt);
            return -1;
        }
    }

    SampleAdjustParams(pstPara);
    SampleGetFrameSize(pstPara);

    if (SampleParameterCheck(pstPara) != AX_SUCCESS)
        status = -1;

    return status;
}
