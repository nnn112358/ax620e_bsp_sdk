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

#include <map>
#include "AXSingleton.h"
#include "IVPSGrpStage.h"
#include "picojson.h"

class CIvpsCfgParser : public CAXSingleton<CIvpsCfgParser> {
    friend class CAXSingleton<CIvpsCfgParser>;

public:
    AX_BOOL GetConfig(std::map<AX_U8, IVPS_GROUP_CFG_T>& mapGrpSetting);

private:
    CIvpsCfgParser(AX_VOID) = default;
    ~CIvpsCfgParser(AX_VOID) = default;

    AX_BOOL InitOnce() override;

    AX_BOOL ParseFile(const std::string& strPath, std::map<AX_U8, IVPS_GROUP_CFG_T>& mapGrpSetting);
    AX_BOOL ParseJson(picojson::object& objJsonRoot, std::map<AX_U8, IVPS_GROUP_CFG_T>& mapGrpSetting);
    AX_IVPS_ENGINE_E Str2Engine(std::string strEngine);
};
