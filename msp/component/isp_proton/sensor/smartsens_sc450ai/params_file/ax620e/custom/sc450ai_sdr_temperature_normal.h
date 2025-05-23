#ifndef __SC450AI_SDR_H__
#define __SC450AI_SDR_H__

/********************************************************************
* Store the default parameters of the sdr mode
* warn: user need to add 'static' when defining global variables.
        Limit the scope of the variable to this sensor
*********************************************************************/

#include "ax_isp_iq_api.h"
#include "ax_isp_api.h"


const static AX_ISP_VERSION_T ax_isp_version_param_sdr = {
    /* nIspMajor */
    4,
    /* nIspMinor1 */
    0,
    /* nIspMinor2 */
    31,
    /* szBuildTime[32] */
    "Oct 25 2023 22:41:15",
    /* szIspVersion[64] */
    "AX620E_ISP_V4.0.31",
};

const static AX_ISP_IQ_SCENE_PARAM_T scene_param_sdr = {
    /* nAutoMode */
    1,
    /* tManualParam */
    {
        /* nAiWorkMode */
        1,
    },
    /* tAutoParam */
    {
        /* nSceneNum */
        2,
        /* nDelta */
        5000,
        /* nRefValStart[4] */
        {1024, 32768, /*0 - 1*/},
        /* nRefValEnd[4] */
        {32768, 1024000, /*0 - 1*/},
        /* nAiWorkMode[4] */
        {0, 1, /*0 - 1*/},
    },
};

const static AX_ISP_IQ_AE_PARAM_T ae_param_sdr = {
    /* nEnable */
    1,
    /* tExpManual */
    {
        /* nIspGain */
        1024,
        /* nAGain */
        1135,
        /* nDgain */
        1024,
        /* nHcgLcg */
        2,
        /* nSnsTotalAGain */
        1135,
        /* nSysTotalGain */
        1135,
        /* nShutter */
        20000,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        512,
        /* nHdrRealRatioLtoS */
        1024,
        /* nHdrRealRatioStoVS */
        1024,
        /* nLumaHdrRealRatioLtoS */
        1024,
        /* nSetPoint */
        28622,
        /* nShortAgain */
        0,
        /* nShortDgain */
        0,
        /* nShortShutter */
        0,
        /* nVsAgain */
        0,
        /* nVsDgain */
        0,
        /* nVsShutter */
        0,
        /* nHdrRatio */
        1024,
        /* nHdrMaxShutterHwLimit */
        39914,
        /* nRealMaxShutter */
        39914,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        28622,
        /* nFaceTarget */
        35840,
        /* nTolerance */
        5242880,
        /* nAgainLcg2HcgTh */
        15872,
        /* nAgainHcg2LcgTh */
        1228,
        /* nAgainLcg2HcgRatio */
        1024,
        /* nAgainHcg2LcgRatio */
        1024,
        /* nLuxk */
        108910,
        /* nCompensationMode */
        1,
        /* nMaxIspGain */
        16916,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        1024,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        61976,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        1024000,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        39914,
        /* nMinShutter */
        30,
        /* nPositionWeightMode */
        1,
        /* nRoiStartX */
        0,
        /* nRoiStartY */
        0,
        /* nRoiWidth */
        0,
        /* nRoiHeight */
        0,
        /* nWeightRoi */
        1024,
        /* nWeightBackgnd */
        1024,
        /* nGridWeightRow */
        15,
        /* nGridWeightColumn */
        17,
        /* nGridWeightTable[54][72] */
        {
            {139, 175, 215, 255, 293, 327, 354, 371, 377, 371, 354, 327, 293, 255, 215, 175, 139, /*0 - 16*/},
            {181, 228, 280, 332, 383, 427, 461, 484, 491, 484, 461, 427, 383, 332, 280, 228, 181, /*0 - 16*/},
            {226, 286, 350, 416, 479, 534, 578, 605, 615, 605, 578, 534, 479, 416, 350, 286, 226, /*0 - 16*/},
            {272, 344, 421, 500, 575, 642, 694, 727, 739, 727, 694, 642, 575, 500, 421, 344, 272, /*0 - 16*/},
            {313, 396, 486, 577, 664, 740, 801, 839, 852, 839, 801, 740, 664, 577, 486, 396, 313, /*0 - 16*/},
            {347, 439, 538, 639, 735, 820, 887, 929, 944, 929, 887, 820, 735, 639, 538, 439, 347, /*0 - 16*/},
            {369, 467, 572, 679, 781, 872, 943, 988, 1003, 988, 943, 872, 781, 679, 572, 467, 369, /*0 - 16*/},
            {377, 476, 583, 693, 797, 890, 962, 1008, 1024, 1008, 962, 890, 797, 693, 583, 476, 377, /*0 - 16*/},
            {369, 467, 572, 679, 781, 872, 943, 988, 1003, 988, 943, 872, 781, 679, 572, 467, 369, /*0 - 16*/},
            {347, 439, 538, 639, 735, 820, 887, 929, 944, 929, 887, 820, 735, 639, 538, 439, 347, /*0 - 16*/},
            {313, 396, 486, 577, 664, 740, 801, 839, 852, 839, 801, 740, 664, 577, 486, 396, 313, /*0 - 16*/},
            {272, 344, 421, 500, 575, 642, 694, 727, 739, 727, 694, 642, 575, 500, 421, 344, 272, /*0 - 16*/},
            {226, 286, 350, 416, 479, 534, 578, 605, 615, 605, 578, 534, 479, 416, 350, 286, 226, /*0 - 16*/},
            {181, 228, 280, 332, 383, 427, 461, 484, 491, 484, 461, 427, 383, 332, 280, 228, 181, /*0 - 16*/},
            {139, 175, 215, 255, 293, 327, 354, 371, 377, 371, 354, 327, 293, 255, 215, 175, 139, /*0 - 16*/},
        },
        /* tAntiFlickerParam */
        {
            /* nEnable */
            1,
            /* nFlickerPeriod */
            0,
            /* nAntiFlickerTolerance */
            300,
            /* nOverExpMode */
            1,
            /* nUnderExpMode */
            0,
        },
        /* nSetPointMode */
        1,
        /* nFaceTargetMode */
        0,
        /* nStrategyMode */
        2,
        /* tAeRouteParam */
        {
            /* nTableNum */
            2,
            /* nUsedTableId */
            0,
            /* tRouteTable[8] */
            {
                /* 0 */
                {
                    /* sTableName[32] */
                    "DefaultAeRoute",
                    /* nRouteCurveNum */
                    6,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            30,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 1 */
                        {
                            /* nIntergrationTime */
                            40000,
                            /* nGain */
                            65535,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            66000,
                            /* nGain */
                            122880,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            100000,
                            /* nGain */
                            245760,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            120000,
                            /* nGain */
                            368640,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 5 */
                        {
                            /* nIntergrationTime */
                            166000,
                            /* nGain */
                            1024000,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                    },
                },
                /* 1 */
                {
                    /* sTableName[32] */
                    "PirisAeRoute",
                    /* nRouteCurveNum */
                    5,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            30,
                            /* nGain */
                            1024,
                            /* nAperture */
                            5,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 1 */
                        {
                            /* nIntergrationTime */
                            30,
                            /* nGain */
                            1024,
                            /* nAperture */
                            296,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            166000,
                            /* nGain */
                            1024,
                            /* nAperture */
                            296,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            166000,
                            /* nGain */
                            1024,
                             /* nAperture */
                            512,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            166000,
                            /* nGain */
                            1024000,
                            /* nAperture */
                            512,
                            /* nIncrementPriority */
                            0,
                        },
                    },
                },
            },
        },
        /* tAeSetPointCurve */
        {
            /* nSize */
            4,
            /* nRefList[10] */
            {1024, 10240, 20480, 51200, /*0 - 3*/},
            /* nSetPointList[10] */
            {28672, 24576, 20480, 16384, /*0 - 3*/},
        },
        /* tFaceUIParam */
        {
            /* nEnable */
            0,
            /* tFaceTargetCurve */
            {
                /* nSize */
                6,
                /* nRefList[10] */
                {102, 1536, 10240, 51200, 307200, 2048000, /*0 - 5*/},
                /* nFaceTargetList[10] */
                {18432, 18432, 18432, 22528, 25600, 25600, /*0 - 5*/},
            },
            /* nFaceScoreList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nFaceScoreWeightList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nFaceDistanceList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nFaceDistanceWeightList[6] */
            {1024, 922, 768, 563, 307, 0, /*0 - 5*/},
            /* nFaceTargetWeight */
            512,
            /* nNoFaceFrameTh */
            20,
            /* nToNormalFrameTh */
            8,
            /* nWithFaceFrameTh */
            3,
            /* nToFaceAeFrameTh */
            8,
            /* tFaceWeightList */
            {
                /* nSize */
                5,
                /* nFaceLumaDiff[5] */
                {2048, 5120, 10240, 15360, 20480, /*0 - 4*/},
                /* nFaceWeight[5] */
                {0, 102, 154, 154, 205, /*0 - 4*/},
            },
            /* nFaceWeightDampRatio */
            870,
            /* nToleranceAdjustRatio */
            2048,
            /* nNoFaceDampRatio */
            512,
        },
        /* tAeHdrRatio */
        {
            /* nHdrMode */
            0,
            /* tRatioStrategyParam */
            {
                /* nShortNonSatAreaPercent */
                104438168,
                /* nTolerance */
                8388608,
                /* nConvergeCntFrameNum */
                3,
                /* nDampRatio */
                922,
                /* tHdrRatioParamCurve */
                {
                    /* nListSize */
                    6,
                    /* nRefList[10] */
                    {102, 10240, 30720, 102400, 204800, 1024000, /*0 - 5*/},
                    /* nSatLumaList[10] */
                    {153600, 122880, 61440, 40960, 20480, 10240, /*0 - 5*/},
                    /* nMinRatioList[10] */
                    {1024, 1024, 1024, 1024, 1024, 1024, /*0 - 5*/},
                    /* nMaxRatioList[10] */
                    {32768, 32768, 32768, 32768, 32768, 32768, /*0 - 5*/},
                },
            },
            /* nFixedHdrRatio */
            1024,
        },
        /* nMultiCamSyncMode */
        0,
        /* nMultiCamSyncRatio */
        1048576,
        /* tSlowShutterParam */
        {
            /* nFrameRateMode */
            0,
            /* nFpsIncreaseDelayFrame */
            0,
        },
        /* tIrisParam */
        {
            /* nIrisType */
            0,
            /* tDcIrisParam */
            {
                /* nBigStepFactor */
                104858,
                /* nSmallStepFactor */
                10486,
                /* nLumaDiffOverThresh */
                35840,
                /* nLumaDiffUnderThresh */
                35840,
                /* nLumaSpeedThresh */
                205,
                /* nSpeedDownFactor */
                209715,
                /* nMinUserPwmDuty */
                30720,
                /* nMaxUserPwmDuty */
                66560,
                /* nOpenPwmDuty */
                61440,
                /* nConvergeLumaDiffTolerance */
                52429,
                /* nConvergeFrameCntThresh */
                10,
            },
        },
        /* tLumaWeightParam */
        {
            /* nEnable */
            0,
            /* nLumaWeightNum */
            16,
            /* nLumaSplitList[64] */
            {0, 16384, 32768, 49152, 65535, 81920, 98304, 114688, 131072, 147456, 163840, 180224, 196608, 212992, 229376, 245760, /*0 - 15*/},
            /* nWeightList[64] */
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        },
        /* tTimeSmoothParam */
        {
            /* tStateMachineParam */
            {
                /* nToFastLumaThOver */
                1536,
                /* nToFastLumaThUnder */
                819,
                /* nToSlowFrameTh */
                3,
                /* nToConvergedFrameTh */
                2,
            },
            /* tConvergeSpeedParam */
            {
                /* nFastOverKneeCnt */
                14,
                /* nFastOverLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 40960, 51200, 71680, 92160, 112640, 153600, 209920, 262144, /*0 - 13*/},
                /* nFastOverStepFactorList[16] */
                {102, 154, 184, 184, 205, 205, 205, 205, 256, 307, 358, 410, 512, 614, /*0 - 13*/},
                /* nFastOverSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 102, 307, /*0 - 13*/},
                /* nFastOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nFastUnderKneeCnt */
                11,
                /* nFastUnderLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nFastUnderStepFactorList[16] */
                {102, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, /*0 - 10*/},
                /* nFastUnderSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nFastUnderSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nSlowOverKneeCnt */
                14,
                /* nSlowOverLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 40960, 51200, 81920, 92160, 112640, 153600, 209920, 262144, /*0 - 13*/},
                /* nSlowOverStepFactorList[16] */
                {82, 102, 123, 154, 154, 174, 184, 184, 184, 184, 184, 184, 184, 184, /*0 - 13*/},
                /* nSlowOverSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowUnderKneeCnt */
                11,
                /* nSlowUnderLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nSlowUnderStepFactorList[16] */
                {123, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, /*0 - 10*/},
                /* nSlowUnderSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nSlowUnderSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
            },
        },
        /* tSleepWakeUpParam */
        {
            /* nEnableSleepSetting */
            0,
            /* nNoiseLevel */
            41,
            /* nLinearLumaTh */
            51,
            /* nAeStatsDelayFrame */
            4,
            /* tSleepSetting */
            {
                /* nAGain */
                1024,
                /* nDGain */
                1024,
                /* nIspGain */
                1024,
                /* nHcgLcg */
                1,
                /* nShutter */
                1000,
            },
            /* nOverExpCompLumaTh */
            102400,
            /* tOverExpCompLut */
            {
                /* nLutNum */
                5,
                /* nLumaSplitList[8] */
                {179200, 220160, 225280, 240640, 244736, /*0 - 4*/},
                /* nCompFactorList[8] */
                {1024, 1208, 1352, 2324, 2560, /*0 - 4*/},
            },
        },
        /* tHistPointCtrlParam */
        {
            /* nEnable */
            0,
            /* nHistPointLutNum */
            1,
            /* tHistPointCtrlLut[10] */
            {
                /* 0 */
                {
                    /* nLuxStart */
                    102400,
                    /* nLuxEnd */
                    204800,
                    /* tHistPointTh */
                    {
                        /* nLumaThList[2] */
                        {0, 0, /*0 - 1*/},
                        /* nPercentThList[2] */
                        {102400, 102400, /*0 - 1*/},
                    },
                },
            },
        },
    },
    /* nLogLevel */
    4,
    /* nLogTarget */
    2,
};

const static AX_ISP_IQ_AWB_PARAM_T awb_param_sdr = {
    /* nEnable */
    1,
    /* tManualParam */
    {
        /* nManualMode */
        0,
        /* tGain */
        {
            /* nGainR */
            416,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            795,
        },
        /* tManualLightSource */
        {
            /* nLightSourceIndex */
            0,
            /* tLightSource[15] */
            {
                /* 0 */
                {
                    /* szName[32] */
                    "Shade",
                    /* nColorTemperature */
                    7500,
                    /* nGreenShift */
                    0,
                },
                /* 1 */
                {
                    /* szName[32] */
                    "Day",
                    /* nColorTemperature */
                    6500,
                    /* nGreenShift */
                    0,
                },
                /* 2 */
                {
                    /* szName[32] */
                    "Cloudy",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 3 */
                {
                    /* szName[32] */
                    "Flourescent",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 4 */
                {
                    /* szName[32] */
                    "Sunset",
                    /* nColorTemperature */
                    3500,
                    /* nGreenShift */
                    0,
                },
                /* 5 */
                {
                    /* szName[32] */
                    "Incandescent",
                    /* nColorTemperature */
                    2800,
                    /* nGreenShift */
                    0,
                },
                /* 6 */
                {
                    /* szName[32] */
                    "Candle",
                    /* nColorTemperature */
                    2000,
                    /* nGreenShift */
                    0,
                },
                /* 7 */
                {
                    /* szName[32] */
                    "Flash",
                    /* nColorTemperature */
                    3500,
                    /* nGreenShift */
                    0,
                },
                /* 8 */
                {
                    /* szName[32] */
                    "UserDefined-1",
                    /* nColorTemperature */
                    2800,
                    /* nGreenShift */
                    0,
                },
                /* 9 */
                {
                    /* szName[32] */
                    "UserDefined-2",
                    /* nColorTemperature */
                    2000,
                    /* nGreenShift */
                    0,
                },
                /* 10 */
                {
                    /* szName[32] */
                    "UserDefined-3",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 11 */
                {
                    /* szName[32] */
                    "UserDefined-4",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 12 */
                {
                    /* szName[32] */
                    "UserDefined-5",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 13 */
                {
                    /* szName[32] */
                    "UserDefined-6",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 14 */
                {
                    /* szName[32] */
                    "UserDefined-7",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
            },
        },
    },
    /* tAutoParam */
    {
        /* tCenterPnt */
        {
            /* nRg */
            1361720,
            /* nBg */
            1482959,
        },
        /* nCenterPntRadius */
        1247962,
        /* nLowCut */
        0,
        /* nHighCut */
        0,
        /* nCctMax */
        13000,
        /* nCctMin */
        900,
        /* nPartCtrlPntNum */
        8,
        /* nCtrlPntNum */
        57,
        /* nCtrlSegKbNum */
        56,
        /* nCctList[512] */
        {
            900, 1075, 1250, 1425, 1600, 1775, 1950, 2125, 2300, 2362, 2425, 2487, 2550, 2612, 2675, 2737, 2800, 2925, 3050, 3175, 3300, 3425, 3550, 3675, 3800, 3950, 4100, 4250, 4400, 4550, 4700, 4850,  /* 0 - 31*/
            5000, 5187, 5375, 5562, 5750, 5937, 6125, 6312, 6500, 6625, 6750, 6875, 7000, 7125, 7250, 7375, 7500, 8187, 8875, 9562, 10250, 10937, 11625, 12312, 13000, /*32 - 56*/
        },
        /* tChordKB */
        {
            /* nK */
            -449,
            /* nB */
            1162,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1898562,
                /* nBg */
                356369,
            },
            /* 1 */
            {
                /* nRg */
                1791261,
                /* nBg */
                403482,
            },
            /* 2 */
            {
                /* nRg */
                1697435,
                /* nBg */
                444680,
            },
            /* 3 */
            {
                /* nRg */
                1614010,
                /* nBg */
                481307,
            },
            /* 4 */
            {
                /* nRg */
                1538733,
                /* nBg */
                514358,
            },
            /* 5 */
            {
                /* nRg */
                1469904,
                /* nBg */
                544588,
            },
            /* 6 */
            {
                /* nRg */
                1406182,
                /* nBg */
                572564,
            },
            /* 7 */
            {
                /* nRg */
                1346518,
                /* nBg */
                598758,
            },
            /* 8 */
            {
                /* nRg */
                1290074,
                /* nBg */
                623536,
            },
            /* 9 */
            {
                /* nRg */
                1270560,
                /* nBg */
                632113,
            },
            /* 10 */
            {
                /* nRg */
                1251329,
                /* nBg */
                640554,
            },
            /* 11 */
            {
                /* nRg */
                1232360,
                /* nBg */
                648880,
            },
            /* 12 */
            {
                /* nRg */
                1213632,
                /* nBg */
                657101,
            },
            /* 13 */
            {
                /* nRg */
                1195114,
                /* nBg */
                665238,
            },
            /* 14 */
            {
                /* nRg */
                1176785,
                /* nBg */
                673280,
            },
            /* 15 */
            {
                /* nRg */
                1158614,
                /* nBg */
                681260,
            },
            /* 16 */
            {
                /* nRg */
                1140589,
                /* nBg */
                689177,
            },
            /* 17 */
            {
                /* nRg */
                1113263,
                /* nBg */
                701172,
            },
            /* 18 */
            {
                /* nRg */
                1086136,
                /* nBg */
                713084,
            },
            /* 19 */
            {
                /* nRg */
                1059156,
                /* nBg */
                724933,
            },
            /* 20 */
            {
                /* nRg */
                1032239,
                /* nBg */
                736750,
            },
            /* 21 */
            {
                /* nRg */
                1005322,
                /* nBg */
                748568,
            },
            /* 22 */
            {
                /* nRg */
                978321,
                /* nBg */
                760417,
            },
            /* 23 */
            {
                /* nRg */
                951184,
                /* nBg */
                772339,
            },
            /* 24 */
            {
                /* nRg */
                923827,
                /* nBg */
                784345,
            },
            /* 25 */
            {
                /* nRg */
                916403,
                /* nBg */
                787606,
            },
            /* 26 */
            {
                /* nRg */
                908969,
                /* nBg */
                790878,
            },
            /* 27 */
            {
                /* nRg */
                901492,
                /* nBg */
                794150,
            },
            /* 28 */
            {
                /* nRg */
                894005,
                /* nBg */
                797442,
            },
            /* 29 */
            {
                /* nRg */
                886487,
                /* nBg */
                800745,
            },
            /* 30 */
            {
                /* nRg */
                878937,
                /* nBg */
                804059,
            },
            /* 31 */
            {
                /* nRg */
                871356,
                /* nBg */
                807383,
            },
            /* 32 */
            {
                /* nRg */
                863744,
                /* nBg */
                810728,
            },
            /* 33 */
            {
                /* nRg */
                855848,
                /* nBg */
                814198,
            },
            /* 34 */
            {
                /* nRg */
                847920,
                /* nBg */
                817680,
            },
            /* 35 */
            {
                /* nRg */
                839941,
                /* nBg */
                821182,
            },
            /* 36 */
            {
                /* nRg */
                831930,
                /* nBg */
                824695,
            },
            /* 37 */
            {
                /* nRg */
                823877,
                /* nBg */
                828239,
            },
            /* 38 */
            {
                /* nRg */
                815771,
                /* nBg */
                831793,
            },
            /* 39 */
            {
                /* nRg */
                807624,
                /* nBg */
                835369,
            },
            /* 40 */
            {
                /* nRg */
                799413,
                /* nBg */
                838976,
            },
            /* 41 */
            {
                /* nRg */
                790637,
                /* nBg */
                842824,
            },
            /* 42 */
            {
                /* nRg */
                781808,
                /* nBg */
                846704,
            },
            /* 43 */
            {
                /* nRg */
                772905,
                /* nBg */
                850615,
            },
            /* 44 */
            {
                /* nRg */
                763940,
                /* nBg */
                854558,
            },
            /* 45 */
            {
                /* nRg */
                754901,
                /* nBg */
                858522,
            },
            /* 46 */
            {
                /* nRg */
                745789,
                /* nBg */
                862517,
            },
            /* 47 */
            {
                /* nRg */
                736604,
                /* nBg */
                866554,
            },
            /* 48 */
            {
                /* nRg */
                727345,
                /* nBg */
                870622,
            },
            /* 49 */
            {
                /* nRg */
                674853,
                /* nBg */
                893670,
            },
            /* 50 */
            {
                /* nRg */
                619320,
                /* nBg */
                918049,
            },
            /* 51 */
            {
                /* nRg */
                560044,
                /* nBg */
                944075,
            },
            /* 52 */
            {
                /* nRg */
                496186,
                /* nBg */
                972114,
            },
            /* 53 */
            {
                /* nRg */
                426687,
                /* nBg */
                1002627,
            },
            /* 54 */
            {
                /* nRg */
                350224,
                /* nBg */
                1036203,
            },
            /* 55 */
            {
                /* nRg */
                265090,
                /* nBg */
                1073585,
            },
            /* 56 */
            {
                /* nRg */
                168999,
                /* nBg */
                1115769,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1862481,
                /* nBg */
                432097,
            },
            /* 1 */
            {
                /* nRg */
                1794040,
                /* nBg */
                396498,
            },
            /* 2 */
            {
                /* nRg */
                1723083,
                /* nBg */
                365366,
            },
            /* 3 */
            {
                /* nRg */
                1649882,
                /* nBg */
                338889,
            },
            /* 4 */
            {
                /* nRg */
                1574762,
                /* nBg */
                317215,
            },
            /* 5 */
            {
                /* nRg */
                1498038,
                /* nBg */
                300501,
            },
            /* 6 */
            {
                /* nRg */
                1420034,
                /* nBg */
                288851,
            },
            /* 7 */
            {
                /* nRg */
                1341087,
                /* nBg */
                282361,
            },
            /* 8 */
            {
                /* nRg */
                1261531,
                /* nBg */
                281113,
            },
            /* 9 */
            {
                /* nRg */
                1232685,
                /* nBg */
                278586,
            },
            /* 10 */
            {
                /* nRg */
                1203660,
                /* nBg */
                276761,
            },
            /* 11 */
            {
                /* nRg */
                1174479,
                /* nBg */
                275650,
            },
            /* 12 */
            {
                /* nRg */
                1145160,
                /* nBg */
                275230,
            },
            /* 13 */
            {
                /* nRg */
                1115716,
                /* nBg */
                275534,
            },
            /* 14 */
            {
                /* nRg */
                1086167,
                /* nBg */
                276551,
            },
            /* 15 */
            {
                /* nRg */
                1056524,
                /* nBg */
                278303,
            },
            /* 16 */
            {
                /* nRg */
                1026818,
                /* nBg */
                280777,
            },
            /* 17 */
            {
                /* nRg */
                983732,
                /* nBg */
                293612,
            },
            /* 18 */
            {
                /* nRg */
                941139,
                /* nBg */
                307998,
            },
            /* 19 */
            {
                /* nRg */
                899091,
                /* nBg */
                323916,
            },
            /* 20 */
            {
                /* nRg */
                857651,
                /* nBg */
                341332,
            },
            /* 21 */
            {
                /* nRg */
                816851,
                /* nBg */
                360228,
            },
            /* 22 */
            {
                /* nRg */
                776775,
                /* nBg */
                380581,
            },
            /* 23 */
            {
                /* nRg */
                737443,
                /* nBg */
                402360,
            },
            /* 24 */
            {
                /* nRg */
                698928,
                /* nBg */
                425554,
            },
            /* 25 */
            {
                /* nRg */
                688694,
                /* nBg */
                432034,
            },
            /* 26 */
            {
                /* nRg */
                678523,
                /* nBg */
                438619,
            },
            /* 27 */
            {
                /* nRg */
                668415,
                /* nBg */
                445299,
            },
            /* 28 */
            {
                /* nRg */
                658369,
                /* nBg */
                452083,
            },
            /* 29 */
            {
                /* nRg */
                648397,
                /* nBg */
                458962,
            },
            /* 30 */
            {
                /* nRg */
                638488,
                /* nBg */
                465935,
            },
            /* 31 */
            {
                /* nRg */
                628642,
                /* nBg */
                473002,
            },
            /* 32 */
            {
                /* nRg */
                618870,
                /* nBg */
                480164,
            },
            /* 33 */
            {
                /* nRg */
                608856,
                /* nBg */
                487672,
            },
            /* 34 */
            {
                /* nRg */
                598915,
                /* nBg */
                495263,
            },
            /* 35 */
            {
                /* nRg */
                589048,
                /* nBg */
                502960,
            },
            /* 36 */
            {
                /* nRg */
                579265,
                /* nBg */
                510761,
            },
            /* 37 */
            {
                /* nRg */
                569555,
                /* nBg */
                518657,
            },
            /* 38 */
            {
                /* nRg */
                559929,
                /* nBg */
                526647,
            },
            /* 39 */
            {
                /* nRg */
                550377,
                /* nBg */
                534732,
            },
            /* 40 */
            {
                /* nRg */
                540908,
                /* nBg */
                542911,
            },
            /* 41 */
            {
                /* nRg */
                530936,
                /* nBg */
                551719,
            },
            /* 42 */
            {
                /* nRg */
                521058,
                /* nBg */
                560632,
            },
            /* 43 */
            {
                /* nRg */
                511275,
                /* nBg */
                569639,
            },
            /* 44 */
            {
                /* nRg */
                501586,
                /* nBg */
                578762,
            },
            /* 45 */
            {
                /* nRg */
                491992,
                /* nBg */
                587979,
            },
            /* 46 */
            {
                /* nRg */
                482502,
                /* nBg */
                597300,
            },
            /* 47 */
            {
                /* nRg */
                473107,
                /* nBg */
                606727,
            },
            /* 48 */
            {
                /* nRg */
                463817,
                /* nBg */
                616248,
            },
            /* 49 */
            {
                /* nRg */
                414575,
                /* nBg */
                670355,
            },
            /* 50 */
            {
                /* nRg */
                368585,
                /* nBg */
                727261,
            },
            /* 51 */
            {
                /* nRg */
                326002,
                /* nBg */
                786757,
            },
            /* 52 */
            {
                /* nRg */
                286985,
                /* nBg */
                848644,
            },
            /* 53 */
            {
                /* nRg */
                251658,
                /* nBg */
                912712,
            },
            /* 54 */
            {
                /* nRg */
                220149,
                /* nBg */
                978751,
            },
            /* 55 */
            {
                /* nRg */
                192571,
                /* nBg */
                1046510,
            },
            /* 56 */
            {
                /* nRg */
                168999,
                /* nBg */
                1115769,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                -2148,
                /* nB */
                4239,
            },
            /* 1 */
            {
                /* nK */
                -2572,
                /* nB */
                4790,
            },
            /* 2 */
            {
                /* nK */
                -3166,
                /* nB */
                5561,
            },
            /* 3 */
            {
                /* nK */
                -4064,
                /* nB */
                6728,
            },
            /* 4 */
            {
                /* nK */
                -5602,
                /* nB */
                8725,
            },
            /* 5 */
            {
                /* nK */
                -8881,
                /* nB */
                12983,
            },
            /* 6 */
            {
                /* nK */
                -20968,
                /* nB */
                28679,
            },
            /* 7 */
            {
                /* nK */
                59577,
                /* nB */
                -75920,
            },
            /* 8 */
            {
                /* nK */
                12284,
                /* nB */
                -14503,
            },
            /* 9 */
            {
                /* nK */
                9558,
                /* nB */
                -10963,
            },
            /* 10 */
            {
                /* nK */
                7814,
                /* nB */
                -8699,
            },
            /* 11 */
            {
                /* nK */
                6603,
                /* nB */
                -7125,
            },
            /* 12 */
            {
                /* nK */
                5711,
                /* nB */
                -5967,
            },
            /* 13 */
            {
                /* nK */
                5026,
                /* nB */
                -5078,
            },
            /* 14 */
            {
                /* nK */
                4483,
                /* nB */
                -4373,
            },
            /* 15 */
            {
                /* nK */
                4042,
                /* nB */
                -3800,
            },
            /* 16 */
            {
                /* nK */
                3676,
                /* nB */
                -3324,
            },
            /* 17 */
            {
                /* nK */
                3222,
                /* nB */
                -2735,
            },
            /* 18 */
            {
                /* nK */
                2861,
                /* nB */
                -2266,
            },
            /* 19 */
            {
                /* nK */
                2565,
                /* nB */
                -1882,
            },
            /* 20 */
            {
                /* nK */
                2319,
                /* nB */
                -1563,
            },
            /* 21 */
            {
                /* nK */
                2110,
                /* nB */
                -1291,
            },
            /* 22 */
            {
                /* nK */
                1930,
                /* nB */
                -1057,
            },
            /* 23 */
            {
                /* nK */
                1773,
                /* nB */
                -853,
            },
            /* 24 */
            {
                /* nK */
                1634,
                /* nB */
                -672,
            },
            /* 25 */
            {
                /* nK */
                1599,
                /* nB */
                -627,
            },
            /* 26 */
            {
                /* nK */
                1565,
                /* nB */
                -584,
            },
            /* 27 */
            {
                /* nK */
                1533,
                /* nB */
                -541,
            },
            /* 28 */
            {
                /* nK */
                1501,
                /* nB */
                -500,
            },
            /* 29 */
            {
                /* nK */
                1470,
                /* nB */
                -460,
            },
            /* 30 */
            {
                /* nK */
                1440,
                /* nB */
                -421,
            },
            /* 31 */
            {
                /* nK */
                1411,
                /* nB */
                -383,
            },
            /* 32 */
            {
                /* nK */
                1382,
                /* nB */
                -346,
            },
            /* 33 */
            {
                /* nK */
                1354,
                /* nB */
                -309,
            },
            /* 34 */
            {
                /* nK */
                1326,
                /* nB */
                -273,
            },
            /* 35 */
            {
                /* nK */
                1299,
                /* nB */
                -237,
            },
            /* 36 */
            {
                /* nK */
                1272,
                /* nB */
                -203,
            },
            /* 37 */
            {
                /* nK */
                1247,
                /* nB */
                -170,
            },
            /* 38 */
            {
                /* nK */
                1221,
                /* nB */
                -137,
            },
            /* 39 */
            {
                /* nK */
                1197,
                /* nB */
                -105,
            },
            /* 40 */
            {
                /* nK */
                1173,
                /* nB */
                -74,
            },
            /* 41 */
            {
                /* nK */
                1148,
                /* nB */
                -41,
            },
            /* 42 */
            {
                /* nK */
                1123,
                /* nB */
                -10,
            },
            /* 43 */
            {
                /* nK */
                1100,
                /* nB */
                20,
            },
            /* 44 */
            {
                /* nK */
                1076,
                /* nB */
                50,
            },
            /* 45 */
            {
                /* nK */
                1054,
                /* nB */
                80,
            },
            /* 46 */
            {
                /* nK */
                1031,
                /* nB */
                109,
            },
            /* 47 */
            {
                /* nK */
                1010,
                /* nB */
                137,
            },
            /* 48 */
            {
                /* nK */
                988,
                /* nB */
                165,
            },
            /* 49 */
            {
                /* nK */
                879,
                /* nB */
                307,
            },
            /* 50 */
            {
                /* nK */
                779,
                /* nB */
                436,
            },
            /* 51 */
            {
                /* nK */
                688,
                /* nB */
                554,
            },
            /* 52 */
            {
                /* nK */
                604,
                /* nB */
                663,
            },
            /* 53 */
            {
                /* nK */
                526,
                /* nB */
                765,
            },
            /* 54 */
            {
                /* nK */
                452,
                /* nB */
                861,
            },
            /* 55 */
            {
                /* nK */
                382,
                /* nB */
                952,
            },
            /* 56 */
            {
                /* nK */
                315,
                /* nB */
                1039,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1903082,
                /* nBg */
                346900,
            },
            /* 1 */
            {
                /* nRg */
                1828937,
                /* nBg */
                308806,
            },
            /* 2 */
            {
                /* nRg */
                1752108,
                /* nBg */
                275566,
            },
            /* 3 */
            {
                /* nRg */
                1672930,
                /* nBg */
                247370,
            },
            /* 4 */
            {
                /* nRg */
                1591728,
                /* nBg */
                224385,
            },
            /* 5 */
            {
                /* nRg */
                1508848,
                /* nBg */
                206748,
            },
            /* 6 */
            {
                /* nRg */
                1424637,
                /* nBg */
                194584,
            },
            /* 7 */
            {
                /* nRg */
                1339461,
                /* nBg */
                187999,
            },
            /* 8 */
            {
                /* nRg */
                1253688,
                /* nBg */
                187066,
            },
            /* 9 */
            {
                /* nRg */
                1222629,
                /* nBg */
                184759,
            },
            /* 10 */
            {
                /* nRg */
                1191392,
                /* nBg */
                183197,
            },
            /* 11 */
            {
                /* nRg */
                1160019,
                /* nBg */
                182389,
            },
            /* 12 */
            {
                /* nRg */
                1128498,
                /* nBg */
                182337,
            },
            /* 13 */
            {
                /* nRg */
                1096873,
                /* nBg */
                183060,
            },
            /* 14 */
            {
                /* nRg */
                1065144,
                /* nBg */
                184549,
            },
            /* 15 */
            {
                /* nRg */
                1033351,
                /* nBg */
                186814,
            },
            /* 16 */
            {
                /* nRg */
                1001495,
                /* nBg */
                189866,
            },
            /* 17 */
            {
                /* nRg */
                955148,
                /* nBg */
                203675,
            },
            /* 18 */
            {
                /* nRg */
                909336,
                /* nBg */
                219152,
            },
            /* 19 */
            {
                /* nRg */
                864111,
                /* nBg */
                236265,
            },
            /* 20 */
            {
                /* nRg */
                819525,
                /* nBg */
                254993,
            },
            /* 21 */
            {
                /* nRg */
                775653,
                /* nBg */
                275325,
            },
            /* 22 */
            {
                /* nRg */
                732535,
                /* nBg */
                297219,
            },
            /* 23 */
            {
                /* nRg */
                690236,
                /* nBg */
                320644,
            },
            /* 24 */
            {
                /* nRg */
                648806,
                /* nBg */
                345590,
            },
            /* 25 */
            {
                /* nRg */
                637796,
                /* nBg */
                352563,
            },
            /* 26 */
            {
                /* nRg */
                626860,
                /* nBg */
                359641,
            },
            /* 27 */
            {
                /* nRg */
                615986,
                /* nBg */
                366834,
            },
            /* 28 */
            {
                /* nRg */
                605186,
                /* nBg */
                374121,
            },
            /* 29 */
            {
                /* nRg */
                594448,
                /* nBg */
                381524,
            },
            /* 30 */
            {
                /* nRg */
                583795,
                /* nBg */
                389022,
            },
            /* 31 */
            {
                /* nRg */
                573204,
                /* nBg */
                396634,
            },
            /* 32 */
            {
                /* nRg */
                562697,
                /* nBg */
                404341,
            },
            /* 33 */
            {
                /* nRg */
                551928,
                /* nBg */
                412405,
            },
            /* 34 */
            {
                /* nRg */
                541233,
                /* nBg */
                420573,
            },
            /* 35 */
            {
                /* nRg */
                530621,
                /* nBg */
                428857,
            },
            /* 36 */
            {
                /* nRg */
                520094,
                /* nBg */
                437246,
            },
            /* 37 */
            {
                /* nRg */
                509650,
                /* nBg */
                445729,
            },
            /* 38 */
            {
                /* nRg */
                499290,
                /* nBg */
                454327,
            },
            /* 39 */
            {
                /* nRg */
                489024,
                /* nBg */
                463030,
            },
            /* 40 */
            {
                /* nRg */
                478843,
                /* nBg */
                471828,
            },
            /* 41 */
            {
                /* nRg */
                468116,
                /* nBg */
                481296,
            },
            /* 42 */
            {
                /* nRg */
                457483,
                /* nBg */
                490880,
            },
            /* 43 */
            {
                /* nRg */
                446956,
                /* nBg */
                500580,
            },
            /* 44 */
            {
                /* nRg */
                436543,
                /* nBg */
                510384,
            },
            /* 45 */
            {
                /* nRg */
                426225,
                /* nBg */
                520303,
            },
            /* 46 */
            {
                /* nRg */
                416012,
                /* nBg */
                530328,
            },
            /* 47 */
            {
                /* nRg */
                405914,
                /* nBg */
                540468,
            },
            /* 48 */
            {
                /* nRg */
                395921,
                /* nBg */
                550712,
            },
            /* 49 */
            {
                /* nRg */
                342947,
                /* nBg */
                608908,
            },
            /* 50 */
            {
                /* nRg */
                293475,
                /* nBg */
                670113,
            },
            /* 51 */
            {
                /* nRg */
                247684,
                /* nBg */
                734108,
            },
            /* 52 */
            {
                /* nRg */
                205710,
                /* nBg */
                800682,
            },
            /* 53 */
            {
                /* nRg */
                167720,
                /* nBg */
                869595,
            },
            /* 54 */
            {
                /* nRg */
                133830,
                /* nBg */
                940615,
            },
            /* 55 */
            {
                /* nRg */
                104155,
                /* nBg */
                1013501,
            },
            /* 56 */
            {
                /* nRg */
                78800,
                /* nBg */
                1088002,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1826399,
                /* nBg */
                507825,
            },
            /* 1 */
            {
                /* nRg */
                1763023,
                /* nBg */
                474439,
            },
            /* 2 */
            {
                /* nRg */
                1697267,
                /* nBg */
                445183,
            },
            /* 3 */
            {
                /* nRg */
                1629393,
                /* nBg */
                420227,
            },
            /* 4 */
            {
                /* nRg */
                1559683,
                /* nBg */
                399738,
            },
            /* 5 */
            {
                /* nRg */
                1488433,
                /* nBg */
                383831,
            },
            /* 6 */
            {
                /* nRg */
                1415945,
                /* nBg */
                372632,
            },
            /* 7 */
            {
                /* nRg */
                1342523,
                /* nBg */
                366236,
            },
            /* 8 */
            {
                /* nRg */
                1268504,
                /* nBg */
                364705,
            },
            /* 9 */
            {
                /* nRg */
                1241619,
                /* nBg */
                362000,
            },
            /* 10 */
            {
                /* nRg */
                1214555,
                /* nBg */
                359945,
            },
            /* 11 */
            {
                /* nRg */
                1187334,
                /* nBg */
                358540,
            },
            /* 12 */
            {
                /* nRg */
                1159966,
                /* nBg */
                357806,
            },
            /* 13 */
            {
                /* nRg */
                1132462,
                /* nBg */
                357732,
            },
            /* 14 */
            {
                /* nRg */
                1104843,
                /* nBg */
                358330,
            },
            /* 15 */
            {
                /* nRg */
                1077129,
                /* nBg */
                359620,
            },
            /* 16 */
            {
                /* nRg */
                1049331,
                /* nBg */
                361580,
            },
            /* 17 */
            {
                /* nRg */
                1009139,
                /* nBg */
                373566,
            },
            /* 18 */
            {
                /* nRg */
                969409,
                /* nBg */
                386977,
            },
            /* 19 */
            {
                /* nRg */
                930192,
                /* nBg */
                401825,
            },
            /* 20 */
            {
                /* nRg */
                891531,
                /* nBg */
                418067,
            },
            /* 21 */
            {
                /* nRg */
                853478,
                /* nBg */
                435694,
            },
            /* 22 */
            {
                /* nRg */
                816086,
                /* nBg */
                454684,
            },
            /* 23 */
            {
                /* nRg */
                779407,
                /* nBg */
                474994,
            },
            /* 24 */
            {
                /* nRg */
                743482,
                /* nBg */
                496627,
            },
            /* 25 */
            {
                /* nRg */
                733930,
                /* nBg */
                502677,
            },
            /* 26 */
            {
                /* nRg */
                724440,
                /* nBg */
                508822,
            },
            /* 27 */
            {
                /* nRg */
                715013,
                /* nBg */
                515050,
            },
            /* 28 */
            {
                /* nRg */
                705650,
                /* nBg */
                521373,
            },
            /* 29 */
            {
                /* nRg */
                696338,
                /* nBg */
                527790,
            },
            /* 30 */
            {
                /* nRg */
                687100,
                /* nBg */
                534291,
            },
            /* 31 */
            {
                /* nRg */
                677925,
                /* nBg */
                540887,
            },
            /* 32 */
            {
                /* nRg */
                668803,
                /* nBg */
                547577,
            },
            /* 33 */
            {
                /* nRg */
                659460,
                /* nBg */
                554571,
            },
            /* 34 */
            {
                /* nRg */
                650191,
                /* nBg */
                561659,
            },
            /* 35 */
            {
                /* nRg */
                640984,
                /* nBg */
                568842,
            },
            /* 36 */
            {
                /* nRg */
                631861,
                /* nBg */
                576109,
            },
            /* 37 */
            {
                /* nRg */
                622802,
                /* nBg */
                583470,
            },
            /* 38 */
            {
                /* nRg */
                613826,
                /* nBg */
                590925,
            },
            /* 39 */
            {
                /* nRg */
                604913,
                /* nBg */
                598475,
            },
            /* 40 */
            {
                /* nRg */
                596084,
                /* nBg */
                606108,
            },
            /* 41 */
            {
                /* nRg */
                586783,
                /* nBg */
                614319,
            },
            /* 42 */
            {
                /* nRg */
                577566,
                /* nBg */
                622623,
            },
            /* 43 */
            {
                /* nRg */
                568433,
                /* nBg */
                631033,
            },
            /* 44 */
            {
                /* nRg */
                559405,
                /* nBg */
                639537,
            },
            /* 45 */
            {
                /* nRg */
                550450,
                /* nBg */
                648146,
            },
            /* 46 */
            {
                /* nRg */
                541600,
                /* nBg */
                656838,
            },
            /* 47 */
            {
                /* nRg */
                532844,
                /* nBg */
                665626,
            },
            /* 48 */
            {
                /* nRg */
                524173,
                /* nBg */
                674507,
            },
            /* 49 */
            {
                /* nRg */
                478235,
                /* nBg */
                724975,
            },
            /* 50 */
            {
                /* nRg */
                435337,
                /* nBg */
                778054,
            },
            /* 51 */
            {
                /* nRg */
                395617,
                /* nBg */
                833555,
            },
            /* 52 */
            {
                /* nRg */
                359232,
                /* nBg */
                891279,
            },
            /* 53 */
            {
                /* nRg */
                326275,
                /* nBg */
                951048,
            },
            /* 54 */
            {
                /* nRg */
                296883,
                /* nBg */
                1012641,
            },
            /* 55 */
            {
                /* nRg */
                271151,
                /* nBg */
                1075849,
            },
            /* 56 */
            {
                /* nRg */
                249173,
                /* nBg */
                1140452,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1930145,
                /* nBg */
                290110,
            },
            /* 1 */
            {
                /* nRg */
                1852194,
                /* nBg */
                250358,
            },
            /* 2 */
            {
                /* nRg */
                1771464,
                /* nBg */
                215703,
            },
            /* 3 */
            {
                /* nRg */
                1688302,
                /* nBg */
                186363,
            },
            /* 4 */
            {
                /* nRg */
                1603042,
                /* nBg */
                162498,
            },
            /* 5 */
            {
                /* nRg */
                1516052,
                /* nBg */
                144253,
            },
            /* 6 */
            {
                /* nRg */
                1427710,
                /* nBg */
                131754,
            },
            /* 7 */
            {
                /* nRg */
                1338381,
                /* nBg */
                125095,
            },
            /* 8 */
            {
                /* nRg */
                1248466,
                /* nBg */
                124361,
            },
            /* 9 */
            {
                /* nRg */
                1215929,
                /* nBg */
                122201,
            },
            /* 10 */
            {
                /* nRg */
                1183224,
                /* nBg */
                120817,
            },
            /* 11 */
            {
                /* nRg */
                1150372,
                /* nBg */
                120219,
            },
            /* 12 */
            {
                /* nRg */
                1117394,
                /* nBg */
                120418,
            },
            /* 13 */
            {
                /* nRg */
                1084311,
                /* nBg */
                121415,
            },
            /* 14 */
            {
                /* nRg */
                1051135,
                /* nBg */
                123218,
            },
            /* 15 */
            {
                /* nRg */
                1017895,
                /* nBg */
                125829,
            },
            /* 16 */
            {
                /* nRg */
                984613,
                /* nBg */
                129258,
            },
            /* 17 */
            {
                /* nRg */
                936095,
                /* nBg */
                143718,
            },
            /* 18 */
            {
                /* nRg */
                888133,
                /* nBg */
                159918,
            },
            /* 19 */
            {
                /* nRg */
                840790,
                /* nBg */
                177838,
            },
            /* 20 */
            {
                /* nRg */
                794118,
                /* nBg */
                197447,
            },
            /* 21 */
            {
                /* nRg */
                748180,
                /* nBg */
                218722,
            },
            /* 22 */
            {
                /* nRg */
                703049,
                /* nBg */
                241644,
            },
            /* 23 */
            {
                /* nRg */
                658768,
                /* nBg */
                266171,
            },
            /* 24 */
            {
                /* nRg */
                615388,
                /* nBg */
                292280,
            },
            /* 25 */
            {
                /* nRg */
                603864,
                /* nBg */
                299578,
            },
            /* 26 */
            {
                /* nRg */
                592414,
                /* nBg */
                306992,
            },
            /* 27 */
            {
                /* nRg */
                581026,
                /* nBg */
                314520,
            },
            /* 28 */
            {
                /* nRg */
                569723,
                /* nBg */
                322154,
            },
            /* 29 */
            {
                /* nRg */
                558493,
                /* nBg */
                329903,
            },
            /* 30 */
            {
                /* nRg */
                547336,
                /* nBg */
                337757,
            },
            /* 31 */
            {
                /* nRg */
                536252,
                /* nBg */
                345716,
            },
            /* 32 */
            {
                /* nRg */
                525253,
                /* nBg */
                353779,
            },
            /* 33 */
            {
                /* nRg */
                513970,
                /* nBg */
                362231,
            },
            /* 34 */
            {
                /* nRg */
                502771,
                /* nBg */
                370787,
            },
            /* 35 */
            {
                /* nRg */
                491667,
                /* nBg */
                379448,
            },
            /* 36 */
            {
                /* nRg */
                480646,
                /* nBg */
                388225,
            },
            /* 37 */
            {
                /* nRg */
                469710,
                /* nBg */
                397117,
            },
            /* 38 */
            {
                /* nRg */
                458867,
                /* nBg */
                406113,
            },
            /* 39 */
            {
                /* nRg */
                448119,
                /* nBg */
                415226,
            },
            /* 40 */
            {
                /* nRg */
                437466,
                /* nBg */
                424432,
            },
            /* 41 */
            {
                /* nRg */
                426225,
                /* nBg */
                434352,
            },
            /* 42 */
            {
                /* nRg */
                415100,
                /* nBg */
                444387,
            },
            /* 43 */
            {
                /* nRg */
                404090,
                /* nBg */
                454537,
            },
            /* 44 */
            {
                /* nRg */
                393174,
                /* nBg */
                464802,
            },
            /* 45 */
            {
                /* nRg */
                382374,
                /* nBg */
                475183,
            },
            /* 46 */
            {
                /* nRg */
                371689,
                /* nBg */
                485679,
            },
            /* 47 */
            {
                /* nRg */
                361109,
                /* nBg */
                496291,
            },
            /* 48 */
            {
                /* nRg */
                350654,
                /* nBg */
                507018,
            },
            /* 49 */
            {
                /* nRg */
                295195,
                /* nBg */
                567940,
            },
            /* 50 */
            {
                /* nRg */
                243406,
                /* nBg */
                632019,
            },
            /* 51 */
            {
                /* nRg */
                195465,
                /* nBg */
                699012,
            },
            /* 52 */
            {
                /* nRg */
                151530,
                /* nBg */
                768701,
            },
            /* 53 */
            {
                /* nRg */
                111757,
                /* nBg */
                840843,
            },
            /* 54 */
            {
                /* nRg */
                76273,
                /* nBg */
                915197,
            },
            /* 55 */
            {
                /* nRg */
                45215,
                /* nBg */
                991502,
            },
            /* 56 */
            {
                /* nRg */
                18675,
                /* nBg */
                1069495,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1799335,
                /* nBg */
                564616,
            },
            /* 1 */
            {
                /* nRg */
                1739766,
                /* nBg */
                532897,
            },
            /* 2 */
            {
                /* nRg */
                1677910,
                /* nBg */
                505047,
            },
            /* 3 */
            {
                /* nRg */
                1614031,
                /* nBg */
                481244,
            },
            /* 4 */
            {
                /* nRg */
                1548369,
                /* nBg */
                461625,
            },
            /* 5 */
            {
                /* nRg */
                1481229,
                /* nBg */
                446337,
            },
            /* 6 */
            {
                /* nRg */
                1412872,
                /* nBg */
                435474,
            },
            /* 7 */
            {
                /* nRg */
                1343603,
                /* nBg */
                429140,
            },
            /* 8 */
            {
                /* nRg */
                1273726,
                /* nBg */
                427400,
            },
            /* 9 */
            {
                /* nRg */
                1248319,
                /* nBg */
                424558,
            },
            /* 10 */
            {
                /* nRg */
                1222734,
                /* nBg */
                422324,
            },
            /* 11 */
            {
                /* nRg */
                1196981,
                /* nBg */
                420710,
            },
            /* 12 */
            {
                /* nRg */
                1171071,
                /* nBg */
                419724,
            },
            /* 13 */
            {
                /* nRg */
                1145024,
                /* nBg */
                419378,
            },
            /* 14 */
            {
                /* nRg */
                1118852,
                /* nBg */
                419672,
            },
            /* 15 */
            {
                /* nRg */
                1092574,
                /* nBg */
                420605,
            },
            /* 16 */
            {
                /* nRg */
                1066213,
                /* nBg */
                422188,
            },
            /* 17 */
            {
                /* nRg */
                1028202,
                /* nBg */
                433523,
            },
            /* 18 */
            {
                /* nRg */
                990611,
                /* nBg */
                446211,
            },
            /* 19 */
            {
                /* nRg */
                953512,
                /* nBg */
                460251,
            },
            /* 20 */
            {
                /* nRg */
                916938,
                /* nBg */
                475624,
            },
            /* 21 */
            {
                /* nRg */
                880951,
                /* nBg */
                492296,
            },
            /* 22 */
            {
                /* nRg */
                845582,
                /* nBg */
                510258,
            },
            /* 23 */
            {
                /* nRg */
                810874,
                /* nBg */
                529478,
            },
            /* 24 */
            {
                /* nRg */
                776890,
                /* nBg */
                549936,
            },
            /* 25 */
            {
                /* nRg */
                767862,
                /* nBg */
                555661,
            },
            /* 26 */
            {
                /* nRg */
                758886,
                /* nBg */
                561471,
            },
            /* 27 */
            {
                /* nRg */
                749963,
                /* nBg */
                567364,
            },
            /* 28 */
            {
                /* nRg */
                741102,
                /* nBg */
                573351,
            },
            /* 29 */
            {
                /* nRg */
                732305,
                /* nBg */
                579412,
            },
            /* 30 */
            {
                /* nRg */
                723559,
                /* nBg */
                585567,
            },
            /* 31 */
            {
                /* nRg */
                714877,
                /* nBg */
                591806,
            },
            /* 32 */
            {
                /* nRg */
                706258,
                /* nBg */
                598129,
            },
            /* 33 */
            {
                /* nRg */
                697418,
                /* nBg */
                604745,
            },
            /* 34 */
            {
                /* nRg */
                688642,
                /* nBg */
                611446,
            },
            /* 35 */
            {
                /* nRg */
                679939,
                /* nBg */
                618240,
            },
            /* 36 */
            {
                /* nRg */
                671309,
                /* nBg */
                625119,
            },
            /* 37 */
            {
                /* nRg */
                662742,
                /* nBg */
                632092,
            },
            /* 38 */
            {
                /* nRg */
                654238,
                /* nBg */
                639139,
            },
            /* 39 */
            {
                /* nRg */
                645818,
                /* nBg */
                646279,
            },
            /* 40 */
            {
                /* nRg */
                637461,
                /* nBg */
                653494,
            },
            /* 41 */
            {
                /* nRg */
                628663,
                /* nBg */
                661263,
            },
            /* 42 */
            {
                /* nRg */
                619950,
                /* nBg */
                669128,
            },
            /* 43 */
            {
                /* nRg */
                611309,
                /* nBg */
                677076,
            },
            /* 44 */
            {
                /* nRg */
                602763,
                /* nBg */
                685129,
            },
            /* 45 */
            {
                /* nRg */
                594301,
                /* nBg */
                693256,
            },
            /* 46 */
            {
                /* nRg */
                585923,
                /* nBg */
                701487,
            },
            /* 47 */
            {
                /* nRg */
                577640,
                /* nBg */
                709802,
            },
            /* 48 */
            {
                /* nRg */
                569440,
                /* nBg */
                718201,
            },
            /* 49 */
            {
                /* nRg */
                525987,
                /* nBg */
                765943,
            },
            /* 50 */
            {
                /* nRg */
                485407,
                /* nBg */
                816149,
            },
            /* 51 */
            {
                /* nRg */
                447836,
                /* nBg */
                868651,
            },
            /* 52 */
            {
                /* nRg */
                413412,
                /* nBg */
                923261,
            },
            /* 53 */
            {
                /* nRg */
                382237,
                /* nBg */
                979800,
            },
            /* 54 */
            {
                /* nRg */
                354440,
                /* nBg */
                1038059,
            },
            /* 55 */
            {
                /* nRg */
                330092,
                /* nBg */
                1097849,
            },
            /* 56 */
            {
                /* nRg */
                309298,
                /* nBg */
                1158970,
            },
        },
        /* nIllumNum */
        6,
        /* tIllumList[16] */
        {
            /* 0 */
            {
                /* szName[32] */
                "H",
                /* nCct */
                2300,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    1259340,
                    /* nBg */
                    254804,
                },
            },
            /* 1 */
            {
                /* szName[32] */
                "A",
                /* nCct */
                2800,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    1033896,
                    /* nBg */
                    306184,
                },
            },
            /* 2 */
            {
                /* szName[32] */
                "TL84",
                /* nCct */
                3800,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    643826,
                    /* nBg */
                    337641,
                },
            },
            /* 3 */
            {
                /* szName[32] */
                "D50",
                /* nCct */
                5000,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    619708,
                    /* nBg */
                    481296,
                },
            },
            /* 4 */
            {
                /* szName[32] */
                "D65",
                /* nCct */
                6500,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    570425,
                    /* nBg */
                    576717,
                },
            },
            /* 5 */
            {
                /* szName[32] */
                "D75",
                /* nCct */
                7500,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    475005,
                    /* nBg */
                    627048,
                },
            },
        },
        /* nExtIllumNum */
        1,
        /* tExtIllumList[32] */
        {
            /* 0 */
            {
                /* szName[32] */
                "CWF",
                /* nCct */
                4100,
                /* nRadius */
                31457,
                /* tCoord */
                {
                    /* nRg */
                    567280,
                    /* nBg */
                    347079,
                },
            },
        },
        /* nMLCNum */
        0,
        /* tMLCZoneList[15] */
        {
            /* 0 */
            {
                /* nEnable */
                0,
                /* szDescription[32] */
                "",
                /* nZoneType */
                0,
                /* tPoly */
                {
                    /* nPntCnt */
                    0,
                    /* tPntArray[15] */
                    {
                        /* 0 */
                        {
                            /* nRg */
                            0,
                            /* nBg */
                            0,
                        },
                    },
                },
                /* nDetectionZoneGroupNum */
                0,
                /* tGroupDetectionZoneList[10] */
                {
                    /* 0 */
                    {
                        /* nDetectionZoneNum */
                        0,
                        /* tDetectionZoneList[5] */
                        {
                            /* 0 */
                            {
                                /* szDescription[32] */
                                "",
                                /* nZoneType */
                                0,
                                /* tPoly */
                                {
                                    /* nPntCnt */
                                    0,
                                    /* tPntArray[15] */
                                    {
                                        /* 0 */
                                        {
                                            /* nRg */
                                            0,
                                            /* nBg */
                                            0,
                                        },
                                    },
                                },
                                /* nLux[2] */
                                {0, 0, /*0 - 1*/},
                            },
                        },
                    },
                },
                /* nTrigerType1st */
                0,
                /* nTrigerType2nd */
                0,
                /* nTrigerType3rd */
                0,
                /* nTrigerValue1st[2] */
                {0, 0, /*0 - 1*/},
                /* nTrigerValue2nd[2] */
                {0, 0, /*0 - 1*/},
                /* nTrigerValue3rd */
                0,
            },
        },
        /* tInitParam */
        {
            /* tGains */
            {
                /* nGainR */
                416,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                795,
            },
            /* nDampRatio */
            100000,
        },
        /* nMode */
        0,
        /* nIndex */
        0,
        /* nDampRatio */
        943718,
        /* nToleranceRg */
        3145,
        /* nToleranceBg */
        3145,
        /* nLuxVeryDarkStart */
        0,
        /* nLuxVeryDarkEnd */
        8192,
        /* nLuxDarkStart */
        10240,
        /* nLuxDarkEnd */
        51200,
        /* nLuxIndoorStart */
        61440,
        /* nLuxIndoorEnd */
        409600,
        /* nLuxTransInStart */
        460800,
        /* nLuxTransInEnd */
        972800,
        /* nLuxTransOutStart */
        1024000,
        /* nLuxTransOutEnd */
        1894400,
        /* nLuxOutdoorStart */
        1945600,
        /* nLuxOutdoorEnd */
        4044800,
        /* nLuxBrightStart */
        4096000,
        /* nLuxBrightEnd */
        10137600,
        /* nLuxVeryBrightStart */
        10240000,
        /* nCctMinInner */
        2300,
        /* nCctMaxInner */
        7800,
        /* nCctMinOuter */
        1950,
        /* nCctMaxOuter */
        12000,
        /* nCctSplitHtoA */
        2800,
        /* nCctSplitAtoF */
        3300,
        /* nCctSplitFtoD5 */
        4600,
        /* nCctSplitD5toD6 */
        5600,
        /* nCctSplitD6toS */
        6600,
        /* nGridWeightEnable */
        0,
        /* nGridWeightRow */
        9,
        /* nGridWeightColumn */
        9,
        /* nGridWeightTable[54][72] */
        {
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
        },
        /* nGrayZoneLuxWeight[24][8] */
        {
            {350, 100, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {700, 400, 100, 100, 0, 0, 0, 0, /*0 - 7*/},
            {700, 400, 100, 100, 0, 0, 0, 0, /*0 - 7*/},
            {500, 100, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {600, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {800, 600, 200, 200, 0, 0, 0, 0, /*0 - 7*/},
            {800, 600, 200, 200, 0, 0, 0, 0, /*0 - 7*/},
            {600, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {100, 300, 300, 0, 0, 0, 100, 100, /*0 - 7*/},
            {700, 700, 600, 500, 400, 200, 200, 200, /*0 - 7*/},
            {700, 700, 600, 500, 400, 200, 200, 200, /*0 - 7*/},
            {100, 10, 10, 0, 0, 0, 100, 100, /*0 - 7*/},
            {100, 1000, 500, 500, 450, 300, 300, 300, /*0 - 7*/},
            {500, 1000, 1000, 1000, 700, 400, 400, 400, /*0 - 7*/},
            {500, 1000, 1000, 1000, 900, 900, 900, 900, /*0 - 7*/},
            {400, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 300, 400, 500, 500, 300, 300, 300, /*0 - 7*/},
            {400, 1000, 1000, 1000, 600, 300, 300, 300, /*0 - 7*/},
            {400, 1000, 1000, 1000, 1000, 700, 700, 700, /*0 - 7*/},
            {100, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {200, 200, 200, 200, 200, 200, 200, 200, /*0 - 7*/},
            {400, 500, 500, 500, 500, 500, 500, 600, /*0 - 7*/},
            {400, 500, 500, 500, 500, 500, 500, 600, /*0 - 7*/},
            {200, 300, 300, 300, 100, 0, 0, 0, /*0 - 7*/},
        },
        /* nExtIlllumLuxWeight[32][8] */
        {
            {1000, 1000, 1000, 200, 50, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        },
        /* nLumaWeightNum */
        8,
        /* nLumaSplitList[32] */
        {51, 819, 3072, 8192, 20480, 40960, 92160, 215040, /*0 - 7*/},
        /* nLumaWeightList[8][32] */
        {
            {256, 512, 512, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 102, 205, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
        },
        /* bMixLightEn */
        1,
        /* nMixLightProba_0_CctStd[8] */
        {450, 450, 400, 450, 600, 9998, 9998, 9998, /*0 - 7*/},
        /* nMixLightProba_100_CctStd[8] */
        {750, 750, 600, 800, 1000, 9999, 9999, 9999, /*0 - 7*/},
        /* nMixLightProba_100_SatDiscnt[8] */
        {100, 100, 100, 100, 100, 100, 100, 100, /*0 - 7*/},
        /* nMixLightKneeNum */
        8,
        /* nMixLightKneeCctList[32] */
        {2300, 2800, 3500, 4600, 5500, 6500, 7500, 8500, /*0 - 7*/},
        /* nMixLightKneeWtList[8][32] */
        {
            {820, 820, 820, 1024, 1024, 820, 410, 358, /*0 - 7*/},
            {614, 614, 614, 1024, 1024, 820, 410, 358, /*0 - 7*/},
            {205, 205, 307, 820, 1024, 820, 410, 358, /*0 - 7*/},
            {205, 205, 410, 922, 1024, 820, 410, 358, /*0 - 7*/},
            {307, 307, 512, 1024, 1024, 820, 410, 358, /*0 - 7*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
        },
        /* tDomParamList[4] */
        {
            /* 0 */
            {
                /* nDominantEnable */
                0,
                /* nDomMinCctThresh */
                2000,
                /* nDomMaxCctThresh */
                2500,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
            /* 1 */
            {
                /* nDominantEnable */
                0,
                /* nDomMinCctThresh */
                2500,
                /* nDomMaxCctThresh */
                3300,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
            /* 2 */
            {
                /* nDominantEnable */
                0,
                /* nDomMinCctThresh */
                3300,
                /* nDomMaxCctThresh */
                4600,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
            /* 3 */
            {
                /* nDominantEnable */
                0,
                /* nDomMinCctThresh */
                4600,
                /* nDomMaxCctThresh */
                8500,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
        },
        /* nTmpoStabTriggerAvgBlkWt */
        10,
        /* nPlanckianLocusProjEn */
        0,
        /* nPlanckianLocusNotProjLux */
        4096000,
        /* nPlanckianLocusFullProjLux */
        10240000,
        /* nSpatialSegmetNum */
        2,
        /* nSpatialStartLux[32] */
        {4096000, 11264000, /*0 - 1*/},
        /* nSpatialEndLux[32] */
        {10240000, 1024000000, /*0 - 1*/},
        /* nSpatialRg[32] */
        {488636, 622854, /*0 - 1*/},
        /* nSpatialBg[32] */
        {636485, 615514, /*0 - 1*/},
        /* nFusionGrayZoneConfid_0_AvgBlkWeight */
        20,
        /* nFusionGrayZoneConfid_100_AvgBlkWeight */
        500,
        /* nFusionSpatialConfid_0_Lux */
        5120000,
        /* nFusionSpatialConfid_100_Lux */
        15360000,
        /* nFusionWeightGrayZone */
        1024,
        /* nFusionWeightSpatial */
        0,
        /* nPreferCctNum */
        10,
        /* nPreferSrcCctList[32] */
        {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
        /* nPreferDstCct[8][32] */
        {
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6200, 9000, 10000, 12000, /*0 - 9*/},
        },
        /* nPreferGrShift[8][32] */
        {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        },
        /* nGreenCutEn */
        1,
        /* nGreenCutConfid_0_Lx */
        5120000,
        /* nGreenCutConfid_100_Lx */
        2048000,
        /* nGreenCutWeight */
        10,
        /* nGreenCutBreakAngle */
        146801,
        /* nGreenCutOffsetRg */
        0,
        /* nGreenCutOffsetBg */
        -52428,
        /* nMultiCamSyncMode */
        0,
    },
    /* tLogParam */
    {
        /* nLogLevel */
        4,
        /* nLogTarget */
        2,
        /* nAlgoPrintInterval */
        0,
        /* nStatisticsPrintInterval */
        0,
    },
};

const static AX_ISP_IQ_CAF_PARAM_T caf_param_sdr = {
    /* nScanType */
    0,
    /* nGlobalScanStep */
    0,
    /* nSearchDownFrameTh */
    0,
    /* nSearchDownSerialSlopeTh */
    0,
    /* nSearchDownSingleSlopeTh */
    0,
    /* nSearchUpFrameTh */
    0,
    /* nSearchUpSerialSlopeTh */
    0,
    /* nSearchUpSingleSlopeTh */
    0,
    /* nSearchBigStepUpSlopeTh */
    0,
    /* nSearchBigStep */
    0,
    /* nSearchSmallStep */
    0,
    /* nSearchProbeStep */
    0,
    /* nSearchProbeFrameTh */
    0,
    /* bContinuousAfEn */
    0,
    /* nSceneChangeLumaTh */
    0,
    /* nSceneSettledLumaTh */
    0,
    /* nSceneSlowChangeLumaTh */
    0,
    /* nSceneFvChangeLumaTh */
    0,
    /* nSceneFvChangeRatioTh */
    0,
    /* nSpotlightZoomRatioTh */
    0,
    /* tWeight */
    {
        /* nMuX */
        0,
        /* nMuY */
        0,
        /* nSigmaX */
        0,
        /* nSigmaY */
        0,
        /* nCoeffV1 */
        0,
        /* nCoeffV2 */
        0,
        /* nCoeffH1 */
        0,
        /* nCoeffH2 */
        0,
    },
        /* zoom tracking */
    {
        /*nDefaultDistance*/
        0,
        /*nStepFactor*/
        1,
        /*nProbStepCoff*/
        0,
        /*nMaxProbeStep*/
        0,
        /*nMinProbeStep*/
        0,
        /*nFvDiffOverThresh*/
        0,
        /*nFvDiffMiddleThresh*/
        0,
        /*nFvDiffUnderThresh*/
        0,
        /*nHeightDistanceCoff*/
        0,
        /*nMiddleDistanceCoff*/
        0,
        /*nUnderDistanceCoff*/
        0,
        /*nProportionalCoff*/
        0,
        /*nIntegralCoff*/
        0,
        /*nDifferentialCoff*/
        0,
    },
};

const static AX_ISP_IQ_DPC_PARAM_T dpc_param_sdr = {
    /* nDpcEnable */
    1,
    /* nStaticDpcEnable */
    0,
    /* nDynamicDpcEnable */
    1,
    /* nColorLimitEnable */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    1,
    /* tDpcParam */
    {
        /* tHcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {30579744, 29427335, 29689627, 30827258, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {-7572603, -8292714, -15194268, -23543396, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {240800, 216905, 216426, 242113, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {6186286, 6374982, 6410447, 6153308, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {10445226, 11553627, 11383381, 10668026, /*0 - 3*/},
        },
        /* tLcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {30579744, 29427335, 29689627, 30827258, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {-7572603, -8292714, -15194268, -23543396, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {240800, 216905, 216426, 242113, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {6186286, 6374982, 6410447, 6153308, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {10445226, 11553627, 11383381, 10668026, /*0 - 3*/},
        },
    },
    /* tManualParam */
    {
        /* nNoiseRatio */
        512,
        /* nDpType */
        1,
        /* nNonChwiseEn */
        0,
        /* nChwiseStr */
        20,
        /* nDetCoarseStr */
        210,
        /* nDetFineStr */
        25,
        /* nDynamicDpcStr */
        3290,
        /* nEdgeStr */
        102,
        /* nHotColdTypeStr */
        7,
        /* nSupWinkStr */
        16,
        /* nDynamicDpClrLimOffset */
        {
            /* nUpperLimit */
            65535,
            /* nLowerLimit */
            65535,
        },
        /* nStaticDpClrLimOffset */
        {
            /* nUpperLimit */
            65535,
            /* nLowerLimit */
            65535,
        },
        /* nNormalPixDpClrLimOffset */
        {
            /* nUpperLimit */
            65535,
            /* nLowerLimit */
            65535,
        },
        /* nDynamicDpClrLimStr */
        91,
        /* nStaticDpClrLimStr */
        128,
        /* nNormalPixDpClrLimStr */
        128,
        /* nPreDetLevelSlope */
        4,
        /* nPreDetLevelOffset */
        0,
        /* nPreDetLevelMax */
        256,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[16] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nNoiseRatio[16] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 8*/},
        /* nDpType[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 8*/},
        /* nNonChwiseEn[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nChwiseStr[16] */
        {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
        /* nDetCoarseStr[16] */
        {210, 210, 210, 210, 210, 210, 210, 210, 210, /*0 - 8*/},
        /* nDetFineStr[16] */
        {25, 25, 25, 25, 25, 25, 25, 25, 25, /*0 - 8*/},
        /* nDynamicDpcStr[16] */
        {3290, 3290, 3290, 3290, 3290, 3290, 3290, 3290, 3290, /*0 - 8*/},
        /* nEdgeStr[16] */
        {102, 102, 102, 102, 102, 102, 102, 102, 102, /*0 - 8*/},
        /* nHotColdTypeStr[16] */
        {7, 7, 7, 7, 7, 7, 7, 7, 7, /*0 - 8*/},
        /* nSupWinkStr[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
        /* nDynamicDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 1 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 2 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 3 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 4 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 5 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 6 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 7 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 8 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
        },
        /* nStaticDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 1 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 2 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 3 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 4 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 5 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 6 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 7 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 8 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
        },
        /* nNormalPixDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 1 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 2 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 3 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 4 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 5 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 6 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 7 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 8 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
        },
        /* nDynamicDpClrLimStr[16] */
        {91, 91, 91, 91, 91, 91, 91, 91, 91, /*0 - 8*/},
        /* nStaticDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nNormalPixDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nPreDetLevelSlope[16] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
        /* nPreDetLevelOffset[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nPreDetLevelMax[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
    },
};

const static AX_ISP_IQ_BLC_PARAM_T blc_param_sdr = {
    /* nBlcEnable */
    1,
    /* nSblEnable */
    1,
    /* nAutoMode */
    1,
    /* tManualParam[4] */
    {
        /* 0 */
        {
            /* nSblRValue */
            4148,
            /* nSblGrValue */
            4148,
            /* nSblGbValue */
            4148,
            /* nSblBValue */
            4149,
        },
        /* 1 */
        {
            /* nSblRValue */
            0,
            /* nSblGrValue */
            0,
            /* nSblGbValue */
            0,
            /* nSblBValue */
            0,
        },
        /* 2 */
        {
            /* nSblRValue */
            0,
            /* nSblGrValue */
            0,
            /* nSblGbValue */
            0,
            /* nSblBValue */
            0,
        },
        /* 3 */
        {
            /* nSblRValue */
            0,
            /* nSblGrValue */
            0,
            /* nSblGbValue */
            0,
            /* nSblBValue */
            0,
        },
    },
    /* tAutoParam */
    {
        /* tHcgAutoTable */
        {
            /* nGainGrpNum */
            0,
            /* nExposeTimeGrpNum */
            0,
            /* nGain[16] */
            {1024, /*0 - 0*/},
            /* nExposeTime[10] */
            {0, /*0 - 0*/},
            /* nAutoSblRValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
        },
        /* tLcgAutoTable */
        {
            /* nGainGrpNum */
            15,
            /* nExposeTimeGrpNum */
            2,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 16384, 32768, 33792, 61440, 81920, 122880, 184320, 204800, 245760, 491520, 1024000, /*0 - 14*/},
            /* nExposeTime[10] */
            {40000, 100000, /*0 - 1*/},
            /* nAutoSblRValue[16][10] */
            {
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
                {4122, 4122, /*0 - 1*/},
            },
        },
    },
};

const static AX_ISP_IQ_HDR_PARAM_T hdr_param_sdr = {
    /* nEnable */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* nDebugMode */
    0,
    /* tMotDetParam */
    {
        /* nCoarseMotMaskRatio[2] */
        {0, 0, /*0 - 1*/},
        /* nMotIirRatio[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tExpMaskParam */
    {
        /* nCoarseExpMaskRatio[2][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nExpIirRatio[2][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nExpYRatio[2] */
        {0, 0, /*0 - 1*/},
        /* nExpWeightLut[2][257] */
        {
            {
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
                0, /*256 - 256*/
            },
            {
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
                0, /*256 - 256*/
            },
        },
        /* nExpWeightGain[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tDgstParam */
    {
        /* nDeghostEnable */
        0,
        /* nDgstStrenThre[2] */
        {0, 0, /*0 - 1*/},
        /* nDgstStrenLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nDgstBaseFid */
        0,
    },
    /* tFusionParam */
    {
        /* nFusionProtectThreshold[2][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
    },
    /* tHdrManualParam */
    {
        /* nNoiseLutScale */
        0,
        /* nCoarseMotMaskNoiseLvl */
        0,
        /* nCoarseMotMaskSen */
        0,
        /* nCoarseExpMaskSen[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tHdrAutoParam */
    {
        /* nParamGrpNum */
        0,
        /* nRefVal[16] */
        {0, /*0 - 0*/},
        /* nNoiseLutScale[16] */
        {0, /*0 - 0*/},
        /* nCoarseMotMaskNoiseLvl[16] */
        {0, /*0 - 0*/},
        /* nCoarseMotMaskSen[16] */
        {0, /*0 - 0*/},
        /* nCoarseExpMaskSen[16][2] */
        {
            {0, 0, /*0 - 1*/},
        },
    },
};

const static AX_ISP_IQ_AINR_PARAM_T ainr_param_sdr = {
    /* nEnable */
    1,
    /* nAutoMode */
    1,
    /* bUpdateTable */
    1,
    /* nRefMode */
    1,
    /* nHdrMode */
    1,
    /* tManualParam */
    {
        /* tMeta */
        {
            /* szModelPath[256] */
            "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
            /* szModelName[256] */
            "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
            /* szTemporalBaseNrName[256] */
            "3d_1123_isp4-16x",
            /* szSpatialBaseNrName[256] */
            "2d_1116_isp2-8x",
            /* nHcgMode */
            0,
            /* nIsoThresholdMin */
            0,
            /* nIsoThresholdMax */
            0,
            /* nBiasIn2D[4] */
            {4096, 4096, 4096, 4096, /*0 - 3*/},
            /* nBiasIn3D[4] */
            {4096, 4096, 4096, 4096, /*0 - 3*/},
        },
        /* tParams */
        {
            /*tBias[4][4]*/
            {
                /* nBiasIn[4] */
                {-3, -3, -3, -3, /*0 - 3*/},
                /* nBiasOut[4] */
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* tNonSens */
            {
                /* nTemporalFilterStrLut[17][2] */
                {
                    {0, 0, /*0 - 1*/},
                    {16, 256, /*0 - 1*/},
                    {32, 512, /*0 - 1*/},
                    {48, 768, /*0 - 1*/},
                    {64, 1024, /*0 - 1*/},
                    {80, 1280, /*0 - 1*/},
                    {96, 1536, /*0 - 1*/},
                    {112, 1792, /*0 - 1*/},
                    {128, 2048, /*0 - 1*/},
                    {144, 2304, /*0 - 1*/},
                    {160, 2560, /*0 - 1*/},
                    {176, 2816, /*0 - 1*/},
                    {192, 3072, /*0 - 1*/},
                    {208, 3328, /*0 - 1*/},
                    {224, 3584, /*0 - 1*/},
                    {240, 3840, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
                /* nVstTemporalFilterStrLut[17][2] */
                {
                    {0, 1136, /*0 - 1*/},
                    {16, 1136, /*0 - 1*/},
                    {32, 1136, /*0 - 1*/},
                    {48, 1236, /*0 - 1*/},
                    {64,  1236, /*0 - 1*/},
                    {80,  1536, /*0 - 1*/},
                    {96,  1536, /*0 - 1*/},
                    {112, 1792, /*0 - 1*/},
                    {128, 2048, /*0 - 1*/},
                    {144, 2304, /*0 - 1*/},
                    {160, 2560, /*0 - 1*/},
                    {176, 2816, /*0 - 1*/},
                    {192, 3072, /*0 - 1*/},
                    {208, 3328, /*0 - 1*/},
                    {224, 3584, /*0 - 1*/},
                    {240, 3840, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
            },
            /* tSens */
            {
                /* nSpatialNrStrLut[17][2] */
                {
                    {0, 3370, /*0 - 1*/},
                    {16, 3544, /*0 - 1*/},
                    {32, 3648, /*0 - 1*/},
                    {48, 3857, /*0 - 1*/},
                    {64,  4096, /*0 - 1*/},
                    {80,  4096, /*0 - 1*/},
                    {96,  4096, /*0 - 1*/},
                    {112, 4096, /*0 - 1*/},
                    {128, 4096, /*0 - 1*/},
                    {144, 4096, /*0 - 1*/},
                    {160, 4096, /*0 - 1*/},
                    {176, 4096, /*0 - 1*/},
                    {192, 4096, /*0 - 1*/},
                    {208, 4096, /*0 - 1*/},
                    {224, 4096, /*0 - 1*/},
                    {240, 4096, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
            },
        },
    },
    /* tAutoParam */
    {
        /* nAutoModelNum */
        5,
        /* tAutoModelTable[12] */
        {
            /* 0 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_1109_again32-60x_isp1-8x",
                    /* szSpatialBaseNrName[256] */
                    "2d_1109_again32-60x_isp1-2x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    3200,
                    /* nIsoThresholdMax */
                    12000,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {32768, 46080, 61440, 102400, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {46080, 61440, 102400, 122880, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                        },
                        /* nBiasOut[4][4] */
                        {
                            /*  nBiasOut 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {32768, 46080, 61440, 102400, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {46080, 61440, 102400, 122880, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {32768, 46080, 61440, 102400, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {46080, 61440, 102400, 122880, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1000, /*0 - 1*/},
                                {16, 1000, /*0 - 1*/},
                                {32, 1000, /*0 - 1*/},
                                {48, 1000, /*0 - 1*/},
                                {64,  1000, /*0 - 1*/},
                                {80,  1000, /*0 - 1*/},
                                {96,  1000, /*0 - 1*/},
                                {112, 1000, /*0 - 1*/},
                                {128, 1000, /*0 - 1*/},
                                {144, 1000, /*0 - 1*/},
                                {160, 1000, /*0 - 1*/},
                                {176, 3000, /*0 - 1*/},
                                {192, 3000, /*0 - 1*/},
                                {208, 3000, /*0 - 1*/},
                                {224, 3000, /*0 - 1*/},
                                {240, 3000, /*0 - 1*/},
                                {255, 3000, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1873, /*0 - 1*/},
                                {16, 2360, /*0 - 1*/},
                                {32, 2813, /*0 - 1*/},
                                {48, 3230, /*0 - 1*/},
                                {64,  3857, /*0 - 1*/},
                                {80,  3927, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 1873, /*0 - 1*/},
                                {16, 2360, /*0 - 1*/},
                                {32, 2813, /*0 - 1*/},
                                {48, 3230, /*0 - 1*/},
                                {64,  3857, /*0 - 1*/},
                                {80,  3927, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 1873, /*0 - 1*/},
                                {16, 2360, /*0 - 1*/},
                                {32, 2813, /*0 - 1*/},
                                {48, 3230, /*0 - 1*/},
                                {64,  3857, /*0 - 1*/},
                                {80,  3927, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 1 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_1109_again32-60x_isp1-8x",
                    /* szSpatialBaseNrName[256] */
                    "2d_1116_isp2-8x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    12000,
                    /* nIsoThresholdMax */
                    24000,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {112880, 163840, 204800, 225280, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {163840, 204800, 225280, 245760, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                        },
                        /* nBiasOut[4][4] */
                        {
                            /*  nBiasOut 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {112880, 163840, 204800, 225280, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {163840, 204800, 225280, 245760, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {112880, 163840, 204800, 225280, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {163840, 204800, 225280, 245760, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2600, /*0 - 1*/},
                                {16, 3000, /*0 - 1*/},
                                {32, 3200, /*0 - 1*/},
                                {48, 3600, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2600, /*0 - 1*/},
                                {16, 3000, /*0 - 1*/},
                                {32, 3200, /*0 - 1*/},
                                {48, 3600, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2600, /*0 - 1*/},
                                {16, 3000, /*0 - 1*/},
                                {32, 3200, /*0 - 1*/},
                                {48, 3600, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2600, /*0 - 1*/},
                                {16, 3000, /*0 - 1*/},
                                {32, 3200, /*0 - 1*/},
                                {48, 3600, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 2 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_1123_isp4-16x",
                    /* szSpatialBaseNrName[256] */
                    "2d_1116_isp2-8x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    24000,
                    /* nIsoThresholdMax */
                    48000,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {245760, 286720, 327680, 409600, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {286720, 727680, 409600, 491520, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                        },
                        /* nBiasOut[4][4] */
                        {
                            /*  nBiasOut 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {245760, 286720, 327680, 409600, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {286720, 727680, 409600, 491520, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {245760, 286720, 327680, 409600, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {286720, 727680, 409600, 491520, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 3 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_1123_isp4-16x",
                    /* szSpatialBaseNrName[256] */
                    "2d_1129_isp8-16x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    48000,
                    /* nIsoThresholdMax */
                    80000,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                     /* tBias */
                    {
                        /* nRefGrpNum */
                        3,
                        /* nRefValStart[4] */
                        {491520, 614400, 716800, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {614400, 716800, 819200, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                        },
                        /* nBiasOut[4][4] */
                        {
                            /*  nBiasOut 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        3,
                        /* nRefValStart[4] */
                        {491520, 614400, 716800, /*0 - 2*/},
                        /* nRefValEnd[4] */
                        {614400, 716800, 819200, /*0 - 2*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0,    /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                             /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        3,
                        /* nRefValStart[4] */
                        {491520, 614400, 716800, /*0 - 2*/},
                        /* nRefValEnd[4] */
                        {614400, 716800, 819200, /*0 - 2*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 3800, /*0 - 1*/},
                                {16, 3900, /*0 - 1*/},
                                {32, 3950, /*0 - 1*/},
                                {48, 4031, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 4 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A32-60X_I1-16X_0000_MULTI4_00000696121_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_1123_isp4-16x",
                    /* szSpatialBaseNrName[256] */
                    "2d_1129_isp8-16x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    80000,
                    /* nIsoThresholdMax */
                    100000,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {819200, 921600, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {921600, 1024000, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {-3, -3, -3, -3, /*0 - 3*/},
                        },
                        /* nBiasOut[4][4] */
                        {
                            /*  nBiasOut 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasOut 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {819200, 921600, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {921600, 1024000, /*0 - 1*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {819200, 921600, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {921600, 1024000, /*0 - 1*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 3370, /*0 - 1*/},
                                {16, 3544, /*0 - 1*/},
                                {32, 3648, /*0 - 1*/},
                                {48, 3857, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3370, /*0 - 1*/},
                                {16, 3544, /*0 - 1*/},
                                {32, 3648, /*0 - 1*/},
                                {48, 3857, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_RAW2DNR_PARAM_T raw2dnr_param_sdr = {
    /* nRaw2dnrEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tGlb */
    {
        /* nMfEnable */
        1,
        /* nHfEnable */
        1,
        /* nLutType */
        0,
        /* nMaskThreshold */
        16,
        /* nMaskLimit[2] */
        {0, 255, /*0 - 1*/},
    },
    /* tManual */
    {
        /* nEdgePreserveRatio */
        128,
        /* nNoiseProfileFactor */
        128,
        /* nHighFreqNrFactor[2][17] */
        {
            {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
        },
        /* nLowFreqNrFactor[2][17] */
        {
            {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
            {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
        },
        /* nInterChannelStrength */
        128,
        /* nHfNrStrength[2] */
        {12, 12, /*0 - 1*/},
        /* nMfNrStrength[2] */
        {64, 64, /*0 - 1*/},
    },
    /* tAuto */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[12] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nEdgePreserveRatio[12] */
        {128, 128, 128, 128, 223, 223, 223, 223, 223, /*0 - 8*/},
        /* nNoiseProfileFactor[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nHighFreqNrFactor[12][2][17] */
        {
            /* nHighFreqNrFactor 0 */
            {
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 1 */
            {
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 2 */
            {
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 3 */
            {
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {1024, 640, 384, 224, 192, 160, 128, 96, 64, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 4 */
            {
                {3072, 3072, 2048, 2048, 2048, 2048, 1024, 768, 512, 512, 512, 512, 256, 256, 256, 256, 256, /*0 - 16*/},
                {1918, 1715, 1485, 1340, 1311, 1311, 1254, 1138, 1080, 965, 878, 820, 820, 647, 561, 647, 561, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 5 */
            {
                {3072, 3072, 2048, 2048, 2048, 2048, 1024, 768, 512, 512, 512, 512, 256, 256, 256, 256, 256, /*0 - 16*/},
                {1918, 1715, 1485, 1340, 1311, 1311, 1254, 1138, 1080, 965, 878, 820, 820, 647, 561, 647, 561, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 6 */
            {
                {3072, 3072, 2048, 2048, 2048, 2048, 1024, 768, 512, 512, 512, 512, 256, 256, 256, 256, 256, /*0 - 16*/},
                {1918, 1715, 1485, 1340, 1311, 1311, 1254, 1138, 1080, 965, 878, 820, 820, 647, 561, 647, 561, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 7 */
            {
                {3072, 3072, 2048, 2048, 2048, 2048, 1024, 768, 512, 512, 512, 512, 256, 256, 256, 256, 256, /*0 - 16*/},
                {1918, 1715, 1485, 1340, 1311, 1311, 1254, 1138, 1080, 965, 878, 820, 820, 647, 561, 647, 561, /*0 - 16*/},
            },
            /* nHighFreqNrFactor 8 */
            {
                {3072, 3072, 2048, 2048, 2048, 2048, 1024, 768, 512, 512, 512, 512, 256, 256, 256, 256, 256, /*0 - 16*/},
                {1918, 1715, 1485, 1340, 1311, 1311, 1254, 1138, 1080, 965, 878, 820, 820, 647, 561, 647, 561, /*0 - 16*/},
            },
        },
        /* nLowFreqNrFactor[12][2][17] */
        {
            /* nLowFreqNrFactor 0 */
            {
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 1 */
            {
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 2 */
            {
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 3 */
            {
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
                {165, 118, 88, 63, 46, 36, 34, 32, 30, 28, 26, 24, 20, 18, 16, 14, 12, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 4 */
            {
                {105, 98, 90, 79, 64, 64, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 8, /*0 - 16*/},
                {176, 172, 161, 150, 142, 128, 122, 116, 111, 107, 100, 92, 83, 79, 72, 68, 62, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 5 */
            {
                {105, 98, 90, 79, 64, 64, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 8, /*0 - 16*/},
                {176, 172, 161, 150, 142, 128, 122, 116, 111, 107, 100, 92, 83, 79, 72, 68, 62, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 6 */
            {
                {105, 98, 90, 79, 64, 64, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 8, /*0 - 16*/},
                {176, 172, 161, 150, 142, 128, 122, 116, 111, 107, 100, 92, 83, 79, 72, 68, 62, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 7 */
            {
                {105, 98, 90, 79, 64, 64, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 8, /*0 - 16*/},
                {176, 172, 161, 150, 142, 128, 122, 116, 111, 107, 100, 92, 83, 79, 72, 68, 62, /*0 - 16*/},
            },
            /* nLowFreqNrFactor 8 */
            {
                {105, 98, 90, 79, 64, 64, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 8, /*0 - 16*/},
                {176, 172, 161, 150, 142, 128, 122, 116, 111, 107, 100, 92, 83, 79, 72, 68, 62, /*0 - 16*/},
            },
        },
        /* nInterChannelStrength[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nHfNrStrength[12][2] */
        {
            {12, 12, /*0 - 1*/},
            {12, 12, /*0 - 1*/},
            {12, 12, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {20, 80, /*0 - 1*/},
            {20, 80, /*0 - 1*/},
            {20, 80, /*0 - 1*/},
            {20, 80, /*0 - 1*/},
            {20, 80, /*0 - 1*/},
        },
        /* nMfNrStrength[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {128, 64, /*0 - 1*/},
            {40, 60, /*0 - 1*/},
            {40, 60, /*0 - 1*/},
            {40, 60, /*0 - 1*/},
            {40, 60, /*0 - 1*/},
            {40, 60, /*0 - 1*/},
        },
    },
};

const static AX_ISP_IQ_LSC_PARAM_T lsc_param_sdr = {
    /* nLscEn */
    0,
    /* nRefMode */
    1,
    /* nMeshMode */
    1,
    /* nAutoMode */
    0,
    /* nAlgMode */
    0,
    /* tManualParam */
    {
        /* nLumaRatio */
        100,
        /* nColorRatio */
        100,
        /* nLumaMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nRRMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nGRMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nGBMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nBBMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
    },
    /* tAutoParam */
    {
        /* nDampRatio */
        0,
        /* nToleranceRatio */
        0,
        /* tLumaParam */
        {
            /* nParamGrpNum */
            1,
            /* nRefValStart[12] */
            {0, /*0 - 0*/},
            /* nRefValEnd[12] */
            {0, /*0 - 0*/},
            /* nLumaRatio[12] */
            {0, /*0 - 0*/},
            /* nLumaMeshLut[15][19] */
            {
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            },
        },
        /* tColTempParam */
        {
            /* nColTempNum */
            8,
            /* nRefColorTempStart[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nRefColorTempEnd[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nColorTemp[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nColorRatio[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nRRMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
            /* nGRMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
            /* nGBMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
            /* nBBMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
        },
    },
};

const static AX_ISP_IQ_RLTM_PARAM_T rltm_param_sdr = {
    /* nRltmEn */
    1,
    /* nMultiCamSyncMode */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nAlgMode */
    0,
    /* tCommonGlb */
    {
        /* nGtmSwEn */
        0,
        /* nGtmSwDgain */
        256,
        /* nWinSize */
        512,
    },
    /* tTempoFilter */
    {
        /* nAlpha */
        32768,
        /* nReset */
        0,
        /* nStopUpdating */
        0,
    },
    /* tLumaWt */
    {
        /* nLumaWeight[5] */
        {37, 38, 38, 15, 0, /*0 - 4*/},
    },
    /* tMultiHistWt */
    {
        /* nMode */
        0,
        /* nRegionNum */
        0,
        /* nHistWtNum */
        1,
        /* tRoi */
        {
            /* nTop */
            0,
            /* nBottom */
            1520,
            /* nLeft */
            0,
            /* nRight */
            2688,
        },
        /* tHistWt */
        {
            /* nHistogramWeight[63] */
            {
                1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
            },
        },
        /* nFlagHistId[16][16] */
        {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        },
    },
    /* tLfEnhGlb */
    {
        /* nDownSampleRatio */
        0,
        /* nCoeffWinRad */
        2,
        /* nCoeffEps */
        200,
    },
    /* tManualParam */
    {
        /* nLocalFactor */
        94,
        /* nHighlightSup */
        24,
        /* nKMax */
        65530,
        /* nPreGamma */
        32,
        /* nPostGamma */
        40,
        /* nExtraDgain */
        16,
        /* nRltmStrength */
        80,
        /* nLog10Offset */
        86,
        /* nContrastStrength */
        42,
        /* nBaseGain */
        64,
        /* nDitherMode */
        0,
        /* nDitherScale */
        64,
        /* nHistWtBrightLow[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHistWtBrightHigh[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHistWtThreshold[4] */
        {129, 129, 129, 129, /*0 - 3*/},
        /* nSCurveList[1025] */
        {
            0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
            1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
            3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
            4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
            5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
            6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
            7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
            8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
            9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
            10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
            11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
            12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
            13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
            14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
            15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
            16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
            16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
            17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
            18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
            19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
            20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
            21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
            22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
            23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
            24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
            25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
            26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
            27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
            28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
            29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
            30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
            31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
        },
        /* tHistWt[16] */
        {
            /* 0 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 1 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 2 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 3 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 4 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 5 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 6 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 7 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 8 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 9 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 10 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 11 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 12 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 13 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 14 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 15 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
        },
        /* tHighFreqEnh */
        {
            /* nDetailSigmaDis */
            8000,
            /* nDetailSigmaVal */
            800,
            /* nDetailCoringPos */
            96,
            /* nDetailCoringNeg */
            140,
            /* nDetailGainPos */
            36,
            /* nDetailGainNeg */
            24,
            /* nDetailExtraStrPos */
            147,
            /* nDetailExtraStrNeg */
            151,
            /* nDetailGainLimitPos */
            7287,
            /* nDetailGainLimitNeg */
            34130,
            /* nSlopeStrengthLut[33] */
            {
                8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                8192, /*32 - 32*/
            },
            /* nSlopeCoeff */
            5327,
        },
        /* tLowFreqEnh */
        {
            /* nRltmDetailLowEn */
            0,
            /* nSigmaDisBlur */
            9000,
            /* nDetailGainPosLow */
            128,
            /* nDetailGainNegLow */
            128,
            /* nDetailLimitPosLow */
            57344,
            /* nDetailLimitNegLow */
            57344,
            /* nSigmaDisPst */
            9000,
            /* nSigmaValPst */
            1000,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 4096, 10240, 16384, 32768, 61440, 98304, 136192, 260096, 543744, 819200, 1021952, /*0 - 11*/},
        /* nLocalFactor[12] */
        {128, 128, 128, 128, 128, 110, 110, 90, 90, 90, 90, 90, /*0 - 11*/},
        /* nHighlightSup[12] */
        {13, 13, 16, 16, 16, 22, 22, 22, 30, 30, 30, 20, /*0 - 11*/},
        /* nKMax[12] */
        {65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, /*0 - 11*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nPostGamma[12] */
        {40, 40, 40, 47, 47, 40, 42, 42, 42, 44, 44, 36, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nRltmStrength[12] */
        {58, 64, 80, 80, 80, 80, 90, 90, 64, 64, 40, 40, /*0 - 11*/},
        /* nLog10Offset[12] */
        {96, 96, 96, 96, 96, 86, 86, 86, 86, 86, 86, 86, /*0 - 11*/},
        /* nContrastStrength[12] */
        {48, 32, 28, 28, 28, 30, 30, 30, 30, 30, 30, 30, /*0 - 11*/},
        /* nBaseGain[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
        /* nDitherMode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDitherScale[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
        /* nHistWtBrightLow[12][4] */
        {
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nHistWtBrightHigh[12][4] */
        {
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nHistWtThreshold[12][4] */
        {
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
        },
        /* nSCurveList[12][1025] */
        {
            {
                0, 154, 258, 350, 434, 514, 589, 661, 731, 798, 864, 928, 990, 1052, 1112, 1171, 1229, 1286, 1342, 1398, 1453, 1507, 1560, 1613, 1666, 1717, 1769, 1819, 1870, 1920, 1969, 2018,  /* 0 - 31*/
                2067, 2115, 2163, 2210, 2257, 2304, 2351, 2397, 2443, 2489, 2534, 2579, 2624, 2669, 2713, 2757, 2801, 2845, 2888, 2931, 2974, 3017, 3060, 3102, 3144, 3186, 3228, 3270, 3311, 3353, 3394, 3435,  /* 32 - 63*/
                3476, 3516, 3557, 3597, 3637, 3677, 3717, 3757, 3797, 3836, 3875, 3915, 3954, 3993, 4031, 4070, 4109, 4147, 4186, 4224, 4262, 4300, 4338, 4376, 4413, 4451, 4488, 4526, 4563, 4600, 4637, 4674,  /* 64 - 95*/
                4711, 4748, 4784, 4821, 4857, 4894, 4930, 4966, 5002, 5038, 5074, 5110, 5146, 5182, 5217, 5253, 5288, 5324, 5359, 5394, 5429, 5464, 5499, 5534, 5569, 5604, 5638, 5673, 5708, 5742, 5777, 5811,  /* 96 - 127*/
                5845, 5879, 5914, 5948, 5982, 6016, 6050, 6083, 6117, 6151, 6184, 6218, 6252, 6285, 6318, 6352, 6385, 6418, 6451, 6485, 6518, 6551, 6584, 6616, 6649, 6682, 6715, 6747, 6780, 6813, 6845, 6878,  /* 128 - 159*/
                6910, 6942, 6975, 7007, 7039, 7071, 7103, 7136, 7168, 7200, 7231, 7263, 7295, 7327, 7359, 7390, 7422, 7454, 7485, 7517, 7548, 7580, 7611, 7642, 7674, 7705, 7736, 7767, 7798, 7830, 7861, 7892,  /* 160 - 191*/
                7923, 7954, 7984, 8015, 8046, 8077, 8108, 8138, 8169, 8200, 8230, 8261, 8291, 8322, 8352, 8382, 8413, 8443, 8473, 8504, 8534, 8564, 8594, 8624, 8654, 8684, 8714, 8744, 8774, 8804, 8834, 8864,  /* 192 - 223*/
                8894, 8923, 8953, 8983, 9012, 9042, 9072, 9101, 9131, 9160, 9190, 9219, 9249, 9278, 9307, 9337, 9366, 9395, 9424, 9454, 9483, 9512, 9541, 9570, 9599, 9628, 9657, 9686, 9715, 9744, 9773, 9802,  /* 224 - 255*/
                9830, 9859, 9888, 9917, 9946, 9974, 10003, 10032, 10061, 10090, 10118, 10147, 10176, 10205, 10234, 10262, 10291, 10320, 10349, 10378, 10406, 10435, 10464, 10493, 10522, 10550, 10579, 10608, 10637, 10666, 10694, 10723,  /* 256 - 287*/
                10752, 10781, 10810, 10838, 10867, 10896, 10925, 10954, 10982, 11011, 11040, 11069, 11098, 11126, 11155, 11184, 11213, 11242, 11270, 11299, 11328, 11357, 11386, 11414, 11443, 11472, 11501, 11530, 11558, 11587, 11616, 11645,  /* 288 - 319*/
                11674, 11702, 11731, 11760, 11789, 11818, 11846, 11875, 11904, 11933, 11962, 11990, 12019, 12048, 12077, 12106, 12134, 12163, 12192, 12221, 12250, 12278, 12307, 12336, 12365, 12394, 12422, 12451, 12480, 12509, 12538, 12566,  /* 320 - 351*/
                12595, 12624, 12653, 12682, 12710, 12739, 12768, 12797, 12826, 12854, 12883, 12912, 12941, 12970, 12998, 13027, 13056, 13085, 13114, 13142, 13171, 13200, 13229, 13258, 13286, 13315, 13344, 13373, 13402, 13430, 13459, 13488,  /* 352 - 383*/
                13517, 13546, 13574, 13603, 13632, 13661, 13690, 13718, 13747, 13776, 13805, 13834, 13862, 13891, 13920, 13949, 13978, 14006, 14035, 14064, 14093, 14122, 14150, 14179, 14208, 14237, 14266, 14294, 14323, 14352, 14381, 14410,  /* 384 - 415*/
                14438, 14467, 14496, 14525, 14554, 14582, 14611, 14640, 14669, 14698, 14726, 14755, 14784, 14813, 14842, 14870, 14899, 14928, 14957, 14986, 15014, 15043, 15072, 15101, 15130, 15158, 15187, 15216, 15245, 15274, 15302, 15331,  /* 416 - 447*/
                15360, 15389, 15418, 15446, 15475, 15504, 15533, 15562, 15590, 15619, 15648, 15677, 15706, 15734, 15763, 15792, 15821, 15850, 15878, 15907, 15936, 15965, 15994, 16022, 16051, 16080, 16109, 16138, 16166, 16195, 16224, 16253,  /* 448 - 479*/
                16282, 16310, 16339, 16368, 16397, 16426, 16454, 16483, 16512, 16541, 16570, 16598, 16627, 16656, 16685, 16714, 16742, 16771, 16800, 16829, 16858, 16886, 16915, 16944, 16973, 17002, 17030, 17059, 17088, 17117, 17146, 17174,  /* 480 - 511*/
                17203, 17232, 17261, 17290, 17318, 17347, 17376, 17405, 17434, 17462, 17491, 17520, 17549, 17578, 17606, 17635, 17664, 17693, 17722, 17750, 17779, 17808, 17837, 17866, 17894, 17923, 17952, 17981, 18010, 18038, 18067, 18096,  /* 512 - 543*/
                18125, 18154, 18182, 18211, 18240, 18269, 18298, 18326, 18355, 18384, 18413, 18442, 18470, 18499, 18528, 18557, 18586, 18614, 18643, 18672, 18701, 18730, 18758, 18787, 18816, 18845, 18874, 18902, 18931, 18960, 18989, 19018,  /* 544 - 575*/
                19046, 19075, 19104, 19133, 19162, 19190, 19219, 19248, 19277, 19306, 19334, 19363, 19392, 19421, 19450, 19478, 19507, 19536, 19565, 19594, 19622, 19651, 19680, 19709, 19738, 19766, 19795, 19824, 19853, 19882, 19910, 19939,  /* 576 - 607*/
                19968, 19997, 20026, 20054, 20083, 20112, 20141, 20170, 20198, 20227, 20256, 20285, 20314, 20342, 20371, 20400, 20429, 20458, 20486, 20515, 20544, 20573, 20602, 20630, 20659, 20688, 20717, 20746, 20774, 20803, 20832, 20861,  /* 608 - 639*/
                20890, 20918, 20947, 20976, 21005, 21034, 21062, 21091, 21120, 21149, 21178, 21206, 21235, 21264, 21293, 21322, 21350, 21379, 21408, 21437, 21466, 21494, 21523, 21552, 21581, 21610, 21638, 21667, 21696, 21725, 21754, 21782,  /* 640 - 671*/
                21811, 21840, 21869, 21898, 21926, 21955, 21984, 22013, 22042, 22070, 22099, 22128, 22157, 22186, 22214, 22243, 22272, 22301, 22330, 22358, 22387, 22416, 22445, 22474, 22502, 22531, 22560, 22589, 22618, 22646, 22675, 22704,  /* 672 - 703*/
                22733, 22762, 22790, 22819, 22848, 22877, 22906, 22934, 22963, 22992, 23021, 23050, 23078, 23107, 23136, 23165, 23194, 23222, 23251, 23280, 23309, 23338, 23366, 23395, 23424, 23453, 23482, 23510, 23539, 23568, 23597, 23626,  /* 704 - 735*/
                23654, 23683, 23712, 23741, 23770, 23798, 23827, 23856, 23885, 23914, 23942, 23971, 24000, 24029, 24058, 24086, 24115, 24144, 24173, 24202, 24230, 24259, 24288, 24317, 24346, 24374, 24403, 24432, 24461, 24490, 24518, 24547,  /* 736 - 767*/
                24576, 24605, 24634, 24662, 24691, 24720, 24749, 24778, 24807, 24836, 24865, 24893, 24922, 24951, 24980, 25009, 25038, 25067, 25096, 25125, 25154, 25183, 25212, 25241, 25271, 25300, 25329, 25358, 25387, 25416, 25445, 25474,  /* 768 - 799*/
                25504, 25533, 25562, 25591, 25620, 25650, 25679, 25708, 25738, 25767, 25796, 25826, 25855, 25884, 25914, 25943, 25972, 26002, 26031, 26061, 26090, 26120, 26149, 26179, 26208, 26238, 26267, 26297, 26326, 26356, 26385, 26415,  /* 800 - 831*/
                26445, 26474, 26504, 26534, 26563, 26593, 26623, 26653, 26682, 26712, 26742, 26772, 26802, 26831, 26861, 26891, 26921, 26951, 26981, 27011, 27041, 27071, 27101, 27131, 27161, 27191, 27221, 27251, 27281, 27311, 27341, 27371,  /* 832 - 863*/
                27402, 27432, 27462, 27492, 27523, 27553, 27583, 27613, 27644, 27674, 27704, 27735, 27765, 27796, 27826, 27857, 27887, 27918, 27948, 27979, 28009, 28040, 28071, 28101, 28132, 28163, 28193, 28224, 28255, 28286, 28316, 28347,  /* 864 - 895*/
                28378, 28409, 28440, 28471, 28502, 28533, 28564, 28595, 28626, 28657, 28688, 28719, 28750, 28781, 28813, 28844, 28875, 28906, 28938, 28969, 29000, 29032, 29063, 29095, 29126, 29158, 29189, 29221, 29253, 29284, 29316, 29348,  /* 896 - 927*/
                29379, 29411, 29443, 29475, 29507, 29539, 29571, 29603, 29635, 29667, 29699, 29731, 29763, 29795, 29828, 29860, 29892, 29925, 29957, 29989, 30022, 30055, 30087, 30120, 30152, 30185, 30218, 30251, 30284, 30316, 30349, 30382,  /* 928 - 959*/
                30415, 30449, 30482, 30515, 30548, 30582, 30615, 30648, 30682, 30715, 30749, 30783, 30816, 30850, 30884, 30918, 30952, 30986, 31020, 31055, 31089, 31123, 31158, 31192, 31227, 31262, 31296, 31331, 31366, 31401, 31437, 31472,  /* 960 - 991*/
                31507, 31543, 31578, 31614, 31650, 31686, 31722, 31758, 31795, 31831, 31868, 31905, 31942, 31979, 32017, 32055, 32092, 32131, 32169, 32208, 32247, 32286, 32325, 32365, 32406, 32447, 32489, 32531, 32574, 32618, 32664, 32712,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 154, 258, 350, 434, 514, 589, 661, 731, 798, 864, 928, 990, 1052, 1112, 1171, 1229, 1286, 1342, 1398, 1453, 1507, 1560, 1613, 1666, 1717, 1769, 1819, 1870, 1920, 1969, 2018,  /* 0 - 31*/
                2067, 2115, 2163, 2210, 2257, 2304, 2351, 2397, 2443, 2489, 2534, 2579, 2624, 2669, 2713, 2757, 2801, 2845, 2888, 2931, 2974, 3017, 3060, 3102, 3144, 3186, 3228, 3270, 3311, 3353, 3394, 3435,  /* 32 - 63*/
                3476, 3516, 3557, 3597, 3637, 3677, 3717, 3757, 3797, 3836, 3875, 3915, 3954, 3993, 4031, 4070, 4109, 4147, 4186, 4224, 4262, 4300, 4338, 4376, 4413, 4451, 4488, 4526, 4563, 4600, 4637, 4674,  /* 64 - 95*/
                4711, 4748, 4784, 4821, 4857, 4894, 4930, 4966, 5002, 5038, 5074, 5110, 5146, 5182, 5217, 5253, 5288, 5324, 5359, 5394, 5429, 5464, 5499, 5534, 5569, 5604, 5638, 5673, 5708, 5742, 5777, 5811,  /* 96 - 127*/
                5845, 5879, 5914, 5948, 5982, 6016, 6050, 6083, 6117, 6151, 6184, 6218, 6252, 6285, 6318, 6352, 6385, 6418, 6451, 6485, 6518, 6551, 6584, 6616, 6649, 6682, 6715, 6747, 6780, 6813, 6845, 6878,  /* 128 - 159*/
                6910, 6942, 6975, 7007, 7039, 7071, 7103, 7136, 7168, 7200, 7231, 7263, 7295, 7327, 7359, 7390, 7422, 7454, 7485, 7517, 7548, 7580, 7611, 7642, 7674, 7705, 7736, 7767, 7798, 7830, 7861, 7892,  /* 160 - 191*/
                7923, 7954, 7984, 8015, 8046, 8077, 8108, 8138, 8169, 8200, 8230, 8261, 8291, 8322, 8352, 8382, 8413, 8443, 8473, 8504, 8534, 8564, 8594, 8624, 8654, 8684, 8714, 8744, 8774, 8804, 8834, 8864,  /* 192 - 223*/
                8894, 8923, 8953, 8983, 9012, 9042, 9072, 9101, 9131, 9160, 9190, 9219, 9249, 9278, 9307, 9337, 9366, 9395, 9424, 9454, 9483, 9512, 9541, 9570, 9599, 9628, 9657, 9686, 9715, 9744, 9773, 9802,  /* 224 - 255*/
                9830, 9859, 9888, 9917, 9946, 9974, 10003, 10032, 10061, 10090, 10118, 10147, 10176, 10205, 10234, 10262, 10291, 10320, 10349, 10378, 10406, 10435, 10464, 10493, 10522, 10550, 10579, 10608, 10637, 10666, 10694, 10723,  /* 256 - 287*/
                10752, 10781, 10810, 10838, 10867, 10896, 10925, 10954, 10982, 11011, 11040, 11069, 11098, 11126, 11155, 11184, 11213, 11242, 11270, 11299, 11328, 11357, 11386, 11414, 11443, 11472, 11501, 11530, 11558, 11587, 11616, 11645,  /* 288 - 319*/
                11674, 11702, 11731, 11760, 11789, 11818, 11846, 11875, 11904, 11933, 11962, 11990, 12019, 12048, 12077, 12106, 12134, 12163, 12192, 12221, 12250, 12278, 12307, 12336, 12365, 12394, 12422, 12451, 12480, 12509, 12538, 12566,  /* 320 - 351*/
                12595, 12624, 12653, 12682, 12710, 12739, 12768, 12797, 12826, 12854, 12883, 12912, 12941, 12970, 12998, 13027, 13056, 13085, 13114, 13142, 13171, 13200, 13229, 13258, 13286, 13315, 13344, 13373, 13402, 13430, 13459, 13488,  /* 352 - 383*/
                13517, 13546, 13574, 13603, 13632, 13661, 13690, 13718, 13747, 13776, 13805, 13834, 13862, 13891, 13920, 13949, 13978, 14006, 14035, 14064, 14093, 14122, 14150, 14179, 14208, 14237, 14266, 14294, 14323, 14352, 14381, 14410,  /* 384 - 415*/
                14438, 14467, 14496, 14525, 14554, 14582, 14611, 14640, 14669, 14698, 14726, 14755, 14784, 14813, 14842, 14870, 14899, 14928, 14957, 14986, 15014, 15043, 15072, 15101, 15130, 15158, 15187, 15216, 15245, 15274, 15302, 15331,  /* 416 - 447*/
                15360, 15389, 15418, 15446, 15475, 15504, 15533, 15562, 15590, 15619, 15648, 15677, 15706, 15734, 15763, 15792, 15821, 15850, 15878, 15907, 15936, 15965, 15994, 16022, 16051, 16080, 16109, 16138, 16166, 16195, 16224, 16253,  /* 448 - 479*/
                16282, 16310, 16339, 16368, 16397, 16426, 16454, 16483, 16512, 16541, 16570, 16598, 16627, 16656, 16685, 16714, 16742, 16771, 16800, 16829, 16858, 16886, 16915, 16944, 16973, 17002, 17030, 17059, 17088, 17117, 17146, 17174,  /* 480 - 511*/
                17203, 17232, 17261, 17290, 17318, 17347, 17376, 17405, 17434, 17462, 17491, 17520, 17549, 17578, 17606, 17635, 17664, 17693, 17722, 17750, 17779, 17808, 17837, 17866, 17894, 17923, 17952, 17981, 18010, 18038, 18067, 18096,  /* 512 - 543*/
                18125, 18154, 18182, 18211, 18240, 18269, 18298, 18326, 18355, 18384, 18413, 18442, 18470, 18499, 18528, 18557, 18586, 18614, 18643, 18672, 18701, 18730, 18758, 18787, 18816, 18845, 18874, 18902, 18931, 18960, 18989, 19018,  /* 544 - 575*/
                19046, 19075, 19104, 19133, 19162, 19190, 19219, 19248, 19277, 19306, 19334, 19363, 19392, 19421, 19450, 19478, 19507, 19536, 19565, 19594, 19622, 19651, 19680, 19709, 19738, 19766, 19795, 19824, 19853, 19882, 19910, 19939,  /* 576 - 607*/
                19968, 19997, 20026, 20054, 20083, 20112, 20141, 20170, 20198, 20227, 20256, 20285, 20314, 20342, 20371, 20400, 20429, 20458, 20486, 20515, 20544, 20573, 20602, 20630, 20659, 20688, 20717, 20746, 20774, 20803, 20832, 20861,  /* 608 - 639*/
                20890, 20918, 20947, 20976, 21005, 21034, 21062, 21091, 21120, 21149, 21178, 21206, 21235, 21264, 21293, 21322, 21350, 21379, 21408, 21437, 21466, 21494, 21523, 21552, 21581, 21610, 21638, 21667, 21696, 21725, 21754, 21782,  /* 640 - 671*/
                21811, 21840, 21869, 21898, 21926, 21955, 21984, 22013, 22042, 22070, 22099, 22128, 22157, 22186, 22214, 22243, 22272, 22301, 22330, 22358, 22387, 22416, 22445, 22474, 22502, 22531, 22560, 22589, 22618, 22646, 22675, 22704,  /* 672 - 703*/
                22733, 22762, 22790, 22819, 22848, 22877, 22906, 22934, 22963, 22992, 23021, 23050, 23078, 23107, 23136, 23165, 23194, 23222, 23251, 23280, 23309, 23338, 23366, 23395, 23424, 23453, 23482, 23510, 23539, 23568, 23597, 23626,  /* 704 - 735*/
                23654, 23683, 23712, 23741, 23770, 23798, 23827, 23856, 23885, 23914, 23942, 23971, 24000, 24029, 24058, 24086, 24115, 24144, 24173, 24202, 24230, 24259, 24288, 24317, 24346, 24374, 24403, 24432, 24461, 24490, 24518, 24547,  /* 736 - 767*/
                24576, 24605, 24634, 24662, 24691, 24720, 24749, 24778, 24807, 24836, 24865, 24893, 24922, 24951, 24980, 25009, 25038, 25067, 25096, 25125, 25154, 25183, 25212, 25241, 25271, 25300, 25329, 25358, 25387, 25416, 25445, 25474,  /* 768 - 799*/
                25504, 25533, 25562, 25591, 25620, 25650, 25679, 25708, 25738, 25767, 25796, 25826, 25855, 25884, 25914, 25943, 25972, 26002, 26031, 26061, 26090, 26120, 26149, 26179, 26208, 26238, 26267, 26297, 26326, 26356, 26385, 26415,  /* 800 - 831*/
                26445, 26474, 26504, 26534, 26563, 26593, 26623, 26653, 26682, 26712, 26742, 26772, 26802, 26831, 26861, 26891, 26921, 26951, 26981, 27011, 27041, 27071, 27101, 27131, 27161, 27191, 27221, 27251, 27281, 27311, 27341, 27371,  /* 832 - 863*/
                27402, 27432, 27462, 27492, 27523, 27553, 27583, 27613, 27644, 27674, 27704, 27735, 27765, 27796, 27826, 27857, 27887, 27918, 27948, 27979, 28009, 28040, 28071, 28101, 28132, 28163, 28193, 28224, 28255, 28286, 28316, 28347,  /* 864 - 895*/
                28378, 28409, 28440, 28471, 28502, 28533, 28564, 28595, 28626, 28657, 28688, 28719, 28750, 28781, 28813, 28844, 28875, 28906, 28938, 28969, 29000, 29032, 29063, 29095, 29126, 29158, 29189, 29221, 29253, 29284, 29316, 29348,  /* 896 - 927*/
                29379, 29411, 29443, 29475, 29507, 29539, 29571, 29603, 29635, 29667, 29699, 29731, 29763, 29795, 29828, 29860, 29892, 29925, 29957, 29989, 30022, 30055, 30087, 30120, 30152, 30185, 30218, 30251, 30284, 30316, 30349, 30382,  /* 928 - 959*/
                30415, 30449, 30482, 30515, 30548, 30582, 30615, 30648, 30682, 30715, 30749, 30783, 30816, 30850, 30884, 30918, 30952, 30986, 31020, 31055, 31089, 31123, 31158, 31192, 31227, 31262, 31296, 31331, 31366, 31401, 31437, 31472,  /* 960 - 991*/
                31507, 31543, 31578, 31614, 31650, 31686, 31722, 31758, 31795, 31831, 31868, 31905, 31942, 31979, 32017, 32055, 32092, 32131, 32169, 32208, 32247, 32286, 32325, 32365, 32406, 32447, 32489, 32531, 32574, 32618, 32664, 32712,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 75, 136, 194, 248, 301, 352, 403, 452, 500, 548, 595, 641, 687, 732, 777, 822, 866, 910, 953, 997, 1040, 1082, 1125, 1167, 1209, 1250, 1292, 1333, 1374, 1415, 1455,  /* 0 - 31*/
                1496, 1536, 1576, 1616, 1656, 1695, 1735, 1774, 1814, 1853, 1892, 1930, 1969, 2008, 2046, 2085, 2123, 2161, 2199, 2237, 2275, 2313, 2350, 2388, 2425, 2463, 2500, 2537, 2574, 2611, 2648, 2685,  /* 32 - 63*/
                2722, 2758, 2795, 2831, 2868, 2904, 2941, 2977, 3013, 3049, 3085, 3121, 3157, 3193, 3229, 3264, 3300, 3336, 3371, 3407, 3442, 3477, 3513, 3548, 3583, 3618, 3653, 3688, 3723, 3758, 3793, 3828,  /* 64 - 95*/
                3863, 3898, 3932, 3967, 4001, 4036, 4070, 4105, 4139, 4174, 4208, 4242, 4276, 4311, 4345, 4379, 4413, 4447, 4481, 4515, 4549, 4582, 4616, 4650, 4684, 4717, 4751, 4785, 4818, 4852, 4885, 4919,  /* 96 - 127*/
                4952, 4986, 5019, 5052, 5086, 5119, 5152, 5185, 5218, 5252, 5285, 5318, 5351, 5384, 5417, 5450, 5483, 5515, 5548, 5581, 5614, 5647, 5679, 5712, 5745, 5777, 5810, 5842, 5875, 5907, 5940, 5972,  /* 128 - 159*/
                6005, 6037, 6070, 6102, 6134, 6167, 6199, 6231, 6263, 6295, 6328, 6360, 6392, 6424, 6456, 6488, 6520, 6552, 6584, 6616, 6648, 6680, 6711, 6743, 6775, 6807, 6839, 6870, 6902, 6934, 6966, 6997,  /* 160 - 191*/
                7029, 7060, 7092, 7124, 7155, 7187, 7218, 7250, 7281, 7312, 7344, 7375, 7407, 7438, 7469, 7501, 7532, 7563, 7594, 7626, 7657, 7688, 7719, 7750, 7781, 7813, 7844, 7875, 7906, 7937, 7968, 7999,  /* 192 - 223*/
                8030, 8061, 8092, 8122, 8153, 8184, 8215, 8246, 8277, 8308, 8338, 8369, 8400, 8431, 8461, 8492, 8523, 8553, 8584, 8615, 8645, 8676, 8706, 8737, 8767, 8798, 8829, 8859, 8889, 8920, 8950, 8981,  /* 224 - 255*/
                9011, 9042, 9072, 9102, 9133, 9163, 9194, 9224, 9254, 9285, 9315, 9346, 9376, 9406, 9437, 9467, 9498, 9528, 9558, 9589, 9619, 9650, 9680, 9710, 9741, 9771, 9802, 9832, 9862, 9893, 9923, 9954,  /* 256 - 287*/
                9984, 10014, 10045, 10075, 10106, 10136, 10166, 10197, 10227, 10258, 10288, 10318, 10349, 10379, 10410, 10440, 10470, 10501, 10531, 10562, 10592, 10622, 10653, 10683, 10714, 10744, 10774, 10805, 10835, 10866, 10896, 10926,  /* 288 - 319*/
                10957, 10987, 11018, 11048, 11078, 11109, 11139, 11170, 11200, 11230, 11261, 11291, 11322, 11352, 11382, 11413, 11443, 11474, 11504, 11534, 11565, 11595, 11626, 11656, 11686, 11717, 11747, 11778, 11808, 11838, 11869, 11899,  /* 320 - 351*/
                11930, 11960, 11990, 12021, 12051, 12082, 12112, 12142, 12173, 12203, 12234, 12264, 12294, 12325, 12355, 12386, 12416, 12446, 12477, 12507, 12538, 12568, 12598, 12629, 12659, 12690, 12720, 12750, 12781, 12811, 12842, 12872,  /* 352 - 383*/
                12902, 12933, 12963, 12994, 13024, 13054, 13085, 13115, 13146, 13176, 13206, 13237, 13267, 13298, 13328, 13358, 13389, 13419, 13450, 13480, 13510, 13541, 13571, 13602, 13632, 13662, 13693, 13723, 13754, 13784, 13814, 13845,  /* 384 - 415*/
                13875, 13906, 13936, 13966, 13997, 14027, 14058, 14088, 14118, 14149, 14179, 14210, 14240, 14270, 14301, 14331, 14362, 14392, 14422, 14453, 14483, 14514, 14544, 14574, 14605, 14635, 14666, 14696, 14726, 14757, 14787, 14818,  /* 416 - 447*/
                14848, 14878, 14909, 14939, 14970, 15000, 15030, 15061, 15091, 15122, 15152, 15182, 15213, 15243, 15274, 15304, 15334, 15365, 15395, 15426, 15456, 15486, 15517, 15547, 15578, 15608, 15638, 15669, 15699, 15730, 15760, 15790,  /* 448 - 479*/
                15821, 15851, 15882, 15912, 15942, 15973, 16003, 16034, 16064, 16094, 16125, 16155, 16186, 16216, 16246, 16277, 16307, 16338, 16368, 16398, 16429, 16459, 16490, 16520, 16550, 16581, 16611, 16642, 16672, 16702, 16733, 16763,  /* 480 - 511*/
                16794, 16824, 16854, 16885, 16915, 16946, 16976, 17006, 17037, 17067, 17098, 17128, 17158, 17189, 17219, 17250, 17280, 17310, 17341, 17371, 17402, 17432, 17462, 17493, 17523, 17554, 17584, 17614, 17645, 17675, 17706, 17736,  /* 512 - 543*/
                17766, 17797, 17827, 17858, 17888, 17918, 17949, 17979, 18010, 18040, 18070, 18101, 18131, 18162, 18192, 18222, 18253, 18283, 18314, 18344, 18374, 18405, 18435, 18466, 18496, 18526, 18557, 18587, 18618, 18648, 18678, 18709,  /* 544 - 575*/
                18739, 18770, 18800, 18830, 18861, 18891, 18922, 18952, 18982, 19013, 19043, 19074, 19104, 19134, 19165, 19195, 19226, 19256, 19286, 19317, 19347, 19378, 19408, 19438, 19469, 19499, 19530, 19560, 19590, 19621, 19651, 19682,  /* 576 - 607*/
                19712, 19742, 19773, 19803, 19834, 19864, 19894, 19925, 19955, 19986, 20016, 20046, 20077, 20107, 20138, 20168, 20198, 20229, 20259, 20290, 20320, 20350, 20381, 20411, 20442, 20472, 20502, 20533, 20563, 20594, 20624, 20654,  /* 608 - 639*/
                20685, 20715, 20746, 20776, 20806, 20837, 20867, 20898, 20928, 20958, 20989, 21019, 21050, 21080, 21110, 21141, 21171, 21202, 21232, 21262, 21293, 21323, 21354, 21384, 21414, 21445, 21475, 21506, 21536, 21566, 21597, 21627,  /* 640 - 671*/
                21658, 21688, 21718, 21749, 21779, 21810, 21840, 21870, 21901, 21931, 21962, 21992, 22022, 22053, 22083, 22114, 22144, 22174, 22205, 22235, 22266, 22296, 22326, 22357, 22387, 22418, 22448, 22478, 22509, 22539, 22570, 22600,  /* 672 - 703*/
                22630, 22661, 22691, 22722, 22752, 22782, 22813, 22843, 22874, 22904, 22934, 22965, 22995, 23026, 23056, 23086, 23117, 23147, 23178, 23208, 23238, 23269, 23299, 23330, 23360, 23390, 23421, 23451, 23482, 23512, 23542, 23573,  /* 704 - 735*/
                23603, 23634, 23664, 23694, 23725, 23755, 23786, 23816, 23846, 23877, 23907, 23938, 23968, 23998, 24029, 24059, 24090, 24120, 24150, 24181, 24211, 24242, 24272, 24302, 24333, 24363, 24394, 24424, 24454, 24485, 24515, 24546,  /* 736 - 767*/
                24576, 24606, 24637, 24667, 24698, 24728, 24759, 24789, 24819, 24850, 24880, 24911, 24941, 24972, 25002, 25033, 25063, 25094, 25124, 25155, 25185, 25216, 25246, 25277, 25307, 25338, 25368, 25399, 25430, 25460, 25491, 25521,  /* 768 - 799*/
                25552, 25583, 25613, 25644, 25674, 25705, 25736, 25766, 25797, 25828, 25858, 25889, 25920, 25950, 25981, 26012, 26043, 26073, 26104, 26135, 26165, 26196, 26227, 26258, 26289, 26319, 26350, 26381, 26412, 26443, 26473, 26504,  /* 800 - 831*/
                26535, 26566, 26597, 26628, 26658, 26689, 26720, 26751, 26782, 26813, 26844, 26875, 26906, 26937, 26968, 26999, 27029, 27060, 27091, 27122, 27153, 27184, 27216, 27247, 27278, 27309, 27340, 27371, 27402, 27433, 27464, 27495,  /* 832 - 863*/
                27526, 27557, 27589, 27620, 27651, 27682, 27713, 27744, 27776, 27807, 27838, 27869, 27900, 27932, 27963, 27994, 28026, 28057, 28088, 28119, 28151, 28182, 28213, 28245, 28276, 28308, 28339, 28370, 28402, 28433, 28465, 28496,  /* 864 - 895*/
                28528, 28559, 28591, 28622, 28654, 28685, 28717, 28748, 28780, 28811, 28843, 28875, 28906, 28938, 28969, 29001, 29033, 29064, 29096, 29128, 29160, 29191, 29223, 29255, 29287, 29318, 29350, 29382, 29414, 29446, 29478, 29510,  /* 896 - 927*/
                29542, 29574, 29605, 29637, 29669, 29701, 29733, 29766, 29798, 29830, 29862, 29894, 29926, 29958, 29990, 30022, 30055, 30087, 30119, 30151, 30184, 30216, 30248, 30281, 30313, 30346, 30378, 30410, 30443, 30475, 30508, 30540,  /* 928 - 959*/
                30573, 30606, 30638, 30671, 30704, 30736, 30769, 30802, 30835, 30867, 30900, 30933, 30966, 30999, 31032, 31065, 31098, 31131, 31164, 31197, 31230, 31264, 31297, 31330, 31364, 31397, 31430, 31464, 31497, 31531, 31564, 31598,  /* 960 - 991*/
                31632, 31666, 31699, 31733, 31767, 31801, 31835, 31869, 31904, 31938, 31972, 32006, 32041, 32076, 32110, 32145, 32180, 32215, 32250, 32285, 32321, 32356, 32392, 32428, 32464, 32500, 32536, 32573, 32610, 32648, 32686, 32726,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 75, 136, 194, 248, 301, 352, 403, 452, 500, 548, 595, 641, 687, 732, 777, 822, 866, 910, 953, 997, 1040, 1082, 1125, 1167, 1209, 1250, 1292, 1333, 1374, 1415, 1455,  /* 0 - 31*/
                1496, 1536, 1576, 1616, 1656, 1695, 1735, 1774, 1814, 1853, 1892, 1930, 1969, 2008, 2046, 2085, 2123, 2161, 2199, 2237, 2275, 2313, 2350, 2388, 2425, 2463, 2500, 2537, 2574, 2611, 2648, 2685,  /* 32 - 63*/
                2722, 2758, 2795, 2831, 2868, 2904, 2941, 2977, 3013, 3049, 3085, 3121, 3157, 3193, 3229, 3264, 3300, 3336, 3371, 3407, 3442, 3477, 3513, 3548, 3583, 3618, 3653, 3688, 3723, 3758, 3793, 3828,  /* 64 - 95*/
                3863, 3898, 3932, 3967, 4001, 4036, 4070, 4105, 4139, 4174, 4208, 4242, 4276, 4311, 4345, 4379, 4413, 4447, 4481, 4515, 4549, 4582, 4616, 4650, 4684, 4717, 4751, 4785, 4818, 4852, 4885, 4919,  /* 96 - 127*/
                4952, 4986, 5019, 5052, 5086, 5119, 5152, 5185, 5218, 5252, 5285, 5318, 5351, 5384, 5417, 5450, 5483, 5515, 5548, 5581, 5614, 5647, 5679, 5712, 5745, 5777, 5810, 5842, 5875, 5907, 5940, 5972,  /* 128 - 159*/
                6005, 6037, 6070, 6102, 6134, 6167, 6199, 6231, 6263, 6295, 6328, 6360, 6392, 6424, 6456, 6488, 6520, 6552, 6584, 6616, 6648, 6680, 6711, 6743, 6775, 6807, 6839, 6870, 6902, 6934, 6966, 6997,  /* 160 - 191*/
                7029, 7060, 7092, 7124, 7155, 7187, 7218, 7250, 7281, 7312, 7344, 7375, 7407, 7438, 7469, 7501, 7532, 7563, 7594, 7626, 7657, 7688, 7719, 7750, 7781, 7813, 7844, 7875, 7906, 7937, 7968, 7999,  /* 192 - 223*/
                8030, 8061, 8092, 8122, 8153, 8184, 8215, 8246, 8277, 8308, 8338, 8369, 8400, 8431, 8461, 8492, 8523, 8553, 8584, 8615, 8645, 8676, 8706, 8737, 8767, 8798, 8829, 8859, 8889, 8920, 8950, 8981,  /* 224 - 255*/
                9011, 9042, 9072, 9102, 9133, 9163, 9194, 9224, 9254, 9285, 9315, 9346, 9376, 9406, 9437, 9467, 9498, 9528, 9558, 9589, 9619, 9650, 9680, 9710, 9741, 9771, 9802, 9832, 9862, 9893, 9923, 9954,  /* 256 - 287*/
                9984, 10014, 10045, 10075, 10106, 10136, 10166, 10197, 10227, 10258, 10288, 10318, 10349, 10379, 10410, 10440, 10470, 10501, 10531, 10562, 10592, 10622, 10653, 10683, 10714, 10744, 10774, 10805, 10835, 10866, 10896, 10926,  /* 288 - 319*/
                10957, 10987, 11018, 11048, 11078, 11109, 11139, 11170, 11200, 11230, 11261, 11291, 11322, 11352, 11382, 11413, 11443, 11474, 11504, 11534, 11565, 11595, 11626, 11656, 11686, 11717, 11747, 11778, 11808, 11838, 11869, 11899,  /* 320 - 351*/
                11930, 11960, 11990, 12021, 12051, 12082, 12112, 12142, 12173, 12203, 12234, 12264, 12294, 12325, 12355, 12386, 12416, 12446, 12477, 12507, 12538, 12568, 12598, 12629, 12659, 12690, 12720, 12750, 12781, 12811, 12842, 12872,  /* 352 - 383*/
                12902, 12933, 12963, 12994, 13024, 13054, 13085, 13115, 13146, 13176, 13206, 13237, 13267, 13298, 13328, 13358, 13389, 13419, 13450, 13480, 13510, 13541, 13571, 13602, 13632, 13662, 13693, 13723, 13754, 13784, 13814, 13845,  /* 384 - 415*/
                13875, 13906, 13936, 13966, 13997, 14027, 14058, 14088, 14118, 14149, 14179, 14210, 14240, 14270, 14301, 14331, 14362, 14392, 14422, 14453, 14483, 14514, 14544, 14574, 14605, 14635, 14666, 14696, 14726, 14757, 14787, 14818,  /* 416 - 447*/
                14848, 14878, 14909, 14939, 14970, 15000, 15030, 15061, 15091, 15122, 15152, 15182, 15213, 15243, 15274, 15304, 15334, 15365, 15395, 15426, 15456, 15486, 15517, 15547, 15578, 15608, 15638, 15669, 15699, 15730, 15760, 15790,  /* 448 - 479*/
                15821, 15851, 15882, 15912, 15942, 15973, 16003, 16034, 16064, 16094, 16125, 16155, 16186, 16216, 16246, 16277, 16307, 16338, 16368, 16398, 16429, 16459, 16490, 16520, 16550, 16581, 16611, 16642, 16672, 16702, 16733, 16763,  /* 480 - 511*/
                16794, 16824, 16854, 16885, 16915, 16946, 16976, 17006, 17037, 17067, 17098, 17128, 17158, 17189, 17219, 17250, 17280, 17310, 17341, 17371, 17402, 17432, 17462, 17493, 17523, 17554, 17584, 17614, 17645, 17675, 17706, 17736,  /* 512 - 543*/
                17766, 17797, 17827, 17858, 17888, 17918, 17949, 17979, 18010, 18040, 18070, 18101, 18131, 18162, 18192, 18222, 18253, 18283, 18314, 18344, 18374, 18405, 18435, 18466, 18496, 18526, 18557, 18587, 18618, 18648, 18678, 18709,  /* 544 - 575*/
                18739, 18770, 18800, 18830, 18861, 18891, 18922, 18952, 18982, 19013, 19043, 19074, 19104, 19134, 19165, 19195, 19226, 19256, 19286, 19317, 19347, 19378, 19408, 19438, 19469, 19499, 19530, 19560, 19590, 19621, 19651, 19682,  /* 576 - 607*/
                19712, 19742, 19773, 19803, 19834, 19864, 19894, 19925, 19955, 19986, 20016, 20046, 20077, 20107, 20138, 20168, 20198, 20229, 20259, 20290, 20320, 20350, 20381, 20411, 20442, 20472, 20502, 20533, 20563, 20594, 20624, 20654,  /* 608 - 639*/
                20685, 20715, 20746, 20776, 20806, 20837, 20867, 20898, 20928, 20958, 20989, 21019, 21050, 21080, 21110, 21141, 21171, 21202, 21232, 21262, 21293, 21323, 21354, 21384, 21414, 21445, 21475, 21506, 21536, 21566, 21597, 21627,  /* 640 - 671*/
                21658, 21688, 21718, 21749, 21779, 21810, 21840, 21870, 21901, 21931, 21962, 21992, 22022, 22053, 22083, 22114, 22144, 22174, 22205, 22235, 22266, 22296, 22326, 22357, 22387, 22418, 22448, 22478, 22509, 22539, 22570, 22600,  /* 672 - 703*/
                22630, 22661, 22691, 22722, 22752, 22782, 22813, 22843, 22874, 22904, 22934, 22965, 22995, 23026, 23056, 23086, 23117, 23147, 23178, 23208, 23238, 23269, 23299, 23330, 23360, 23390, 23421, 23451, 23482, 23512, 23542, 23573,  /* 704 - 735*/
                23603, 23634, 23664, 23694, 23725, 23755, 23786, 23816, 23846, 23877, 23907, 23938, 23968, 23998, 24029, 24059, 24090, 24120, 24150, 24181, 24211, 24242, 24272, 24302, 24333, 24363, 24394, 24424, 24454, 24485, 24515, 24546,  /* 736 - 767*/
                24576, 24606, 24637, 24667, 24698, 24728, 24759, 24789, 24819, 24850, 24880, 24911, 24941, 24972, 25002, 25033, 25063, 25094, 25124, 25155, 25185, 25216, 25246, 25277, 25307, 25338, 25368, 25399, 25430, 25460, 25491, 25521,  /* 768 - 799*/
                25552, 25583, 25613, 25644, 25674, 25705, 25736, 25766, 25797, 25828, 25858, 25889, 25920, 25950, 25981, 26012, 26043, 26073, 26104, 26135, 26165, 26196, 26227, 26258, 26289, 26319, 26350, 26381, 26412, 26443, 26473, 26504,  /* 800 - 831*/
                26535, 26566, 26597, 26628, 26658, 26689, 26720, 26751, 26782, 26813, 26844, 26875, 26906, 26937, 26968, 26999, 27029, 27060, 27091, 27122, 27153, 27184, 27216, 27247, 27278, 27309, 27340, 27371, 27402, 27433, 27464, 27495,  /* 832 - 863*/
                27526, 27557, 27589, 27620, 27651, 27682, 27713, 27744, 27776, 27807, 27838, 27869, 27900, 27932, 27963, 27994, 28026, 28057, 28088, 28119, 28151, 28182, 28213, 28245, 28276, 28308, 28339, 28370, 28402, 28433, 28465, 28496,  /* 864 - 895*/
                28528, 28559, 28591, 28622, 28654, 28685, 28717, 28748, 28780, 28811, 28843, 28875, 28906, 28938, 28969, 29001, 29033, 29064, 29096, 29128, 29160, 29191, 29223, 29255, 29287, 29318, 29350, 29382, 29414, 29446, 29478, 29510,  /* 896 - 927*/
                29542, 29574, 29605, 29637, 29669, 29701, 29733, 29766, 29798, 29830, 29862, 29894, 29926, 29958, 29990, 30022, 30055, 30087, 30119, 30151, 30184, 30216, 30248, 30281, 30313, 30346, 30378, 30410, 30443, 30475, 30508, 30540,  /* 928 - 959*/
                30573, 30606, 30638, 30671, 30704, 30736, 30769, 30802, 30835, 30867, 30900, 30933, 30966, 30999, 31032, 31065, 31098, 31131, 31164, 31197, 31230, 31264, 31297, 31330, 31364, 31397, 31430, 31464, 31497, 31531, 31564, 31598,  /* 960 - 991*/
                31632, 31666, 31699, 31733, 31767, 31801, 31835, 31869, 31904, 31938, 31972, 32006, 32041, 32076, 32110, 32145, 32180, 32215, 32250, 32285, 32321, 32356, 32392, 32428, 32464, 32500, 32536, 32573, 32610, 32648, 32686, 32726,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 75, 136, 194, 248, 301, 352, 403, 452, 500, 548, 595, 641, 687, 732, 777, 822, 866, 910, 953, 997, 1040, 1082, 1125, 1167, 1209, 1250, 1292, 1333, 1374, 1415, 1455,  /* 0 - 31*/
                1496, 1536, 1576, 1616, 1656, 1695, 1735, 1774, 1814, 1853, 1892, 1930, 1969, 2008, 2046, 2085, 2123, 2161, 2199, 2237, 2275, 2313, 2350, 2388, 2425, 2463, 2500, 2537, 2574, 2611, 2648, 2685,  /* 32 - 63*/
                2722, 2758, 2795, 2831, 2868, 2904, 2941, 2977, 3013, 3049, 3085, 3121, 3157, 3193, 3229, 3264, 3300, 3336, 3371, 3407, 3442, 3477, 3513, 3548, 3583, 3618, 3653, 3688, 3723, 3758, 3793, 3828,  /* 64 - 95*/
                3863, 3898, 3932, 3967, 4001, 4036, 4070, 4105, 4139, 4174, 4208, 4242, 4276, 4311, 4345, 4379, 4413, 4447, 4481, 4515, 4549, 4582, 4616, 4650, 4684, 4717, 4751, 4785, 4818, 4852, 4885, 4919,  /* 96 - 127*/
                4952, 4986, 5019, 5052, 5086, 5119, 5152, 5185, 5218, 5252, 5285, 5318, 5351, 5384, 5417, 5450, 5483, 5515, 5548, 5581, 5614, 5647, 5679, 5712, 5745, 5777, 5810, 5842, 5875, 5907, 5940, 5972,  /* 128 - 159*/
                6005, 6037, 6070, 6102, 6134, 6167, 6199, 6231, 6263, 6295, 6328, 6360, 6392, 6424, 6456, 6488, 6520, 6552, 6584, 6616, 6648, 6680, 6711, 6743, 6775, 6807, 6839, 6870, 6902, 6934, 6966, 6997,  /* 160 - 191*/
                7029, 7060, 7092, 7124, 7155, 7187, 7218, 7250, 7281, 7312, 7344, 7375, 7407, 7438, 7469, 7501, 7532, 7563, 7594, 7626, 7657, 7688, 7719, 7750, 7781, 7813, 7844, 7875, 7906, 7937, 7968, 7999,  /* 192 - 223*/
                8030, 8061, 8092, 8122, 8153, 8184, 8215, 8246, 8277, 8308, 8338, 8369, 8400, 8431, 8461, 8492, 8523, 8553, 8584, 8615, 8645, 8676, 8706, 8737, 8767, 8798, 8829, 8859, 8889, 8920, 8950, 8981,  /* 224 - 255*/
                9011, 9042, 9072, 9102, 9133, 9163, 9194, 9224, 9254, 9285, 9315, 9346, 9376, 9406, 9437, 9467, 9498, 9528, 9558, 9589, 9619, 9650, 9680, 9710, 9741, 9771, 9802, 9832, 9862, 9893, 9923, 9954,  /* 256 - 287*/
                9984, 10014, 10045, 10075, 10106, 10136, 10166, 10197, 10227, 10258, 10288, 10318, 10349, 10379, 10410, 10440, 10470, 10501, 10531, 10562, 10592, 10622, 10653, 10683, 10714, 10744, 10774, 10805, 10835, 10866, 10896, 10926,  /* 288 - 319*/
                10957, 10987, 11018, 11048, 11078, 11109, 11139, 11170, 11200, 11230, 11261, 11291, 11322, 11352, 11382, 11413, 11443, 11474, 11504, 11534, 11565, 11595, 11626, 11656, 11686, 11717, 11747, 11778, 11808, 11838, 11869, 11899,  /* 320 - 351*/
                11930, 11960, 11990, 12021, 12051, 12082, 12112, 12142, 12173, 12203, 12234, 12264, 12294, 12325, 12355, 12386, 12416, 12446, 12477, 12507, 12538, 12568, 12598, 12629, 12659, 12690, 12720, 12750, 12781, 12811, 12842, 12872,  /* 352 - 383*/
                12902, 12933, 12963, 12994, 13024, 13054, 13085, 13115, 13146, 13176, 13206, 13237, 13267, 13298, 13328, 13358, 13389, 13419, 13450, 13480, 13510, 13541, 13571, 13602, 13632, 13662, 13693, 13723, 13754, 13784, 13814, 13845,  /* 384 - 415*/
                13875, 13906, 13936, 13966, 13997, 14027, 14058, 14088, 14118, 14149, 14179, 14210, 14240, 14270, 14301, 14331, 14362, 14392, 14422, 14453, 14483, 14514, 14544, 14574, 14605, 14635, 14666, 14696, 14726, 14757, 14787, 14818,  /* 416 - 447*/
                14848, 14878, 14909, 14939, 14970, 15000, 15030, 15061, 15091, 15122, 15152, 15182, 15213, 15243, 15274, 15304, 15334, 15365, 15395, 15426, 15456, 15486, 15517, 15547, 15578, 15608, 15638, 15669, 15699, 15730, 15760, 15790,  /* 448 - 479*/
                15821, 15851, 15882, 15912, 15942, 15973, 16003, 16034, 16064, 16094, 16125, 16155, 16186, 16216, 16246, 16277, 16307, 16338, 16368, 16398, 16429, 16459, 16490, 16520, 16550, 16581, 16611, 16642, 16672, 16702, 16733, 16763,  /* 480 - 511*/
                16794, 16824, 16854, 16885, 16915, 16946, 16976, 17006, 17037, 17067, 17098, 17128, 17158, 17189, 17219, 17250, 17280, 17310, 17341, 17371, 17402, 17432, 17462, 17493, 17523, 17554, 17584, 17614, 17645, 17675, 17706, 17736,  /* 512 - 543*/
                17766, 17797, 17827, 17858, 17888, 17918, 17949, 17979, 18010, 18040, 18070, 18101, 18131, 18162, 18192, 18222, 18253, 18283, 18314, 18344, 18374, 18405, 18435, 18466, 18496, 18526, 18557, 18587, 18618, 18648, 18678, 18709,  /* 544 - 575*/
                18739, 18770, 18800, 18830, 18861, 18891, 18922, 18952, 18982, 19013, 19043, 19074, 19104, 19134, 19165, 19195, 19226, 19256, 19286, 19317, 19347, 19378, 19408, 19438, 19469, 19499, 19530, 19560, 19590, 19621, 19651, 19682,  /* 576 - 607*/
                19712, 19742, 19773, 19803, 19834, 19864, 19894, 19925, 19955, 19986, 20016, 20046, 20077, 20107, 20138, 20168, 20198, 20229, 20259, 20290, 20320, 20350, 20381, 20411, 20442, 20472, 20502, 20533, 20563, 20594, 20624, 20654,  /* 608 - 639*/
                20685, 20715, 20746, 20776, 20806, 20837, 20867, 20898, 20928, 20958, 20989, 21019, 21050, 21080, 21110, 21141, 21171, 21202, 21232, 21262, 21293, 21323, 21354, 21384, 21414, 21445, 21475, 21506, 21536, 21566, 21597, 21627,  /* 640 - 671*/
                21658, 21688, 21718, 21749, 21779, 21810, 21840, 21870, 21901, 21931, 21962, 21992, 22022, 22053, 22083, 22114, 22144, 22174, 22205, 22235, 22266, 22296, 22326, 22357, 22387, 22418, 22448, 22478, 22509, 22539, 22570, 22600,  /* 672 - 703*/
                22630, 22661, 22691, 22722, 22752, 22782, 22813, 22843, 22874, 22904, 22934, 22965, 22995, 23026, 23056, 23086, 23117, 23147, 23178, 23208, 23238, 23269, 23299, 23330, 23360, 23390, 23421, 23451, 23482, 23512, 23542, 23573,  /* 704 - 735*/
                23603, 23634, 23664, 23694, 23725, 23755, 23786, 23816, 23846, 23877, 23907, 23938, 23968, 23998, 24029, 24059, 24090, 24120, 24150, 24181, 24211, 24242, 24272, 24302, 24333, 24363, 24394, 24424, 24454, 24485, 24515, 24546,  /* 736 - 767*/
                24576, 24606, 24637, 24667, 24698, 24728, 24759, 24789, 24819, 24850, 24880, 24911, 24941, 24972, 25002, 25033, 25063, 25094, 25124, 25155, 25185, 25216, 25246, 25277, 25307, 25338, 25368, 25399, 25430, 25460, 25491, 25521,  /* 768 - 799*/
                25552, 25583, 25613, 25644, 25674, 25705, 25736, 25766, 25797, 25828, 25858, 25889, 25920, 25950, 25981, 26012, 26043, 26073, 26104, 26135, 26165, 26196, 26227, 26258, 26289, 26319, 26350, 26381, 26412, 26443, 26473, 26504,  /* 800 - 831*/
                26535, 26566, 26597, 26628, 26658, 26689, 26720, 26751, 26782, 26813, 26844, 26875, 26906, 26937, 26968, 26999, 27029, 27060, 27091, 27122, 27153, 27184, 27216, 27247, 27278, 27309, 27340, 27371, 27402, 27433, 27464, 27495,  /* 832 - 863*/
                27526, 27557, 27589, 27620, 27651, 27682, 27713, 27744, 27776, 27807, 27838, 27869, 27900, 27932, 27963, 27994, 28026, 28057, 28088, 28119, 28151, 28182, 28213, 28245, 28276, 28308, 28339, 28370, 28402, 28433, 28465, 28496,  /* 864 - 895*/
                28528, 28559, 28591, 28622, 28654, 28685, 28717, 28748, 28780, 28811, 28843, 28875, 28906, 28938, 28969, 29001, 29033, 29064, 29096, 29128, 29160, 29191, 29223, 29255, 29287, 29318, 29350, 29382, 29414, 29446, 29478, 29510,  /* 896 - 927*/
                29542, 29574, 29605, 29637, 29669, 29701, 29733, 29766, 29798, 29830, 29862, 29894, 29926, 29958, 29990, 30022, 30055, 30087, 30119, 30151, 30184, 30216, 30248, 30281, 30313, 30346, 30378, 30410, 30443, 30475, 30508, 30540,  /* 928 - 959*/
                30573, 30606, 30638, 30671, 30704, 30736, 30769, 30802, 30835, 30867, 30900, 30933, 30966, 30999, 31032, 31065, 31098, 31131, 31164, 31197, 31230, 31264, 31297, 31330, 31364, 31397, 31430, 31464, 31497, 31531, 31564, 31598,  /* 960 - 991*/
                31632, 31666, 31699, 31733, 31767, 31801, 31835, 31869, 31904, 31938, 31972, 32006, 32041, 32076, 32110, 32145, 32180, 32215, 32250, 32285, 32321, 32356, 32392, 32428, 32464, 32500, 32536, 32573, 32610, 32648, 32686, 32726,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768, 800, 832, 864, 896, 928, 960, 992,  /* 0 - 31*/
                1024, 1056, 1088, 1120, 1152, 1184, 1216, 1248, 1280, 1312, 1344, 1376, 1408, 1440, 1472, 1504, 1536, 1568, 1600, 1632, 1664, 1696, 1728, 1760, 1792, 1824, 1856, 1888, 1920, 1952, 1984, 2016,  /* 32 - 63*/
                2048, 2080, 2112, 2144, 2176, 2208, 2240, 2272, 2304, 2336, 2368, 2400, 2432, 2464, 2496, 2528, 2560, 2592, 2624, 2656, 2688, 2720, 2752, 2784, 2816, 2848, 2880, 2912, 2944, 2976, 3008, 3040,  /* 64 - 95*/
                3072, 3104, 3136, 3168, 3200, 3232, 3264, 3296, 3328, 3360, 3392, 3424, 3456, 3488, 3520, 3552, 3584, 3616, 3648, 3680, 3712, 3744, 3776, 3808, 3840, 3872, 3904, 3936, 3968, 4000, 4032, 4064,  /* 96 - 127*/
                4096, 4128, 4160, 4192, 4224, 4256, 4288, 4320, 4352, 4384, 4416, 4448, 4480, 4512, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800, 4832, 4864, 4896, 4928, 4960, 4992, 5024, 5056, 5088,  /* 128 - 159*/
                5120, 5152, 5184, 5216, 5248, 5280, 5312, 5344, 5376, 5408, 5440, 5472, 5504, 5536, 5568, 5600, 5632, 5664, 5696, 5728, 5760, 5792, 5824, 5856, 5888, 5920, 5952, 5984, 6016, 6048, 6080, 6112,  /* 160 - 191*/
                6144, 6176, 6208, 6240, 6272, 6304, 6336, 6368, 6400, 6432, 6464, 6496, 6528, 6560, 6592, 6624, 6656, 6688, 6720, 6752, 6784, 6816, 6848, 6880, 6912, 6944, 6976, 7008, 7040, 7072, 7104, 7136,  /* 192 - 223*/
                7168, 7200, 7232, 7264, 7296, 7328, 7360, 7392, 7424, 7456, 7488, 7520, 7552, 7584, 7616, 7648, 7680, 7712, 7744, 7776, 7808, 7840, 7872, 7904, 7936, 7968, 8000, 8032, 8064, 8096, 8128, 8160,  /* 224 - 255*/
                8192, 8224, 8256, 8288, 8320, 8352, 8384, 8416, 8448, 8480, 8512, 8544, 8576, 8608, 8640, 8672, 8704, 8736, 8768, 8800, 8832, 8864, 8896, 8928, 8960, 8992, 9024, 9056, 9088, 9120, 9152, 9184,  /* 256 - 287*/
                9216, 9248, 9280, 9312, 9344, 9376, 9408, 9440, 9472, 9504, 9536, 9568, 9600, 9632, 9664, 9696, 9728, 9760, 9792, 9824, 9856, 9888, 9920, 9952, 9984, 10016, 10048, 10080, 10112, 10144, 10176, 10208,  /* 288 - 319*/
                10240, 10272, 10304, 10336, 10368, 10400, 10432, 10464, 10496, 10528, 10560, 10592, 10624, 10656, 10688, 10720, 10752, 10784, 10816, 10848, 10880, 10912, 10944, 10976, 11008, 11040, 11072, 11104, 11136, 11168, 11200, 11232,  /* 320 - 351*/
                11264, 11296, 11328, 11360, 11392, 11424, 11456, 11488, 11520, 11552, 11584, 11616, 11648, 11680, 11712, 11744, 11776, 11808, 11840, 11872, 11904, 11936, 11968, 12000, 12032, 12064, 12096, 12128, 12160, 12192, 12224, 12256,  /* 352 - 383*/
                12288, 12320, 12352, 12384, 12416, 12448, 12480, 12512, 12544, 12576, 12608, 12640, 12672, 12704, 12736, 12768, 12800, 12832, 12864, 12896, 12928, 12960, 12992, 13024, 13056, 13088, 13120, 13152, 13184, 13216, 13248, 13280,  /* 384 - 415*/
                13312, 13344, 13376, 13408, 13440, 13472, 13504, 13536, 13568, 13600, 13632, 13664, 13696, 13728, 13760, 13792, 13824, 13856, 13888, 13920, 13952, 13984, 14016, 14048, 14080, 14112, 14144, 14176, 14208, 14240, 14272, 14304,  /* 416 - 447*/
                14336, 14368, 14400, 14432, 14464, 14496, 14528, 14560, 14592, 14624, 14656, 14688, 14720, 14752, 14784, 14816, 14848, 14880, 14912, 14944, 14976, 15008, 15040, 15072, 15104, 15136, 15168, 15200, 15232, 15264, 15296, 15328,  /* 448 - 479*/
                15360, 15392, 15424, 15456, 15488, 15520, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15808, 15840, 15872, 15904, 15936, 15968, 16000, 16032, 16064, 16096, 16128, 16160, 16192, 16224, 16256, 16288, 16320, 16352,  /* 480 - 511*/
                16384, 16416, 16448, 16480, 16512, 16544, 16576, 16608, 16640, 16672, 16704, 16736, 16768, 16800, 16832, 16864, 16896, 16928, 16960, 16992, 17024, 17056, 17088, 17120, 17152, 17184, 17216, 17248, 17280, 17312, 17344, 17376,  /* 512 - 543*/
                17408, 17440, 17472, 17504, 17536, 17568, 17600, 17632, 17664, 17696, 17728, 17760, 17792, 17824, 17856, 17888, 17920, 17952, 17984, 18016, 18048, 18080, 18112, 18144, 18176, 18208, 18240, 18272, 18304, 18336, 18368, 18400,  /* 544 - 575*/
                18432, 18464, 18496, 18528, 18560, 18592, 18624, 18656, 18688, 18720, 18752, 18784, 18816, 18848, 18880, 18912, 18944, 18976, 19008, 19040, 19072, 19104, 19136, 19168, 19200, 19232, 19264, 19296, 19328, 19360, 19392, 19424,  /* 576 - 607*/
                19456, 19488, 19520, 19552, 19584, 19616, 19648, 19680, 19712, 19744, 19776, 19808, 19840, 19872, 19904, 19936, 19968, 20000, 20032, 20064, 20096, 20128, 20160, 20192, 20224, 20256, 20288, 20320, 20352, 20384, 20416, 20448,  /* 608 - 639*/
                20480, 20512, 20544, 20576, 20608, 20640, 20672, 20704, 20736, 20768, 20800, 20832, 20864, 20896, 20928, 20960, 20992, 21024, 21056, 21088, 21120, 21152, 21184, 21216, 21248, 21280, 21312, 21344, 21376, 21408, 21440, 21472,  /* 640 - 671*/
                21504, 21536, 21568, 21600, 21632, 21664, 21696, 21728, 21760, 21792, 21824, 21856, 21888, 21920, 21952, 21984, 22016, 22048, 22080, 22112, 22144, 22176, 22208, 22240, 22272, 22304, 22336, 22368, 22400, 22432, 22464, 22496,  /* 672 - 703*/
                22528, 22560, 22592, 22624, 22656, 22688, 22720, 22752, 22784, 22816, 22848, 22880, 22912, 22944, 22976, 23008, 23040, 23072, 23104, 23136, 23168, 23200, 23232, 23264, 23296, 23328, 23360, 23392, 23424, 23456, 23488, 23520,  /* 704 - 735*/
                23552, 23584, 23616, 23648, 23680, 23712, 23744, 23776, 23808, 23840, 23872, 23904, 23936, 23968, 24000, 24032, 24064, 24096, 24128, 24160, 24192, 24224, 24256, 24288, 24320, 24352, 24384, 24416, 24448, 24480, 24512, 24544,  /* 736 - 767*/
                24576, 24608, 24640, 24672, 24704, 24736, 24768, 24800, 24832, 24864, 24896, 24928, 24960, 24992, 25024, 25056, 25088, 25120, 25152, 25184, 25216, 25248, 25280, 25312, 25344, 25376, 25408, 25440, 25472, 25504, 25536, 25568,  /* 768 - 799*/
                25600, 25632, 25664, 25696, 25728, 25760, 25792, 25824, 25856, 25888, 25920, 25952, 25984, 26016, 26048, 26080, 26112, 26144, 26176, 26208, 26240, 26272, 26304, 26336, 26368, 26400, 26432, 26464, 26496, 26528, 26560, 26592,  /* 800 - 831*/
                26624, 26656, 26688, 26720, 26752, 26784, 26816, 26848, 26880, 26912, 26944, 26976, 27008, 27040, 27072, 27104, 27136, 27168, 27200, 27232, 27264, 27296, 27328, 27360, 27392, 27424, 27456, 27488, 27520, 27552, 27584, 27616,  /* 832 - 863*/
                27648, 27680, 27712, 27744, 27776, 27808, 27840, 27872, 27904, 27936, 27968, 28000, 28032, 28064, 28096, 28128, 28160, 28192, 28224, 28256, 28288, 28320, 28352, 28384, 28416, 28448, 28480, 28512, 28544, 28576, 28608, 28640,  /* 864 - 895*/
                28672, 28704, 28736, 28768, 28800, 28832, 28864, 28896, 28928, 28960, 28992, 29024, 29056, 29088, 29120, 29152, 29184, 29216, 29248, 29280, 29312, 29344, 29376, 29408, 29440, 29472, 29504, 29536, 29568, 29600, 29632, 29664,  /* 896 - 927*/
                29696, 29728, 29760, 29792, 29824, 29856, 29888, 29920, 29952, 29984, 30016, 30048, 30080, 30112, 30144, 30176, 30208, 30240, 30272, 30304, 30336, 30368, 30400, 30432, 30464, 30496, 30528, 30560, 30592, 30624, 30656, 30688,  /* 928 - 959*/
                30720, 30752, 30784, 30816, 30848, 30880, 30912, 30944, 30976, 31008, 31040, 31072, 31104, 31136, 31168, 31200, 31232, 31264, 31296, 31328, 31360, 31392, 31424, 31456, 31488, 31520, 31552, 31584, 31616, 31648, 31680, 31712,  /* 960 - 991*/
                31744, 31776, 31808, 31840, 31872, 31904, 31936, 31968, 32000, 32032, 32064, 32096, 32128, 32160, 32192, 32224, 32256, 32288, 32320, 32352, 32384, 32416, 32448, 32480, 32512, 32544, 32576, 32608, 32640, 32672, 32704, 32736,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
        },
        /* tHistWt */
        {
            /* 0 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 1 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 2 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 3 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 4 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 5 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 6 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 7 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 8 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 9 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 10 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 11 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
        },
        /* tHighFreqEnh[12] */
        {
            /* 0 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailCoringPos */
                1,
                /* nDetailCoringNeg */
                1,
                /* nDetailGainPos */
                40,
                /* nDetailGainNeg */
                20,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 1 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailCoringPos */
                1,
                /* nDetailCoringNeg */
                1,
                /* nDetailGainPos */
                40,
                /* nDetailGainNeg */
                20,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 2 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailCoringPos */
                1,
                /* nDetailCoringNeg */
                1,
                /* nDetailGainPos */
                40,
                /* nDetailGainNeg */
                20,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 3 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailCoringPos */
                1,
                /* nDetailCoringNeg */
                1,
                /* nDetailGainPos */
                40,
                /* nDetailGainNeg */
                20,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 4 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailCoringPos */
                1,
                /* nDetailCoringNeg */
                1,
                /* nDetailGainPos */
                40,
                /* nDetailGainNeg */
                20,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 5 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailCoringPos */
                1,
                /* nDetailCoringNeg */
                1,
                /* nDetailGainPos */
                40,
                /* nDetailGainNeg */
                20,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 6 */
            {
                /* nDetailSigmaDis */
                8000,
                /* nDetailSigmaVal */
                800,
                /* nDetailCoringPos */
                80,
                /* nDetailCoringNeg */
                100,
                /* nDetailGainPos */
                36,
                /* nDetailGainNeg */
                24,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 7 */
            {
                /* nDetailSigmaDis */
                8000,
                /* nDetailSigmaVal */
                800,
                /* nDetailCoringPos */
                100,
                /* nDetailCoringNeg */
                150,
                /* nDetailGainPos */
                36,
                /* nDetailGainNeg */
                24,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 8 */
            {
                /* nDetailSigmaDis */
                8000,
                /* nDetailSigmaVal */
                800,
                /* nDetailCoringPos */
                200,
                /* nDetailCoringNeg */
                200,
                /* nDetailGainPos */
                36,
                /* nDetailGainNeg */
                24,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 9 */
            {
                /* nDetailSigmaDis */
                10000,
                /* nDetailSigmaVal */
                1500,
                /* nDetailCoringPos */
                200,
                /* nDetailCoringNeg */
                200,
                /* nDetailGainPos */
                36,
                /* nDetailGainNeg */
                24,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 10 */
            {
                /* nDetailSigmaDis */
                10000,
                /* nDetailSigmaVal */
                1500,
                /* nDetailCoringPos */
                200,
                /* nDetailCoringNeg */
                200,
                /* nDetailGainPos */
                36,
                /* nDetailGainNeg */
                24,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 11 */
            {
                /* nDetailSigmaDis */
                10000,
                /* nDetailSigmaVal */
                1500,
                /* nDetailCoringPos */
                200,
                /* nDetailCoringNeg */
                200,
                /* nDetailGainPos */
                36,
                /* nDetailGainNeg */
                24,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
        },
        /* tLowFreqEnh[12] */
        {
            /* 0 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 1 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 2 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 3 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 4 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 5 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 6 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 7 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 8 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 9 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 10 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 11 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
        },
    },
};

const static AX_ISP_IQ_DEMOSAIC_PARAM_T demosaic_param_sdr = {
    /* nDemosaicEn */
    1,
    /* nMode */
    0,
    /* nFreqSensitivity */
    16,
    /* nEdgeDirectEstStrengthLut[9] */
    {128, 256, 384, 448, 512, 576, 640, 704, 768, /*0 - 8*/},
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nEdgeDirectEstStrength */
        255,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nEdgeDirectEstStrength[16] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_GIC_PARAM_T gic_param_sdr = {
    /* nGicEnable */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nGicStrengthLut[9] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nGicStrengthLut[16][9] */
        {
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        },
    },
};

const static AX_ISP_IQ_FCC_PARAM_T fcc_param_sdr = {
    /* nFcCorEnable */
    0,
    /* nFcCorLimit */
    512,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nFcCorStrength */
        16,
        /* nFcCorSatLut[9] */
        {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
        /* nFcCorSatLevel0 */
        11,
        /* nFcCorSatLevel1 */
        16,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nFcCorStrength[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 15*/},
        /* nFcCorSatLut[16][9] */
        {
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
        },
        /* nFcCorSatLevel0[16] */
        {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,  /*0 - 15*/},
        /* nFcCorSatLevel1[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,  /*0 - 15*/},
    },
};

const static AX_ISP_IQ_DEPURPLE_PARAM_T depurple_param_sdr = {
    /* nEnable */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    1,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        0,
        /* nDetEdgeSlopeY */
        4,
        /* nDetEdgeOffsetY */
        0,
        /* nDetEdgeEnableC */
        1,
        /* nDetEdgeSlopeC */
        2,
        /* nDetEdgeOffsetC */
        0,
        /* nDetSeledgeThrY */
        14080,
        /* nDetSeledgeSlopeY */
        1,
        /* nDetSeledgeWeight[7] */
        {64, 64, 48, 40, 32, 24, 16, /*0 - 6*/},
        /* nDetMaskStrength */
        64,
        /* nDetMaskStrengthPre */
        64,
        /* nDetMaskWeightPre[11] */
        {64, 64, 64, 48, 48, 48, 32, 32, 32, 32, 16, /*0 - 10*/},
    },
    /* tCmpParam */
    {
        /* nDebugMaskHighlightEnable */
        0,
        /* nDebugMaskHighlightThr */
        0,
    },
    /* tManualParam */
    {
        /* nCompStrength */
        128,
        /* nCompTargetLuma[8] */
        {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {128, 128, 128, 128, 128, 128, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        6,
        /* nRefVal[16] */
        {1024, 4096, 8192, 16384, 32768, 65536, /*0 - 5*/},
        /* nCompStrength[16] */
        {128, 128, 128, 128, 128, 128, /*0 - 5*/},
        /* nCompTargetLuma[16][8] */
        {
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
        },
    },
};

const static AX_ISP_IQ_CC_PARAM_T cc_param_sdr = {
    /* nCcEn */
    1,
    /* nCcMode */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nLumaRatio[2] */
    {32, 32, /*0 - 1*/},
    /* tManualParam */
    {
        /* nCcmCtrlLevel */
        256,
        /* nCcmSat */
        15,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-199, 42, -55, -53, 13, -99, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, /*0 - 15*/},
        /* nXcmSat[16] */
        {-10, -10, 0, 0, -10, -10, -5, -6, 10, 15, 15, 15, 0, 0, -4, -10, /*0 - 15*/},
        /* nXcmHue[16] */
        {0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
    },
    /* tAutoParam */
    {
        /* nLightSourceRatio */
        0,
        /* tColorTempAuto */
        {
            /* nCtNum */
            7,
            /* nRefValCt[12] */
            {2300, 2854, 3800, 4150, 5000, 6500, 7500, /*0 - 6*/},
            /* nLuxGainNum */
            5,
            /* nRefValLuxGain[12][5] */
            {
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 102400, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
            },
            /* nCcmCtrlLevel[12][5] */
            {
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
            },
            /* nCcmSat[12][5] */
            {
                {20, 0, 0, 0, 0, /*0 - 4*/},
                {20, 0, 0, 0, 0, /*0 - 4*/},
                {20, 15, 5, 0, 0, /*0 - 4*/},
                {20, 20, 5, 0, 0, /*0 - 4*/},
                {20, 20, 20, 10, 20, /*0 - 4*/},
                {20, 20, 25, 10, 27, /*0 - 4*/},
                {20, 0, 0, 0, 0, /*0 - 4*/},
            },
            /* nCcmHue[12][5] */
            {
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
            },
            /* nCcmMatrix[12][5][6] */
            {
                /* nCcmMatrix 0 */
                {
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -4, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-187, -40, -85, -50, 20, -200, /*0 - 5*/},
                    {-187, -40, -85, -50, 20, -200, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-210, -50, -70, -58, 15, -110, /*0 - 5*/},
                    {-210, -50, -70, -58, 15, -110, /*0 - 5*/},
                },
                /* nCcmMatrix 5 */
                {
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-180, -50, -85, -47, 15, -100, /*0 - 5*/},
                    {-180, -50, -85, -47, 15, -100, /*0 - 5*/},
                },
                /* nCcmMatrix 6 */
                {
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                },
            },
            /* nXcmCtrlLevel[12][5][16] */
            {
                /* nXcmCtrlLevel 0 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 1 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 2 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 3 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 4 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
            },
            /* nXcmSat[12][5][16] */
            {
                /* nXcmSat 0 */
                {
                    {-15, -15, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {-15, -15, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {-15, -15, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, 0, 0, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {-15, -15, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, 0, -5, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, 0, -5, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {-15, -15, -15, 0, -10, -10, -5, -10, 10, 15, 15, 15, 0, 0, 0, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {-10, -10, 0, 0, -10, -5, -5, -5, 5, 10, 10, 10, 0, 0, 0, -10, /*0 - 15*/},
                    {0, 0, 0, 0, -10, -5, -5, -5, 10, 15, 15, 15, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {-15, -15, -15, 0, -10, -10, -5, -10, 10, 15, 15, 15, 0, 0, -10, -15, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 10, 15, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {-10, -10, 0, 0, -10, -5, -5, -5, 5, 10, 10, 10, 0, 0, 0, -10, /*0 - 15*/},
                    {0, 0, 0, 0, -10, -5, -5, -5, 10, 15, 15, 15, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {-15, -15, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, -20, -31, /*0 - 15*/},
                    {-15, -10, 0, 0, -10, -10, -5, 0, 10, 15, 15, 15, 0, 0, 0, -15, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 320, 320, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 320, 320, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 640, 320, 310, 310, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 640, 320, 310, 310, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
            },
        },
        /* tLightSourceAuto */
        {
            /* nLightSource */
            0,
            /* nLightSourceNum */
            0,
            /* nCcmCtrlLevel[12] */
            {0, /*0 - 0*/},
            /* nCcmSat[12] */
            {0, /*0 - 0*/},
            /* nCcmHue[12] */
            {0, /*0 - 0*/},
            /* nCcmMatrix[12][6] */
            {
                {0, 0, 0, 0, 0, 0, /*0 - 5*/},
            },
            /* nXcmCtrlLevel[12][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            },
            /* nXcmSat[12][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            },
            /* nXcmHue[12][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            },
        },
    },
};

const static AX_ISP_IQ_HS2DLUT_PARAM_T hs2dlut_param_sdr = {
    /* nHs2dLutEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* tHs2dLut */
        {
            /* nHueLut[25][17] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
            },
            /* nSatLut[25][17] */
            {
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
            },
        },
    },
    /* tAutoParam */
    {
        /* nRefListNum */
        1,
        /* tRefTbl[12] */
        {
            /* 0 */
            {
                /* nRefStartVal */
                1024,
                /* nRefEndVal */
                2048,
                /* nCctListNum */
                1,
                /* tCctTbl[16] */
                {
                    /* 0 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 16*/},
                            },
                        },
                    },
                    /* 1 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 2 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 3 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 4 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 5 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 6 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 7 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 8 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 9 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 10 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 11 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 12 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 13 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 14 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                    /* 15 */
                    {
                        /* nCctStart */
                        0,
                        /* nCctEnd */
                        0,
                        /* tHs2dLut */
                        {
                            /* nHueLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                            /* nSatLut[25][17] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                            },
                        },
                    },
                },
            },
        },
        /* tConvergeParam */
        {
            /* nConvergeSpeed */
            5,
            /* nGainTrigger */
            10240,
            /* nLuxTrigger */
            10240,
            /* nCctTrigger */
            50,
        },
    },
};

const static AX_ISP_IQ_GAMMA_PARAM_T gamma_param_sdr = {
    /* nGammaEn */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* eGammaMode */
    /* 0:AX_ISP_GAM_USER_GAMMA, 1:AX_ISP_GAM_PRESET_GAMMA */
    AX_ISP_GAM_PRESET_GAMMA,
    /* ePresetGammaType */
    /* 0:AX_ISP_GAM_LINEAR, 1:AX_ISP_GAM_BT709, 2:AX_ISP_GAM_SRGB, 10:AX_ISP_GAM_AX_GAM0, 11:AX_ISP_GAM_AX_GAM1, 12:AX_ISP_GAM_AX_GAM2, 255:AX_ISP_GAM_MODE_CUSTOMER */
    AX_ISP_GAM_AX_GAM2,
    /* eLutMode */
    /* 0:AX_ISP_GAM_LUT_LINEAR, 1:AX_ISP_GAM_EXPONENTIAL */
    AX_ISP_GAM_EXPONENTIAL,
    /* tManualParam */
    {
        /* tGammaLut */
        {
            /* nLut[129] */
            {
                0, 56, 119, 189, 265, 348, 437, 531, 632, 733, 830, 922, 1011, 1097, 1179, 1258, 1335, 1408, 1479, 1548, 1614, 1679, 1741, 1802, 1860, 1917, 1972, 2026, 2078, 2129, 2178, 2226,  /* 0 - 31*/
                2273, 2318, 2362, 2405, 2448, 2489, 2529, 2568, 2606, 2643, 2679, 2714, 2749, 2783, 2816, 2848, 2880, 2910, 2941, 2970, 2999, 3027, 3055, 3082, 3108, 3134, 3159, 3184, 3208, 3232, 3255, 3278,  /* 32 - 63*/
                3300, 3322, 3343, 3364, 3385, 3405, 3424, 3444, 3463, 3481, 3499, 3517, 3534, 3552, 3568, 3585, 3601, 3617, 3632, 3647, 3662, 3677, 3691, 3705, 3719, 3732, 3745, 3758, 3771, 3784, 3796, 3808,  /* 64 - 95*/
                3820, 3831, 3842, 3853, 3864, 3875, 3885, 3896, 3906, 3915, 3925, 3935, 3944, 3953, 3962, 3971, 3979, 3988, 3996, 4004, 4012, 4020, 4027, 4035, 4042, 4049, 4056, 4063, 4070, 4076, 4083, 4089,  /* 96 - 127*/
                4095, /*128 - 128*/
            },
        },
    },
    /* tAutoParam */
    {
        /* nRefValStart[3] */
        {0, 100, 500, /*0 - 2*/},
        /* nRefValEnd[3] */
        {50, 200, 1000, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61,  /* 0 - 31*/
                    63, 67, 71, 75, 79, 83, 87, 91, 95, 99, 103, 107, 111, 115, 119, 123, 127, 135, 143, 151, 159, 167, 175, 183, 191, 199, 207, 215, 223, 231, 239, 247,  /* 32 - 63*/
                    255, 271, 287, 303, 319, 335, 351, 367, 383, 399, 415, 431, 447, 463, 479, 495, 511, 543, 575, 607, 639, 671, 703, 735, 767, 799, 831, 863, 895, 927, 959, 991,  /* 64 - 95*/
                    1023, 1087, 1151, 1215, 1279, 1343, 1407, 1471, 1535, 1599, 1663, 1727, 1791, 1855, 1919, 1983, 2047, 2175, 2303, 2431, 2559, 2687, 2815, 2943, 3071, 3199, 3327, 3455, 3583, 3711, 3839, 3967,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 8, 17, 26, 35, 44, 53, 62, 71, 80, 89, 98, 107, 116, 125, 134, 143, 152, 161, 170, 179, 188, 197, 206, 215, 224, 233, 242, 251, 260, 269, 278,  /* 0 - 31*/
                    287, 305, 323, 342, 360, 377, 393, 410, 425, 441, 456, 471, 485, 499, 513, 527, 540, 566, 592, 616, 640, 663, 686, 708, 730, 751, 771, 792, 811, 831, 850, 868,  /* 32 - 63*/
                    887, 922, 957, 991, 1023, 1055, 1086, 1116, 1145, 1174, 1202, 1230, 1257, 1283, 1309, 1335, 1360, 1409, 1456, 1502, 1546, 1590, 1632, 1673, 1713, 1753, 1791, 1829, 1865, 1902, 1937, 1972,  /* 64 - 95*/
                    2006, 2073, 2137, 2200, 2261, 2320, 2378, 2434, 2489, 2543, 2595, 2647, 2697, 2746, 2795, 2842, 2889, 2980, 3068, 3154, 3237, 3318, 3397, 3474, 3549, 3622, 3694, 3764, 3833, 3900, 3966, 4031,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 25, 51, 77, 103, 129, 155, 180, 203, 224, 245, 264, 282, 299, 316, 331, 346, 361, 375, 389, 402, 415, 428, 440, 452, 463, 475, 486, 497, 507, 518, 528,  /* 0 - 31*/
                    538, 558, 577, 595, 613, 630, 646, 663, 679, 694, 709, 724, 739, 753, 767, 780, 794, 820, 845, 870, 893, 916, 939, 960, 982, 1002, 1022, 1042, 1062, 1081, 1099, 1117,  /* 32 - 63*/
                    1135, 1170, 1204, 1236, 1268, 1299, 1328, 1357, 1386, 1413, 1440, 1467, 1493, 1518, 1543, 1567, 1591, 1637, 1682, 1726, 1768, 1809, 1849, 1888, 1925, 1962, 1998, 2034, 2068, 2102, 2135, 2167,  /* 64 - 95*/
                    2199, 2261, 2321, 2379, 2436, 2490, 2543, 2595, 2646, 2695, 2743, 2790, 2836, 2881, 2925, 2969, 3011, 3094, 3174, 3252, 3327, 3400, 3471, 3540, 3607, 3673, 3737, 3800, 3861, 3922, 3981, 4038,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEHAZE_PARAM_T dehaze_param_sdr = {
    /* nDehazeEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tGlbParam */
    {
        /* nCalcMode */
        1,
        /* nAirReflect */
        65280,
        /* nSpatialSmoothness */
        2,
        /* nStrengthLimit */
        230,
        /* nMeshSize */
        32,
        /* nEps */
        8192,
        /* nBlurEnable */
        1,
        /* nSigmaBlur */
        4096,
    },
    /* tManualParam */
    {
        /* nEffectStrength */
        64,
        /* nGrayDcRatio */
        128,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[12] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nEffectStrength[12] */
        {48, 48, 48, 48, 28, 28, 28, 28, 28, /*0 - 8*/},
        /* nGrayDcRatio[12] */
        {64, 64, 64, 64, 128, 128, 128, 128, 128, /*0 - 8*/},
    },
};

const static AX_ISP_IQ_CSC_PARAM_T csc_param_sdr = {
    /* nMatrix[3][3] */
    {
        {77, 150, 29, /*0 - 2*/},
        {-43, -85, 128, /*0 - 2*/},
        {128, -107, -21, /*0 - 2*/},
    },
    /* eColorSpaceMode */
    /* 0:AX_ISP_CSC_USER, 1:AX_ISP_CSC_BT601, 2:AX_ISP_CSC_BT709, 3:AX_ISP_CSC_BT2020, 4:AX_ISP_CSC_BUTT */
    AX_ISP_CSC_BT601,
    /* eUvSeqSel */
    /* 0:AX_ISP_NV12_SEL, 1:AX_ISP_NV21_SEL */
    AX_ISP_NV12_SEL,
};

const static AX_ISP_IQ_CA_PARAM_T ca_param_sdr = {
    /* nCppEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nCtrlLevel */
        0,
        /* nSat */
        0,
        /* nHue */
        0,
        /* nCmtx[2][2] */
        {
            {256, 0, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNumCt */
        12,
        /* nParamGrpNumLG */
        1,
        /* nRefValCt[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nRefValLG[12][5] */
        {
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
        },
        /* nCmtx[12][5][4] */
        {
            /* nCmtx 0 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 1 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 2 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 3 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 4 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 5 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 6 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 7 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 8 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 9 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 10 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 11 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
        },
    },
};

const static AX_ISP_IQ_YNR_PARAM_T ynr_param_sdr = {
    /* nYnrEn */
    1,
    /* nColorTargetEn */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nIoFlag */
    0,
    /* tManualParam */
    {
        /* nYnrCenter[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nYnrRadius[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nYnrSmooth[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nYnrLevel[2] */
        {255, 0, /*0 - 1*/},
        /* nYnrInvNrLut[4] */
        {128, 128, 128, 128, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nYnrCenter[12][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nYnrRadius[12][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nYnrSmooth[12][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nYnrLevel[12][2] */
        {
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nYnrInvNrLut[12][4] */
        {
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
            {102, 309, 619, 619, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_CNR_PARAM_T cnr_param_sdr = {
    /* nCnrEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nCnrLevel */
        16,
        /* nCnrInvNrLut[4] */
        {128, 128, 128, 128, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nCnrLevel[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
        /* nCnrInvNrLut[12][4] */
        {
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_YUV3DNR_PARAM_T yuv3dnr_param_sdr = {
    /* nYuv3dnrEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nConvergeSpeed */
    128,
    /* tExtMaskParam */
    {
        /* nExtMaskEnable */
        1,
        /* nExtMaskMode */
        0,
    },
    /* tSubModuleEnParam */
    {
        /* nMotionDetEnable */
        1,
        /* nTfEnable */
        1,
        /* nSf0YnrEnable */
        1,
        /* nSf1YnrEnable */
        1,
        /* nSf2YnrEnable */
        1,
        /* nSf0CnrEnable */
        1,
        /* nSf1CnrEnable */
        1,
    },
    /* tManualParam */
    {
        /* nMotDetNoiseLut[2][17] */
        {
            {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
            {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {255, 0, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {0, 0, /*0 - 1*/},
        /* nMotDetSmoothLuma[2] */
        {2, 2, /*0 - 1*/},
        /* nMotDetSmoothChroma[2] */
        {2, 2, /*0 - 1*/},
        /* nMotDetLimitLuma[2] */
        {0, 256, /*0 - 1*/},
        /* nMotDetLimitChrom[2] */
        {0, 256, /*0 - 1*/},
        /* nMotDetBlendRatio[2] */
        {256, 0, /*0 - 1*/},
        /* nStasUpdateLut[2][16] */
        {
            {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
            {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
        },
        /* nTfRatioLut[16] */
        {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
        /* nTfRatLimitLuma[2][2] */
        {
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nSf0EdgeStre */
        128,
        /* nSf0DirStre */
        128,
        /* nSf0DetailStre */
        128,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {669, 574, 538, 514, 497, 485, 461, 431, 318, /*0 - 8*/},
            {1023, 1023, 689, 548, 395, 256, 256, 256, 256, /*0 - 8*/},
            {176, 128, 105, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            {1023, 1023, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {3, 3, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {32, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {128, 96, 32, /*0 - 2*/},
            {64, 64, 128, /*0 - 2*/},
        },
        /* nSf0ChromaAttenStre[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {160, 175, /*0 - 1*/},
        /* nSf0ChromaProtLut[2][9] */
        {
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
        },
        /* nSf1LumaMedEn */
        0,
        /* nSf1LumaGauStre[2] */
        {128, 128, /*0 - 1*/},
        /* nSf1LumaGauRatio[2] */
        {256, 256, /*0 - 1*/},
        /* nSf1LumaKernelSize */
        2,
        /* nSf1LumaNoiseLut[2][9] */
        {
            {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
            {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {0, 1023, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {0, 128, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {731, 415, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {32, 215, /*0 - 1*/},
        /* nSf1ChromaCoring */
        1023,
        /* nSf1ChromaBlendRatio */
        23,
        /* nSf2LumaGauStre[2] */
        {256, 128, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        1,
        /* nSf2NoiseLut[2][9] */
        {
            {491, 431, 402, 372, 342, 295, 253, 200, 128, /*0 - 8*/},
            {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {192, 0, 64, /*0 - 2*/},
            {128, 0, 128, /*0 - 2*/},
        },
        /* nExtMaskStrenLuma */
        128,
        /* nExtMaskStrenChrom */
        128,
        /* nExtMaskStrenStatus */
        128,
        /* nExtMaskRatioLuma[2] */
        {256, 256, /*0 - 1*/},
        /* nExtMaskRatioChrom[2] */
        {256, 256, /*0 - 1*/},
        /* nExtMaskRatioStatus[2] */
        {256, 256, /*0 - 1*/},
        /* nY3dnrPos */
        0,
        /* nStaRefineErode */
        0,
        /* nSfGuideMapLuma[2] */
        {128, 256, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {256, 0, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[12] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {30, 30, 32, 34, 47, 54, 48, 38, 28, 18, 12, 10, 7, 7, 7, 7, 7, /*0 - 16*/},
                {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {69, 68, 62, 64, 77, 84, 78, 68, 58, 48, 38, 22, 22, 12, 10, 10, 10, /*0 - 16*/},
                {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {79, 78, 72, 74, 87, 94, 88, 78, 68, 58, 58, 52, 52, 52, 40, 40, 30, /*0 - 16*/},
                {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {89, 88, 82, 84, 97, 104, 98, 88, 78, 68, 68, 62, 62, 62, 50, 50, 40, /*0 - 16*/},
                {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {32, 32, 32, 32, 30, 30, 30, 30, 24, 24, 24, 24, 20, 20, 20, 20, 16, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {42, 42, 42, 42, 42, 42, 36, 36, 36, 36, 30, 30, 30, 30, 30, 30, 24, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {42, 42, 42, 42, 42, 42, 36, 36, 36, 36, 30, 30, 30, 30, 30, 30, 24, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 7 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 8 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
        },
        /* nMotDetStrenLuma[12][2] */
        {
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {100, 10, /*0 - 1*/},
            {80, 10, /*0 - 1*/},
            {64, 10, /*0 - 1*/},
            {64, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nMotDetSmoothLuma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
        },
        /* nMotDetSmoothChroma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
        },
        /* nMotDetLimitLuma[12][2] */
        {
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
        /* nMotDetLimitChrom[12][2] */
        {
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
        /* nMotDetBlendRatio[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nStasUpdateLut[12][2][16] */
        {
            /* nStasUpdateLut 0 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 1 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 2 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 3 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 4 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 5 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 6 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 7 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 8 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
        },
        /* nTfRatioLut[12][16] */
        {
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
        },
        /* nTfRatLimitLuma[12][2][2] */
        {
            /* nTfRatLimitLuma 0 */
            {
                {24, 255, /*0 - 1*/},
                {24, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 1 */
            {
                {60, 255, /*0 - 1*/},
                {10, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 2 */
            {
                {60, 255, /*0 - 1*/},
                {10, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 3 */
            {
                {60, 255, /*0 - 1*/},
                {10, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 4 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 5 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 6 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 7 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 8 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
        },
        /* nTfRatLimitChroma[12][2][2] */
        {
            /* nTfRatLimitChroma 0 */
            {
                {128, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 1 */
            {
                {128, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 2 */
            {
                {128, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 3 */
            {
                {128, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 4 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 5 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 6 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 7 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 8 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
        },
        /* nSf0EdgeStre[12] */
        {64, 64, 64, 64, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nSf0DirStre[12] */
        {64, 64, 64, 64, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nSf0DetailStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nSf0LumaNoiseLut[12][4][9] */
        {
            /* nSf0LumaNoiseLut 0 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {24, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 8*/},
                {32, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {32, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {24, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 8*/},
                {32, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {108, 65, 46, 28, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {295, 253, 212, 200, 176, 146, 134, 117, 93, /*0 - 8*/},
                {1023, 1023, 689, 548, 395, 256, 256, 256, 256, /*0 - 8*/},
                {176, 128, 105, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {1023, 1023, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {295, 253, 212, 200, 176, 146, 134, 117, 93, /*0 - 8*/},
                {1023, 1023, 689, 548, 395, 256, 256, 256, 256, /*0 - 8*/},
                {176, 128, 105, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {1023, 1023, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {295, 253, 212, 200, 176, 146, 134, 117, 93, /*0 - 8*/},
                {1023, 1023, 689, 548, 395, 256, 256, 256, 256, /*0 - 8*/},
                {176, 128, 105, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {1023, 1023, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {669, 574, 538, 514, 497, 485, 461, 431, 318, /*0 - 8*/},
                {1023, 1023, 689, 548, 395, 256, 256, 256, 256, /*0 - 8*/},
                {176, 128, 105, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {1023, 1023, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {669, 574, 538, 514, 497, 485, 461, 431, 318, /*0 - 8*/},
                {1023, 1023, 689, 548, 395, 256, 256, 256, 256, /*0 - 8*/},
                {176, 128, 105, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {1023, 1023, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
        },
        /* nSf0LumaKernelSize[12][2] */
        {
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nSf0LumaGauStre[12][2] */
        {
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
        },
        /* nSf0lumaBlendRatio[12][2][3] */
        {
            /* nSf0lumaBlendRatio 0 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 1 */
            {
                {128, 0, 128, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 2 */
            {
                {192, 0, 64, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 3 */
            {
                {256, 0, 0, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 4 */
            {
                {128, 32, 96, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {128, 32, 96, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {128, 96, 32, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {128, 96, 32, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {128, 96, 32, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
        },
        /* nSf0ChromaAttenStre[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {220, 240, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
        },
        /* nSf0ChromaProtLut[12][2][9] */
        {
            /* nSf0ChromaProtLut 0 */
            {
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
                {10, 10, 10, 10, 10, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 1 */
            {
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
                {10, 10, 10, 10, 10, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 2 */
            {
                {30, 30, 30, 30, 30, 30, 30, 30, 30, /*0 - 8*/},
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {80, 80, 80, 80, 80, 80, 80, 80, 80, /*0 - 8*/},
                {30, 30, 30, 30, 30, 30, 30, 30, 30, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nSf1LumaGauStre[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
        },
        /* nSf1LumaGauRatio[12][2] */
        {
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nSf1LumaKernelSize[12] */
        {1, 1, 1, 1, 2, 2, 2, 2, 2, /*0 - 8*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {48, 40, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 28, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {48, 40, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 28, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 3 */
            {
                {128, 86, 86, 86, 86, 86, 86, 86, 86, /*0 - 8*/},
                {32, 28, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 4 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 5 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 6 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
        },
        /* nSf1LumaIdrThre[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 1023, /*0 - 1*/},
            {0, 1023, /*0 - 1*/},
            {0, 1023, /*0 - 1*/},
            {0, 1023, /*0 - 1*/},
            {0, 1023, /*0 - 1*/},
        },
        /* nSf1LumaIdrGain[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
        },
        /* nSf1LumaClipLevel[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nSf1LumaCoring[12][2] */
        {
            {10, 0, /*0 - 1*/},
            {20, 0, /*0 - 1*/},
            {30, 35, /*0 - 1*/},
            {100, 40, /*0 - 1*/},
            {512, 415, /*0 - 1*/},
            {512, 415, /*0 - 1*/},
            {731, 415, /*0 - 1*/},
            {731, 415, /*0 - 1*/},
            {731, 415, /*0 - 1*/},
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {96, 240, /*0 - 1*/},
            {24, 200, /*0 - 1*/},
            {6, 100, /*0 - 1*/},
            {0, 40, /*0 - 1*/},
            {128, 215, /*0 - 1*/},
            {128, 215, /*0 - 1*/},
            {32, 215, /*0 - 1*/},
            {32, 215, /*0 - 1*/},
            {32, 215, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {128, 128, 128, 256, 1023, 1023, 1023, 1023, 1023, /*0 - 8*/},
        /* nSf1ChromaBlendRatio[12] */
        {200, 200, 128, 64, 23, 23, 23, 23, 23, /*0 - 8*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {32, 64, /*0 - 1*/},
            {32, 64, /*0 - 1*/},
            {32, 64, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
        },
        /* nSf2LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nSf2KernelSize[12] */
        {0, 0, 0, 0, 1, 1, 1, 1, 1, /*0 - 8*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {48, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {24, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {48, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {24, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {64, 48, 36, 36, 36, 36, 36, 36, 36, /*0 - 8*/},
                {71, 46, 40, 34, 22, 16, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {491, 431, 402, 372, 342, 295, 253, 200, 128, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {491, 431, 402, 372, 342, 295, 253, 200, 128, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {491, 431, 402, 372, 342, 295, 253, 200, 128, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {128, 64, 64, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 2 */
            {
                {128, 64, 64, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 3 */
            {
                {128, 64, 64, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 4 */
            {
                {192, 0, 64, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 5 */
            {
                {192, 0, 64, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {192, 0, 64, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {192, 0, 64, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {192, 0, 64, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
        },
        /* nExtMaskStrenLuma[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nExtMaskStrenChrom[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nExtMaskStrenStatus[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nExtMaskRatioLuma[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nExtMaskRatioChrom[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nExtMaskRatioStatus[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nY3dnrPos[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nStaRefineErode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nSfGuideMapLuma[12][2] */
        {
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
        },
        /* nSfGuideMapChroma[12][2] */
        {
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
        },
    },
};

const static AX_ISP_IQ_SHARPEN_PARAM_T sharpen_param_sdr = {
    /* nShpEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tMaskControl */
    {
        /* nMotionMaskEn */
        1,
        /* nShpClnpNpuMaskEn */
        0,
        /* nShpLumaMaskLut[17] */
        {0, 0, 0, 0, 0, 0, 0, 76, 162, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 16*/},
    },
    /* tFineGrainNoise */
    {
        /* nGrainNoiseEn */
        0,
        /* nGnMotionMskEn */
        0,
        /* nGnMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nGnLumaMskEn */
        0,
        /* nGnLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nGnTextureMskEn */
        0,
        /* nGnTextureLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nGnClnpMskEn[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nGnClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
    },
    /* tOsStaticMotion */
    {
        /* nOsStaticLimit[2] */
        {127, 127, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {8, 4, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {127, 64, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {8, 6, /*0 - 1*/},
    },
    /* tCommonLutCore */
    {
        /* nCommonLutEnable */
        0,
        /* nCommonMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nCommonLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nCommonTextureStaticLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nCommonTexturemotionLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nCommonClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
    },
    /* tColorTarget */
    {
        /* nColorEnable[8] */
        {0, 1, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {464, -252, -248, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorRange[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {128, 248, 220, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSmooth[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {7, 2, 2, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorIoFlag[8] */
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskIndex[8] */
        {0, 1, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskLimit[8] */
        {0, 128, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
    },
    /* tHighFreqControl */
    {
        /* nHighFreqEnable */
        1,
        /* nHighFreqMotionMskEn */
        0,
        /* nHighFreqMotionLutLevel */
        0,
        /* nHighFreqLumaMskEn */
        0,
        /* nHighFreqLumaLutLevel */
        0,
        /* nHighFreqTextureMskEn */
        1,
        /* nHighFreqTextureLutLevel */
        0,
        /* nHighFreqTextureLutMotionLevel */
        0,
        /* nHighFreqClnpMskEn[4] */
        {0, 1, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, 0, 0, -6, -22, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {-12, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {-32, -8, 19, 51, 78, 95, 106, 110, 114, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-23, -7, 19, 64, 106, 119, 121, 121, 121, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 26, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nHighFreqOsGain[2] */
        {4, 4, /*0 - 1*/},
    },
    /* tMedFreqControl */
    {
        /* nMedFreqEnable */
        1,
        /* nMedFreqMotionMskEn */
        0,
        /* nMedFreqMotionLutLevel */
        0,
        /* nMedFreqLumaMskEn */
        0,
        /* nMedFreqLumaLutLevel */
        0,
        /* nMedFreqTextureMskEn */
        1,
        /* nMedFreqTextureLutLevel */
        0,
        /* nMedFreqTextureLutMotionLevel */
        0,
        /* nMedFreqClnpMskEn[4] */
        {0, 1, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {-12, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {-47, 8, 19, 26, 34, 40, 48, 54, 64, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-10, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 26, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {64, 16, /*0 - 1*/},
        /* nMedFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
    },
    /* tDirFreqControl */
    {
        /* nDirFreqEnable */
        1,
        /* nDirFreqMotionMskEn */
        0,
        /* nDirFreqMotionLutLevel */
        0,
        /* nDirFreqLumaMskEn */
        0,
        /* nDirFreqLumaLutLevel */
        0,
        /* nDirFreqTextureMskEn */
        1,
        /* nDirFreqTextureLutLevel */
        0,
        /* nDirFreqTextureLutMotionLevel */
        0,
        /* nDirFreqClnpMskEn[4] */
        {0, 1, 0, 0, /*0 - 3*/},
        /* nDirFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqMotionLut[5] */
        {0, 0, 0, -13, -31, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {0, 32, 64, 96, 96, 96, 96, 96, 96, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-8, 0, 22, 53, 79, 88, 88, 88, 88, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 26, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {4, 2, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {2, 175, 250, 250, 247, 250, 252, 249, 252, /*0 - 8*/},
    },
    /* tLowFreqControl */
    {
        /* nLowFreqEnable */
        1,
        /* nLowFreqMotionMskEn */
        0,
        /* nLowFreqMotionLutLevel */
        0,
        /* nLowFreqLumaMskEn */
        1,
        /* nLowFreqLumaLutLevel */
        0,
        /* nLowFreqTextureMskEn */
        1,
        /* nLowFreqTextureLutLevel */
        0,
        /* nLowFreqTextureLutMotionLevel */
        0,
        /* nLowFreqClnpMskEn[4] */
        {0, 1, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {-35, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {-50, -14, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqTextureLutMotion[9] */
        {-32, -16, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 26, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {29, 38, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {1, 1, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {64, 32, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        0,
        /* nHighFreqCorSlope */
        0,
        /* nHighFreqCorOffset */
        0,
        /* nHighFreqLimit[2] */
        {1023, 256, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {16, 0, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        0,
        /* nMedFreqCorSlope */
        5,
        /* nMedFreqCorOffset */
        16,
        /* nMedFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {48, 64, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        0,
        /* nDirFreqCorSlope */
        8,
        /* nDirFreqCorOffset */
        16,
        /* nDirFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {0, -16, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        0,
        /* nLowFreqCorSlope */
        8,
        /* nLowFreqCorOffset */
        16,
        /* nLowFreqLimit[2] */
        {1023, 512, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {16, 32, 36, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {32, 54, 74, /*0 - 2*/},
        /* nShpHpfScale[3] */
        {128, 128, 128, /*0 - 2*/},
        /* nShpGain[2] */
        {16, 16, /*0 - 1*/},
        /* nShpLimit[2] */
        {-4096, 4095, /*0 - 1*/},
        /* nGrainLogGain */
        32,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, 1024000, 1024, /*0 - 10*/},
        /* nHighFreqLogGain[12][2] */
        {
            {0, -6, /*0 - 1*/},
            {0, -6, /*0 - 1*/},
            {0, -6, /*0 - 1*/},
            {32, 26, /*0 - 1*/},
            {48, 36, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nHighFreqCorBaseGain[12] */
        {6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nHighFreqCorSlope[12] */
        {7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nHighFreqCorOffset[12] */
        {38, 38, 38, 38, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nHighFreqLimit[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
        },
        /* nMedFreqLogGain[12][2] */
        {
            {-12, -16, /*0 - 1*/},
            {-12, -16, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {10, 5, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nMedFreqCorBaseGain[12] */
        {3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nMedFreqCorSlope[12] */
        {8, 8, 8, 8, 5, 5, 5, 5, 5, 5, 5, /*0 - 10*/},
        /* nMedFreqCorOffset[12] */
        {35, 35, 35, 35, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
        /* nMedFreqLimit[12][2] */
        {
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nDirFreqLogGain[12][2] */
        {
            {12, 8, /*0 - 1*/},
            {12, 8, /*0 - 1*/},
            {12, 8, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nDirFreqCorSlope[12] */
        {6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, /*0 - 10*/},
        /* nDirFreqCorOffset[12] */
        {37, 37, 37, 37, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
        /* nDirFreqLimit[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nLowFreqLogGain[12][2] */
        {
            {-12, -16, /*0 - 1*/},
            {-12, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
        },
        /* nLowFreqGainLimit[12][2] */
        {
            {0, 46, /*0 - 1*/},
            {0, 46, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nLowFreqCorBaseGain[12] */
        {3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nLowFreqCorSlope[12] */
        {7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, /*0 - 10*/},
        /* nLowFreqCorOffset[12] */
        {40, 40, 40, 40, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
        /* nLowFreqLimit[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
        },
        /* nShpHpfBsigma[12][3] */
        {
            {8, 25, 32, /*0 - 2*/},
            {8, 25, 32, /*0 - 2*/},
            {16, 25, 36, /*0 - 2*/},
            {16, 25, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {12, 24, 32, /*0 - 2*/},
            {12, 24, 32, /*0 - 2*/},
            {28, 56, 66, /*0 - 2*/},
            {28, 56, 66, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 50, 50, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
        },
        /* nShpHpfScale[12][3] */
        {
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
        },
        /* nShpGain[12][2] */
        {
            {24, 16, /*0 - 1*/},
            {32, 24, /*0 - 1*/},
            {32, 28, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
        },
        /* nShpLimit[12][2] */
        {
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
        },
        /* nGrainLogGain[12] */
        {0, 0, 0, 0, 32, 32, 32, 32, 32, 32, 32, /*0 - 10*/},
    },
};

const static AX_ISP_IQ_CCMP_PARAM_T ccmp_param_sdr = {
    /* nChromaCompEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nChromaCompY[29] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
        /* nChromaCompSat[23] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nChromaCompY[12][29] */
        {
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
        },
        /* nChromaCompSat[12][23] */
        {
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {261, 316, 370, 411, 461, 493, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {261, 316, 370, 411, 461, 493, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {261, 316, 370, 411, 461, 493, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
        },
    },
};

const static AX_ISP_IQ_SCM_PARAM_T scm_param_sdr = {
    /* nScmEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* nScmIoFlag */
    0,
    /* tManualParam */
    {
        /* nScmColor[2] */
        {0, 0, /*0 - 1*/},
        /* nScmCenterY */
        0,
        /* nScmCenterUv[2] */
        {0, 0, /*0 - 1*/},
        /* nScmRadius[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nScmSmooth[3] */
        {0, 0, 0, /*0 - 2*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        /* nScmColor[16][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nScmCenterY[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        /* nScmCenterUv[16][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nScmRadius[16][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nScmSmooth[16][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
    },
};

const static AX_ISP_IQ_YCPROC_PARAM_T ycproc_param_sdr = {
    /* nYCprocEn */
    0,
    /* nBrightness */
    256,
    /* nContrast */
    256,
    /* nSaturation */
    4096,
    /* nHue */
    0,
};

const static AX_ISP_IQ_YCRT_PARAM_T ycrt_param_sdr = {
    /* nYcrtEn */
    1,
    /* nSignalRangeMode */
    0,
    /* nYrtInputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nYrtOutputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nCrtInputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nCrtOutputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nClipLevelY[2] */
    {0, 1023, /*0 - 1*/},
    /* nClipLevelUV[2] */
    {-512, 511, /*0 - 1*/},
};

const static AX_ISP_IQ_CLP_PARAM_T clp_param_sdr = {
    /* nClpEn */
    0,
    /* nColorPaletteId */
    0,
    /* nColorPaletteYuvLut[3][256] */
    {
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
        },
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
        },
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
        },
    },
};

const static AX_ISP_IQ_NUC_PARAM_T nuc_param_sdr = {
    /* nNucEnable */
    0,
    /* nModuleMode */
    0,
    /* tManualParam */
    {
        /* tSensorNucCalib */
        {
            /* nNuc1stFrame */
            0,
            /* nStepEnhEn */
            0,
            /* nEffectiveBits */
            7,
            /* nNucAdjustTrend */
            0,
            /* nNucFineBitMask */
            15,
            /* nNucCoarseBitMask */
            240,
            /* nNucInitFine */
            0,
            /* nNucInitCoarse */
            0,
            /* nNucFineStep */
            17,
            /* nNucCoarseStep */
            17,
            /* nNucMaxFVal */
            17,
            /* nNucMaxCVal */
            17,
            /* nNucMinFVal */
            0,
            /* nNucMinCVal */
            0,
            /* nNucAdFineHigh */
            65535,
            /* nNucAdCoarseHigh */
            65535,
            /* nNucAdFineLow */
            65535,
            /* nNucAdCoarseLow */
            65535,
            /* nNucFineCnt */
            1,
            /* nNucCoarseCnt */
            1,
        },
        /* tTwoPointsCalib */
        {
            /* nNucFpnEn */
            0,
            /* nNucBaseGain */
            256,
            /* nNucFpnGain */
            256,
        },
    },
};

const static AX_ISP_IQ_LDC_PARAM_T ldc_param_sdr = {
    /* nLdcEnable */
    0,
    /* nType */
    0,
    /* tLdcV1Param */
    {
        /* bAspect */
        /* 0:AX_FALSE, 1:AX_TRUE */
        AX_FALSE,
        /* nXRatio */
        0,
        /* nYRatio */
        0,
        /* nXYRatio */
        0,
        /* nCenterXOffset */
        0,
        /* nCenterYOffset */
        0,
        /* nDistortionRatio */
        0,
        /* nSpreadCoef */
        0,
    },
    /* tLdcV2Param */
    {
        /* nMatrix[3][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 1, /*0 - 2*/},
        },
        /* nDistortionCoeff[8] */
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
    },
};

const static AX_ISP_IQ_DIS_PARAM_T dis_param_sdr = {
    /* bDisEnable */
    0,
    /* nDisType */
    0,
    /* tDisV1Param */
    {
        /* bSWCalcEnable */
        0,
        /* nDelayFrameNum */
        0,
        /* nHistoryFrameNum */
        1,
        /* nCropRatio */
        127,
        /* nFramePosWeights[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
        /* nSadThreshold */
        0,
    },
};

const static AX_ISP_IQ_ME_PARAM_T me_param_sdr = {
    /* nEnable */
    1,
    /* nLutEnable */
    1,
    /* nLut[33] */
    {
        0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 96, 104, 112, 120, 128, 136, 144, 152, 160, 168, 176, 184, 192, 200, 208, 216, 224, 232, 240, 248,  /* 0 - 31*/
        256, /*32 - 32*/
    },
    /* nProjShiftBit[2] */
    {2, 2, /*0 - 1*/},
    /* nScaleRatio */
    1,
    /* tGridRoiH */
    {
        /* nRoiOffsetH */
        32,
        /* nRoiOffsetV */
        16,
        /* nRoiRegionNumH */
        5,
        /* nRoiRegionNumV */
        2,
        /* nRoiRegionSizeH */
        528,
        /* nRoiRegionSizeV */
        760,
        /* nSearchRange */
        16,
    },
    /* tGridRoiV */
    {
        /* nRoiOffsetH */
        32,
        /* nRoiOffsetV */
        32,
        /* nRoiRegionNumH */
        5,
        /* nRoiRegionNumV */
        5,
        /* nRoiRegionSizeH */
        536,
        /* nRoiRegionSizeV */
        288,
        /* nSearchRange */
        32,
    },
};

#endif
