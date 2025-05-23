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
#include "ax_base_type.h"

class IModule {
public:
    virtual ~IModule(AX_VOID) = default;
    virtual AX_BOOL Init() = 0;
    virtual AX_BOOL DeInit() = 0;
    virtual AX_BOOL Start() = 0;
    virtual AX_BOOL Stop() = 0;
};