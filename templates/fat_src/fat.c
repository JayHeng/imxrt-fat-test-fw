/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include "fat.h"
#include "fsl_debug_console.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

void FAT_MagicStart(uint32_t delayTime_s)
{
    PRINTF("FAT FW Start DelayTime=%ds\r\n", delayTime_s);
}

void FAT_MagicPass(void)
{
    PRINTF("FAT FW Pass\r\n");
}

void FAT_MagicFail(void)
{
    PRINTF("FAT FW Fail\r\n");
}




