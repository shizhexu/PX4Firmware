/************************************************************************************************
 * arch/arm/src/lpc31xx/lpc31_i2s.h
 *
 *   Copyright (C) 2009 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************************/

#ifndef __ARCH_ARM_SRC_LPC31XX_LPC31_I2S_H
#define __ARCH_ARM_SRC_LPC31XX_LPC31_I2S_H

/************************************************************************************************
 * Included Files
 ************************************************************************************************/

#include <nuttx/config.h>
#include "lpc31_memorymap.h"

/************************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************************/

/* I2S register base address offset into the APB3 domain ****************************************/

#define LPC31_I2SCONFIG_VBASE           (LPC31_APB3_VSECTION+LPC31_APB3_I2SCONFIG_OFFSET)
#define LPC31_I2SCONFIG_PBASE           (LPC31_APB3_PSECTION+LPC31_APB3_I2SCONFIG_OFFSET)

#define LPC31_I2STX0_VBASE              (LPC31_APB3_VSECTION+LPC31_APB3_I2STX0_OFFSET)
#define LPC31_I2STX0_PBASE              (LPC31_APB3_PSECTION+LPC31_APB3_I2STX0_OFFSET)

#define LPC31_I2STX1_VBASE              (LPC31_APB3_VSECTION+LPC31_APB3_I2STX1_OFFSET)
#define LPC31_I2STX1_PBASE              (LPC31_APB3_PSECTION+LPC31_APB3_I2STX1_OFFSET)

#define LPC31_I2SRX0_VBASE              (LPC31_APB3_VSECTION+LPC31_APB3_I2SRX0_OFFSET)
#define LPC31_I2SRX0_PBASE              (LPC31_APB3_PSECTION+LPC31_APB3_I2SRX0_OFFSET)

#define LPC31_I2SRX1_VBASE              (LPC31_APB3_VSECTION+LPC31_APB3_I2SRX1_OFFSET)
#define LPC31_I2SRX1_PBASE              (LPC31_APB3_PSECTION+LPC31_APB3_I2SRX1_OFFSET)

/* I2S register offsets (with respect to the I2S base) ******************************************/
/* I2S configuration module offset */

#define LPC31_I2SCONFIG_FORMAT_OFFSET   0x000 /* I2S formats */
#define LPC31_I2SCONFIG_CFGMUX_OFFSET   0x004 /* Misc controls */
                                                /* 0x008-0x00c: Reserved */
#define LPC31_I2SCONFIG_NSOFCNTR_OFFSET 0x010 /* NSOF counter control */

/* I2STX0, I2STX1, I2SRX0, and I2SRX1 module offsets */

#define LPC31_I2S_L16BIT_OFFSET         0x000 /* 16 bits left channel data */
#define LPC31_I2S_R16BIT_OFFSET         0x004 /* 16 bits right channel data */
#define LPC31_I2S_L24BIT_OFFSET         0x008 /* 24 bits left channel data */
#define LPC31_I2S_R24BIT_OFFSET         0x00c /* 24 bits right channel data */
#define LPC31_I2S_INTSTATUS_OFFSET      0x010 /* FIFO status register */
#define LPC31_I2S_INTMASK_OFFSET        0x014 /* Interrupt Mask register */
#define LPC31_I2S_L32BIT_OFFSET(n)      (0x020+((n)<<2))
#define LPC31_I2S_L32BIT0_OFFSET        0x020 /* 2x16 bits left channel data */
#define LPC31_I2S_L32BIT1_OFFSET        0x024 /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_L32BIT2_OFFSET        0x028 /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_L32BIT3_OFFSET        0x02c /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_L32BIT4_OFFSET        0x030 /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_L32BIT5_OFFSET        0x034 /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_L32BIT6_OFFSET        0x038 /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_L32BIT7_OFFSET        0x03c /* "  " "  " "  " "     " "  " */
#define LPC31_I2S_R32BIT_OFFSET(n)      (0x040+((n)<<2))
#define LPC31_I2S_R32BIT0_OFFSET        0x040 /* 2x16 bits right channel data */
#define LPC31_I2S_R32BIT1_OFFSET        0x044 /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_R32BIT2_OFFSET        0x048 /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_R32BIT3_OFFSET        0x04c /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_R32BIT4_OFFSET        0x050 /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_R32BIT5_OFFSET        0x054 /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_R32BIT6_OFFSET        0x058 /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_R32BIT7_OFFSET        0x05c /* "  " "  " "   " "     " "  " */
#define LPC31_I2S_ILVD_OFFSET(n)        (0x060+((n)<<2))
#define LPC31_I2S_ILVD0_OFFSET          0x060 /* Interleaved data */
#define LPC31_I2S_ILVD1_OFFSET          0x064 /* "         " "  " */
#define LPC31_I2S_ILVD2_OFFSET          0x068 /* "         " "  " */
#define LPC31_I2S_ILVD3_OFFSET          0x06c /* "         " "  " */
#define LPC31_I2S_ILVD4_OFFSET          0x070 /* "         " "  " */
#define LPC31_I2S_ILVD5_OFFSET          0x074 /* "         " "  " */
#define LPC31_I2S_ILVD6_OFFSET          0x078 /* "         " "  " */
#define LPC31_I2S_ILVD7_OFFSET          0x07c /* "         " "  " */

/* I2S register (virtual) addresses *************************************************************/
/* I2S configuration module registers */

#define LPC31_I2SCONFIG_FORMAT          (LPC31_I2SCONFIG_VBASE+lPC313X_I2SCONFIG_FORMAT_OFFSET)
#define LPC31_I2SCONFIG_CFGMUX          (LPC31_I2SCONFIG_VBASE+LPC31_I2SCONFIG_CFGMUX_OFFSET)
#define LPC31_I2SCONFIG_NSOFCNTR        (LPC31_I2SCONFIG_VBASE+LPC31_I2SCONFIG_NSOFCNTR_OFFSET)

/* I2STX0 module registers */

#define LPC31_I2STX0_L16BIT             (LPC31_I2STX0_VBASE+LPC31_I2S_L16BIT_OFFSET)
#define LPC31_I2STX0_R16BIT             (LPC31_I2STX0_VBASE+LPC31_I2S_R16BIT_OFFSET)
#define LPC31_I2STX0_L24BIT             (LPC31_I2STX0_VBASE+LPC31_I2S_L24BIT_OFFSET)
#define LPC31_I2STX0_R24BIT             (LPC31_I2STX0_VBASE+LPC31_I2S_R24BIT_OFFSET)
#define LPC31_I2STX0_INTSTATUS          (LPC31_I2STX0_VBASE+LPC31_I2S_INTSTATUS_OFFSET)
#define LPC31_I2STX0_INTMASK            (LPC31_I2STX0_VBASE+LPC31_I2S_INTMASK_OFFSET)
#define LPC31_I2STX0_L32BIT(n)          (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT_OFFSET(n))
#define LPC31_I2STX0_L32BIT0            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT0_OFFSET)
#define LPC31_I2STX0_L32BIT1            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT1_OFFSET)
#define LPC31_I2STX0_L32BIT2            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT2_OFFSET)
#define LPC31_I2STX0_L32BIT3            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT3_OFFSET)
#define LPC31_I2STX0_L32BIT4            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT4_OFFSET)
#define LPC31_I2STX0_L32BIT5            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT5_OFFSET)
#define LPC31_I2STX0_L32BIT6            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT6_OFFSET)
#define LPC31_I2STX0_L32BIT7            (LPC31_I2STX0_VBASE+LPC31_I2S_L32BIT7_OFFSET)
#define LPC31_I2STX0_R32BIT(n)          (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT_OFFSET(n))
#define LPC31_I2STX0_R32BIT0            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT0_OFFSET)
#define LPC31_I2STX0_R32BIT1            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT1_OFFSET)
#define LPC31_I2STX0_R32BIT2            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT2_OFFSET)
#define LPC31_I2STX0_R32BIT3            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT3_OFFSET)
#define LPC31_I2STX0_R32BIT4            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT4_OFFSET)
#define LPC31_I2STX0_R32BIT5            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT5_OFFSET)
#define LPC31_I2STX0_R32BIT6            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT6_OFFSET)
#define LPC31_I2STX0_R32BIT7            (LPC31_I2STX0_VBASE+LPC31_I2S_R32BIT7_OFFSET)
#define LPC31_I2STX0_ILVD(n)            (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD_OFFSET(n))
#define LPC31_I2STX0_ILVD0              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD0_OFFSET)
#define LPC31_I2STX0_ILVD1              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD1_OFFSET)
#define LPC31_I2STX0_ILVD2              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD2_OFFSET)
#define LPC31_I2STX0_ILVD3              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD3_OFFSET)
#define LPC31_I2STX0_ILVD4              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD4_OFFSET)
#define LPC31_I2STX0_ILVD5              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD5_OFFSET)
#define LPC31_I2STX0_ILVD6              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD6_OFFSET)
#define LPC31_I2STX0_ILVD7              (LPC31_I2STX0_VBASE+LPC31_I2S_ILVD7_OFFSET)

/* I2STX1 module registers */

#define LPC31_I2STX1_L16BIT             (LPC31_I2STX1_VBASE+LPC31_I2S_L16BIT_OFFSET)
#define LPC31_I2STX1_R16BIT             (LPC31_I2STX1_VBASE+LPC31_I2S_R16BIT_OFFSET)
#define LPC31_I2STX1_L24BIT             (LPC31_I2STX1_VBASE+LPC31_I2S_L24BIT_OFFSET)
#define LPC31_I2STX1_R24BIT             (LPC31_I2STX1_VBASE+LPC31_I2S_R24BIT_OFFSET)
#define LPC31_I2STX1_INTSTATUS          (LPC31_I2STX1_VBASE+LPC31_I2S_INTSTATUS_OFFSET)
#define LPC31_I2STX1_INTMASK            (LPC31_I2STX1_VBASE+LPC31_I2S_INTMASK_OFFSET)
#define LPC31_I2STX1_L32BIT(n)          (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT_OFFSET(n))
#define LPC31_I2STX1_L32BIT0            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT0_OFFSET)
#define LPC31_I2STX1_L32BIT1            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT1_OFFSET)
#define LPC31_I2STX1_L32BIT2            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT2_OFFSET)
#define LPC31_I2STX1_L32BIT3            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT3_OFFSET)
#define LPC31_I2STX1_L32BIT4            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT4_OFFSET)
#define LPC31_I2STX1_L32BIT5            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT5_OFFSET)
#define LPC31_I2STX1_L32BIT6            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT6_OFFSET)
#define LPC31_I2STX1_L32BIT7            (LPC31_I2STX1_VBASE+LPC31_I2S_L32BIT7_OFFSET)
#define LPC31_I2STX1_R32BIT(n)          (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT_OFFSET(n))
#define LPC31_I2STX1_R32BIT0            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT0_OFFSET)
#define LPC31_I2STX1_R32BIT1            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT1_OFFSET)
#define LPC31_I2STX1_R32BIT2            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT2_OFFSET)
#define LPC31_I2STX1_R32BIT3            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT3_OFFSET)
#define LPC31_I2STX1_R32BIT4            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT4_OFFSET)
#define LPC31_I2STX1_R32BIT5            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT5_OFFSET)
#define LPC31_I2STX1_R32BIT6            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT6_OFFSET)
#define LPC31_I2STX1_R32BIT7            (LPC31_I2STX1_VBASE+LPC31_I2S_R32BIT7_OFFSET)
#define LPC31_I2STX1_ILVD(n)            (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD_OFFSET(n))
#define LPC31_I2STX1_ILVD0              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD0_OFFSET)
#define LPC31_I2STX1_ILVD1              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD1_OFFSET)
#define LPC31_I2STX1_ILVD2              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD2_OFFSET)
#define LPC31_I2STX1_ILVD3              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD3_OFFSET)
#define LPC31_I2STX1_ILVD4              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD4_OFFSET)
#define LPC31_I2STX1_ILVD5              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD5_OFFSET)
#define LPC31_I2STX1_ILVD6              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD6_OFFSET)
#define LPC31_I2STX1_ILVD7              (LPC31_I2STX1_VBASE+LPC31_I2S_ILVD7_OFFSET)

/* I2SRX0 module registers */

#define LPC31_I2SRX0_L16BIT             (LPC31_I2SRX0_VBASE+LPC31_I2S_L16BIT_OFFSET)
#define LPC31_I2SRX0_R16BIT             (LPC31_I2SRX0_VBASE+LPC31_I2S_R16BIT_OFFSET)
#define LPC31_I2SRX0_L24BIT             (LPC31_I2SRX0_VBASE+LPC31_I2S_L24BIT_OFFSET)
#define LPC31_I2SRX0_R24BIT             (LPC31_I2SRX0_VBASE+LPC31_I2S_R24BIT_OFFSET)
#define LPC31_I2SRX0_INTSTATUS          (LPC31_I2SRX0_VBASE+LPC31_I2S_INTSTATUS_OFFSET)
#define LPC31_I2SRX0_INTMASK            (LPC31_I2SRX0_VBASE+LPC31_I2S_INTMASK_OFFSET)
#define LPC31_I2SRX0_L32BIT(n)          (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT_OFFSET(n))
#define LPC31_I2SRX0_L32BIT0            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT0_OFFSET)
#define LPC31_I2SRX0_L32BIT1            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT1_OFFSET)
#define LPC31_I2SRX0_L32BIT2            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT2_OFFSET)
#define LPC31_I2SRX0_L32BIT3            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT3_OFFSET)
#define LPC31_I2SRX0_L32BIT4            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT4_OFFSET)
#define LPC31_I2SRX0_L32BIT5            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT5_OFFSET)
#define LPC31_I2SRX0_L32BIT6            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT6_OFFSET)
#define LPC31_I2SRX0_L32BIT7            (LPC31_I2SRX0_VBASE+LPC31_I2S_L32BIT7_OFFSET)
#define LPC31_I2SRX0_R32BIT(n)          (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT_OFFSET(n))
#define LPC31_I2SRX0_R32BIT0            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT0_OFFSET)
#define LPC31_I2SRX0_R32BIT1            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT1_OFFSET)
#define LPC31_I2SRX0_R32BIT2            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT2_OFFSET)
#define LPC31_I2SRX0_R32BIT3            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT3_OFFSET)
#define LPC31_I2SRX0_R32BIT4            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT4_OFFSET)
#define LPC31_I2SRX0_R32BIT5            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT5_OFFSET)
#define LPC31_I2SRX0_R32BIT6            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT6_OFFSET)
#define LPC31_I2SRX0_R32BIT7            (LPC31_I2SRX0_VBASE+LPC31_I2S_R32BIT7_OFFSET)
#define LPC31_I2SRX0_ILVD(n)            (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD_OFFSET(n))
#define LPC31_I2SRX0_ILVD0              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD0_OFFSET)
#define LPC31_I2SRX0_ILVD1              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD1_OFFSET)
#define LPC31_I2SRX0_ILVD2              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD2_OFFSET)
#define LPC31_I2SRX0_ILVD3              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD3_OFFSET)
#define LPC31_I2SRX0_ILVD4              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD4_OFFSET)
#define LPC31_I2SRX0_ILVD5              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD5_OFFSET)
#define LPC31_I2SRX0_ILVD6              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD6_OFFSET)
#define LPC31_I2SRX0_ILVD7              (LPC31_I2SRX0_VBASE+LPC31_I2S_ILVD7_OFFSET)

/* I2SRX1 module registers */

#define LPC31_I2SRX1_L16BIT             (LPC31_I2SRX1_VBASE+LPC31_I2S_L16BIT_OFFSET)
#define LPC31_I2SRX1_R16BIT             (LPC31_I2SRX1_VBASE+LPC31_I2S_R16BIT_OFFSET)
#define LPC31_I2SRX1_L24BIT             (LPC31_I2SRX1_VBASE+LPC31_I2S_L24BIT_OFFSET)
#define LPC31_I2SRX1_R24BIT             (LPC31_I2SRX1_VBASE+LPC31_I2S_R24BIT_OFFSET)
#define LPC31_I2SRX1_INTSTATUS          (LPC31_I2SRX1_VBASE+LPC31_I2S_INTSTATUS_OFFSET)
#define LPC31_I2SRX1_INTMASK            (LPC31_I2SRX1_VBASE+LPC31_I2S_INTMASK_OFFSET)
#define LPC31_I2SRX1_L32BIT(n)          (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT_OFFSET(n))
#define LPC31_I2SRX1_L32BIT0            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT0_OFFSET)
#define LPC31_I2SRX1_L32BIT1            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT1_OFFSET)
#define LPC31_I2SRX1_L32BIT2            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT2_OFFSET)
#define LPC31_I2SRX1_L32BIT3            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT3_OFFSET)
#define LPC31_I2SRX1_L32BIT4            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT4_OFFSET)
#define LPC31_I2SRX1_L32BIT5            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT5_OFFSET)
#define LPC31_I2SRX1_L32BIT6            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT6_OFFSET)
#define LPC31_I2SRX1_L32BIT7            (LPC31_I2SRX1_VBASE+LPC31_I2S_L32BIT7_OFFSET)
#define LPC31_I2SRX1_R32BIT(n)          (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT_OFFSET(n))
#define LPC31_I2SRX1_R32BIT0            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT0_OFFSET)
#define LPC31_I2SRX1_R32BIT1            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT1_OFFSET)
#define LPC31_I2SRX1_R32BIT2            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT2_OFFSET)
#define LPC31_I2SRX1_R32BIT3            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT3_OFFSET)
#define LPC31_I2SRX1_R32BIT4            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT4_OFFSET)
#define LPC31_I2SRX1_R32BIT5            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT5_OFFSET)
#define LPC31_I2SRX1_R32BIT6            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT6_OFFSET)
#define LPC31_I2SRX1_R32BIT7            (LPC31_I2SRX1_VBASE+LPC31_I2S_R32BIT7_OFFSET)
#define LPC31_I2SRX1_ILVD(n)            (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD_OFFSET(n))
#define LPC31_I2SRX1_ILVD0              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD0_OFFSET)
#define LPC31_I2SRX1_ILVD1              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD1_OFFSET)
#define LPC31_I2SRX1_ILVD2              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD2_OFFSET)
#define LPC31_I2SRX1_ILVD3              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD3_OFFSET)
#define LPC31_I2SRX1_ILVD4              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD4_OFFSET)
#define LPC31_I2SRX1_ILVD5              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD5_OFFSET)
#define LPC31_I2SRX1_ILVD6              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD6_OFFSET)
#define LPC31_I2SRX1_ILVD7              (LPC31_I2SRX1_VBASE+LPC31_I2S_ILVD7_OFFSET)

/* I2S register bit definitions *****************************************************************/
/* I2S configuration module offset */

/* I2SCONFIG_FORMAT address 0x16000000 */

#define I2SCONFIG_FORMAT_I2SRX1_SHIFT     (9)       /* Bits 9-11: I2SRX1 I2S output format */
#define I2SCONFIG_FORMAT_I2SRX1_MASK      (7 << I2SCONFIG_FORMAT_I2SRX1_SHIFT)
#  define I2SCONFIG_FORMAT_I2SRX1_I2S     (3 << I2SCONFIG_FORMAT_I2SRX1_SHIFT) /* I2S */
#  define I2SCONFIG_FORMAT_I2SRX1_16BIT   (4 << I2SCONFIG_FORMAT_I2SRX1_SHIFT) /* LSB justified 16 bits */
#  define I2SCONFIG_FORMAT_I2SRX1_18BIT   (5 << I2SCONFIG_FORMAT_I2SRX1_SHIFT) /* LSB justified 18 bits */
#  define I2SCONFIG_FORMAT_I2SRX1_20BIT   (6 << I2SCONFIG_FORMAT_I2SRX1_SHIFT) /* LSB justified 20 bits */
#  define I2SCONFIG_FORMAT_I2SRX1_24BIT   (7 << I2SCONFIG_FORMAT_I2SRX1_SHIFT) /* LSB justified 24 bits */
#define I2SCONFIG_FORMAT_I2SRX0_SHIFT     (6)       /* Bits 6-8: I2SRX0 I2S output format */
#define I2SCONFIG_FORMAT_I2SRX0_MASK      (7 << I2SCONFIG_FORMAT_I2SRX0_SHIFT)
#  define I2SCONFIG_FORMAT_I2SRX0_I2S     (3 << I2SCONFIG_FORMAT_I2SRX0_SHIFT) /* I2S */
#  define I2SCONFIG_FORMAT_I2SRX0_16BIT   (4 << I2SCONFIG_FORMAT_I2SRX0_SHIFT) /* LSB justified 16 bits */
#  define I2SCONFIG_FORMAT_I2SRX0_18BIT   (5 << I2SCONFIG_FORMAT_I2SRX0_SHIFT) /* LSB justified 18 bits */
#  define I2SCONFIG_FORMAT_I2SRX0_20BIT   (6 << I2SCONFIG_FORMAT_I2SRX0_SHIFT) /* LSB justified 20 bits */
#  define I2SCONFIG_FORMAT_I2SRX0_24BIT   (7 << I2SCONFIG_FORMAT_I2SRX0_SHIFT) /* LSB justified 24 bits */
#define I2SCONFIG_FORMAT_I2STX1_SHIFT     (3)       /* Bits 3-5: 2STX1 I2S input format */
#define I2SCONFIG_FORMAT_I2STX1_MASK      (7 << I2SCONFIG_FORMAT_I2STX1_SHIFT)
#  define I2SCONFIG_FORMAT_I2STX1_I2S     (3 << I2SCONFIG_FORMAT_I2STX1_SHIFT) /* I2S */
#  define I2SCONFIG_FORMAT_I2STX1_16BIT   (4 << I2SCONFIG_FORMAT_I2STX1_SHIFT) /* LSB justified 16 bits */
#  define I2SCONFIG_FORMAT_I2STX1_18BIT   (5 << I2SCONFIG_FORMAT_I2STX1_SHIFT) /* LSB justified 18 bits */
#  define I2SCONFIG_FORMAT_I2STX1_20BIT   (6 << I2SCONFIG_FORMAT_I2STX1_SHIFT) /* LSB justified 20 bits */
#  define I2SCONFIG_FORMAT_I2STX1_24BIT   (7 << I2SCONFIG_FORMAT_I2STX1_SHIFT) /* LSB justified 24 bits */
#define I2SCONFIG_FORMAT_I2STX0_SHIFT     (0)       /* Bits 0-2: I2STX0 I2S input format */
#define I2SCONFIG_FORMAT_I2STX0_MASK      (7 << I2SCONFIG_FORMAT_I2STX0_SHIFT)
#  define I2SCONFIG_FORMAT_I2STX0_I2S     (3 << I2SCONFIG_FORMAT_I2STX0_SHIFT) /* I2S */
#  define I2SCONFIG_FORMAT_I2STX0_16BIT   (4 << I2SCONFIG_FORMAT_I2STX0_SHIFT) /* LSB justified 16 bits */
#  define I2SCONFIG_FORMAT_I2STX0_18BIT   (5 << I2SCONFIG_FORMAT_I2STX0_SHIFT) /* LSB justified 18 bits */
#  define I2SCONFIG_FORMAT_I2STX0_20BIT   (6 << I2SCONFIG_FORMAT_I2STX0_SHIFT) /* LSB justified 20 bits */
#  define I2SCONFIG_FORMAT_I2STX0_24BIT   (7 << I2SCONFIG_FORMAT_I2STX0_SHIFT) /* LSB justified 24 bits */

/* II2SCONFIG_CFGMUX address 0x16000004 */

#define I2SCONFIG_CFGMUX_I2SRX1OEN        (1 << 2)  /* Bit 2:  Selects faster mode for I2SRX1 */
#define I2SCONFIG_CFGMUX_I2SRX0OEN        (1 << 1)  /* Bit 1:  Slects master mode for I2SRX0 */

/* I2SCONFIG_NSOFCNT address 0x16000010 */

/************************************************************************************************
 * Public Types
 ************************************************************************************************/

/************************************************************************************************
 * Public Data
 ************************************************************************************************/

/************************************************************************************************
 * Public Functions
 ************************************************************************************************/

#endif /* __ARCH_ARM_SRC_LPC31XX_LPC31_I2S_H */
