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
#include "AXAlgo.hpp"
#include "ax_base_type.h"
#include "ax_global_type.h"
#include "ax_ivps_api.h"


typedef struct axAPP_OSD_BOX_T {
    AX_U32 nColor;
    AX_APP_ALGO_BOX_T tBox;
} AX_APP_OSD_BOX_T;

class CIVPSGrpStage;
class IOSDHelper {
public:
    virtual ~IOSDHelper() = default;

public:
    virtual AX_BOOL StartOSD(CIVPSGrpStage* pIvpsInstance) = 0;
    virtual AX_BOOL StopOSD() = 0;
    virtual AX_BOOL EnableAiRegion(AX_BOOL bEnable = AX_TRUE) = 0;
    virtual AX_U8 GetAttachedFilter() = 0;
    virtual AX_BOOL Refresh() = 0;
    virtual AX_BOOL UpdateOSDRect(const std::vector<AX_IVPS_RGN_POLYGON_T>& vecRgn) = 0;
    virtual AX_BOOL UpdateOSDRect(const std::vector<AX_APP_OSD_BOX_T>& vecBox) = 0;
};
