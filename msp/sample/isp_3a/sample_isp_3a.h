/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef _SAMPLE_VIN_H_
#define _SAMPLE_VIN_H_

#define COMM_ISP_PRT(fmt...)   \
do {\
    printf("[%s]-%d: ", __FUNCTION__, __LINE__);\
    printf(fmt);\
}while(0)

#endif
