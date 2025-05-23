/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#pragma once

#include <vector>
#include "AXStage.hpp"
#include "IObserver.h"
#include "ax_venc_comm.h"
#include "ax_venc_rc.h"
#include "AXAlgo.hpp"

#define MAX_VENC_CHANNEL_NUM (16)
#define APP_ENCODER_TYPE_MAX 4
#define APP_RC_TYPE_MAX 5
#define APP_ENCODE_PARSE_INVALID (0)

typedef struct _stAppVencRcParams {
    AX_VENC_H264_CBR_T tH264Cbr{0};
    AX_VENC_H264_VBR_T tH264Vbr{0};
    AX_VENC_H264_FIXQP_T tH264FixQp{0};
    AX_VENC_H264_AVBR_T tH264AVbr{0};
    AX_VENC_H264_CVBR_T tH264CVbr{0};

    AX_VENC_H265_CBR_T tH265Cbr{0};
    AX_VENC_H265_VBR_T tH265Vbr{0};
    AX_VENC_H265_FIXQP_T tH265FixQp{0};
    AX_VENC_H265_AVBR_T tH265AVbr{0};
    AX_VENC_H265_CVBR_T tH265CVbr{0};

    AX_VENC_MJPEG_CBR_T tMjpegCbr{0};
    AX_VENC_MJPEG_VBR_T tMjpegVbr{0};
    AX_VENC_MJPEG_FIXQP_T tMjpegFixQp{0};
} APP_VENC_RC_PARAMS_T;

typedef struct _stRCInfo {
    AX_VENC_RC_MODE_E eRcType{AX_VENC_RC_MODE_BUTT};
    AX_U32 nMinQp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nMaxQp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nMinIQp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nMaxIQp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nMinIProp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nMaxIProp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nFixQp{APP_ENCODE_PARSE_INVALID};
    AX_U32 nIdrQpDeltaRange{APP_ENCODE_PARSE_INVALID};
    AX_S32 nIntraQpDelta{APP_ENCODE_PARSE_INVALID};
    AX_S32 nDeBreathQpDelta{APP_ENCODE_PARSE_INVALID};
    AX_S32 nBitrate{APP_ENCODE_PARSE_INVALID};
    AX_U32 nGop{APP_ENCODE_PARSE_INVALID};

    AX_U32 nMinQpDelta{APP_ENCODE_PARSE_INVALID};
    AX_U32 nMaxQpDelta{APP_ENCODE_PARSE_INVALID};
    AX_U32 nShtStaTime{APP_ENCODE_PARSE_INVALID};
    AX_U32 nLtStaTime{APP_ENCODE_PARSE_INVALID};
    AX_U32 nLtMinBitrate{APP_ENCODE_PARSE_INVALID};
    AX_U32 nLtMaxBitrate{APP_ENCODE_PARSE_INVALID};
} RC_INFO_T;

typedef struct _APP_ENC_RC_CONFIG {
    AX_PAYLOAD_TYPE_E ePayloadType{PT_BUTT};
    RC_INFO_T stRCInfo[APP_RC_TYPE_MAX];
    AX_BOOL GetRcInfo(AX_VENC_RC_MODE_E type, RC_INFO_T& rcInfo) {
        for (AX_U8 i = 0; i < APP_RC_TYPE_MAX; i++) {
            if (stRCInfo[i].eRcType == type) {
                rcInfo = stRCInfo[i];
                return AX_TRUE;
            }
        }
        return AX_FALSE;
    }
    AX_BOOL SetRcInfo(AX_VENC_RC_MODE_E type, RC_INFO_T rcInfo) {
        for (AX_U8 i = 0; i < APP_RC_TYPE_MAX; i++) {
            if (stRCInfo[i].eRcType == type) {
                stRCInfo[i] = rcInfo;
                return AX_TRUE;
            }
        }
        return AX_FALSE;
    }
} APP_ENC_RC_CONFIG;

typedef struct _stVideoConfig {
    AX_U8 nPipeSrc{APP_ENCODE_PARSE_INVALID}; /* From which sensor (Equals to web preview sensor id) */
    AX_S32 nChannel{APP_ENCODE_PARSE_INVALID};
    AX_PAYLOAD_TYPE_E ePayloadType{PT_BUTT};
    AX_VENC_RC_MODE_E eRcType{AX_VENC_RC_MODE_BUTT};
    AX_U32 nGop{APP_ENCODE_PARSE_INVALID};
    AX_F32 fSrcFrameRate{APP_ENCODE_PARSE_INVALID};
    AX_F32 fDstFrameRate{APP_ENCODE_PARSE_INVALID};
    AX_S32 nMaxWidth{APP_ENCODE_PARSE_INVALID};
    AX_S32 nMaxHeight{APP_ENCODE_PARSE_INVALID};
    AX_S32 nWidth{APP_ENCODE_PARSE_INVALID};
    AX_S32 nHeight{APP_ENCODE_PARSE_INVALID};
    AX_U32 nBufSize{APP_ENCODE_PARSE_INVALID};
    AX_U8 nInFifoDepth{APP_ENCODE_PARSE_INVALID};
    AX_U8 nOutFifoDepth{APP_ENCODE_PARSE_INVALID};
    AX_MEMORY_SOURCE_E eMemSource;
    AX_S32 nOffsetCropX{APP_ENCODE_PARSE_INVALID};
    AX_S32 nOffsetCropY{APP_ENCODE_PARSE_INVALID};
    AX_S32 nOffsetCropW{APP_ENCODE_PARSE_INVALID};
    AX_S32 nOffsetCropH{APP_ENCODE_PARSE_INVALID};
    AX_IMG_FORMAT_E eImgFormat;
    AX_U32 nBitrate{APP_ENCODE_PARSE_INVALID};
    APP_ENC_RC_CONFIG stEncodeCfg[APP_ENCODER_TYPE_MAX];
    AX_BOOL bLink{AX_FALSE};
    AX_BOOL bDeBreathEffect{AX_FALSE};
    AX_BOOL bRefRingbuf{AX_FALSE};
    AX_BOOL bEnable{AX_FALSE};

    AX_BOOL GetEncCfg(AX_PAYLOAD_TYPE_E type, APP_ENC_RC_CONFIG& cfg) {
        for (AX_U8 i = 0; i < APP_ENCODER_TYPE_MAX; i++) {
            if (stEncodeCfg[i].ePayloadType == type) {
                cfg = stEncodeCfg[i];
                return AX_TRUE;
            }
        }
        return AX_FALSE;
    }

} VIDEO_CONFIG_T, MJPEG_CONFIG_T, *VIDEO_CONFIG_PTR;

typedef struct _APP_VIDEO_RESOLUTION_T {
    AX_U32 nWidth;
    AX_U32 nHeight;
} APP_VIDEO_RESOLUTION_T;

class CVideoEncoder : public CAXStage {
public:
    CVideoEncoder(VIDEO_CONFIG_T& tConfig);
    virtual ~CVideoEncoder();

    virtual AX_BOOL Init() override;
    virtual AX_BOOL DeInit() override;
    virtual AX_BOOL Start(STAGE_START_PARAM_PTR pStartParams) override;
    virtual AX_BOOL Stop(AX_VOID) override;

    AX_BOOL InitParams();

    AX_VOID RegObserver(IObserver* pObserver);
    AX_VOID UnregObserver(IObserver* pObserver);

    AX_VOID StartRecv();
    AX_VOID StopRecv();

    AX_BOOL ResetChn();
    AX_BOOL UpdateRotation(AX_U8 nRotation);
    AX_BOOL UpdateChnResolution(const VIDEO_CONFIG_T& attr);
    AX_BOOL UpdateRcInfo(RC_INFO_T& tRcInfo);
    AX_BOOL UpdateLinkMode(AX_BOOL bLink);
    AX_BOOL UpdatePayloadType(AX_PAYLOAD_TYPE_E ePayloadType);
    AX_BOOL UpdateSvcParam(const AX_APP_ALGO_SVC_PARAM_T& tParam);
    AX_BOOL UpdateSvcRegion(AX_VENC_SVC_REGION_T& tRegion);

    VIDEO_CONFIG_T* GetChnCfg() {
        return &m_tVideoConfig;
    }

    AX_VOID SetChnCfg(VIDEO_CONFIG_T& tConfig) {
        m_tVideoConfig = tConfig;
    }

    AX_S32 GetChannel() {
        return m_tVideoConfig.nChannel;
    }

    AX_U8 GetSensorSrc() {
        return m_tVideoConfig.nPipeSrc;
    }

    const APP_VIDEO_RESOLUTION_T GetResolution() {
        return m_tCurResolution;
    }

    AX_U8 GetRotation() {
        return m_nRotation;
    }

    AX_VOID SetSendFlag(AX_BOOL bSend) {
        m_bSend = bSend;
    }

    const AX_APP_ALGO_SVC_PARAM_T& GetSvcParam() {
        return m_tSvcParam;
    }

protected:
    virtual AX_BOOL ProcessFrame(CAXFrame* pFrame) override;
    AX_VOID NotifyAll(AX_U32 nChannel, AX_VOID* pStream);

    AX_VOID FrameGetThreadFunc(CVideoEncoder* pCaller);
    AX_VOID StartWorkThread();
    AX_VOID StopWorkThread();
    AX_BOOL InitRcParams(VIDEO_CONFIG_T& tConfig);
    AX_BOOL UpdateSvcParamInternal(const AX_APP_ALGO_SVC_PARAM_T& tParam);

private:
    AX_BOOL GetResolutionByRotate(AX_U8 nRotation, AX_U32& nWidth, AX_U32& nHeight);
    AX_BOOL RefreshChnResolution();

private:
    VIDEO_CONFIG_T m_tVideoConfig;
    AX_VENC_CHN_ATTR_T m_tVencChnAttr;
    APP_VENC_RC_PARAMS_T m_tVencRcParams;
    APP_ENC_RC_CONFIG m_CurEncCfg;
    AX_U32 m_CurSvcRegionNum{0};
    AX_APP_ALGO_SVC_PARAM_T m_tSvcParam;

    std::thread m_hGetThread;
    AX_BOOL m_bGetThreadRunning;
    AX_BOOL m_bSend{AX_FALSE};

    std::vector<IObserver*> m_vecObserver;

    /* Update resolution should be small than creation resolution ,so <m_tCurResolution> recorde the current resolution without rotation*/
    APP_VIDEO_RESOLUTION_T m_tCurResolution{0, 0};
    AX_U8 m_nRotation{0};
    std::mutex m_mtx;

    const AX_U32 WIDTH_STRIDE{2};
};
