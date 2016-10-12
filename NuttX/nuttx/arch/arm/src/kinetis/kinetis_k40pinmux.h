/********************************************************************************************
 * arch/arm/src/kinetis/kinetis_k40pinmux.h
 *
 *   Copyright (C) 2011 Gregory Nutt. All rights reserved.
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
 ********************************************************************************************/

#ifndef __ARCH_ARM_SRC_KINETIS_KINETIS_K40PINMUX_H
#define __ARCH_ARM_SRC_KINETIS_KINETIS_K40PINMUX_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <nuttx/config.h>

#include "chip.h"

/********************************************************************************************
 * Pre-processor Definitions
 ********************************************************************************************/
/* Reference: Paragraph 10.3.1, p 227, of FreeScale document K40P144M100SF2RM
 *
 * In most cases, there are alternative configurations for various pins. Those alternative
 * pins are labeled with a suffix like _1, _2, etc. in order to distinguish them.  Logic in
 * the board.h file must select the correct pin configuration for the board by defining a pin
 * configuration (with no suffix) that maps to the correct alternative.
 */

#if defined(CONFIG_ARCH_CHIP_MK40X128VLQ100) || defined(CONFIG_ARCH_CHIP_MK40X128VMD100) || \
    defined(CONFIG_ARCH_CHIP_MK40X256VLQ100) || defined(CONFIG_ARCH_CHIP_MK40X256VMD100) || \
    defined(CONFIG_ARCH_CHIP_MK40N512VLQ100) || defined(CONFIG_ARCH_CHIP_MK40N512VMD100)

#define PIN_TSI0_CH1             (PIN_ANALOG | PIN_PORTA | PIN0)
#define PIN_UART0_CTS_1          (PIN_ALT2   | PIN_PORTA | PIN0)
#define PIN_FTM0_CH5_1           (PIN_ALT3   | PIN_PORTA | PIN0)
#define PIN_JTAG_TCLK            (PIN_ALT7   | PIN_PORTA | PIN0)
#define PIN_SWD_CLK              (PIN_ALT7   | PIN_PORTA | PIN0)
#define PIN_TSI0_CH2             (PIN_ANALOG | PIN_PORTA | PIN1)
#define PIN_UART0_RX_1           (PIN_ALT2   | PIN_PORTA | PIN1)
#define PIN_FTM0_CH6_1           (PIN_ALT3   | PIN_PORTA | PIN1)
#define PIN_JTAG_TDI             (PIN_ALT7   | PIN_PORTA | PIN1)
#define PIN_TSI0_CH3             (PIN_ANALOG | PIN_PORTA | PIN2)
#define PIN_UART0_TX_1           (PIN_ALT2   | PIN_PORTA | PIN2)
#define PIN_FTM0_CH7_1           (PIN_ALT3   | PIN_PORTA | PIN2)
#define PIN_JTAG_TDO             (PIN_ALT7   | PIN_PORTA | PIN2)
#define PIN_TRACE_SWO            (PIN_ALT7   | PIN_PORTA | PIN2)
#define PIN_TSI0_CH4             (PIN_ANALOG | PIN_PORTA | PIN3)
#define PIN_UART0_RTS_1          (PIN_ALT2   | PIN_PORTA | PIN3)
#define PIN_FTM0_CH0_1           (PIN_ALT3   | PIN_PORTA | PIN3)
#define PIN_JTAG_TMS             (PIN_ALT7   | PIN_PORTA | PIN3)
#define PIN_SWD_DIO              (PIN_ALT7   | PIN_PORTA | PIN3)
#define PIN_TSI0_CH5             (PIN_ANALOG | PIN_PORTA | PIN4)
#define PIN_FTM0_CH1_1           (PIN_ALT3   | PIN_PORTA | PIN4)
#define PIN_NMI                  (PIN_ALT7   | PIN_PORTA | PIN4)
#define PIN_FTM0_CH2_1           (PIN_ALT3   | PIN_PORTA | PIN5)
#define PIN_CMP2_OUT_1           (PIN_ALT5   | PIN_PORTA | PIN5)
#define PIN_I2S0_RX_BCLK_1       (PIN_ALT6   | PIN_PORTA | PIN5)
#define PIN_JTAG_TRST            (PIN_ALT7   | PIN_PORTA | PIN5)
#define PIN_FTM0_CH3_1           (PIN_ALT3   | PIN_PORTA | PIN6)
#define PIN_FB_CLKOUT            (PIN_ALT5   | PIN_PORTA | PIN6)
#define PIN_TRACE_CLKOUT         (PIN_ALT7   | PIN_PORTA | PIN6)
#define PIN_ADC0_SE10            (PIN_ANALOG | PIN_PORTA | PIN7)
#define PIN_FTM0_CH4_1           (PIN_ALT3   | PIN_PORTA | PIN7)
#define PIN_FB_AD18              (PIN_ALT5   | PIN_PORTA | PIN7)
#define PIN_TRACE_D3             (PIN_ALT7   | PIN_PORTA | PIN7)
#define PIN_ADC0_SE11            (PIN_ANALOG | PIN_PORTA | PIN8)
#define PIN_FTM1_CH0_1           (PIN_ALT3   | PIN_PORTA | PIN8)
#define PIN_FB_AD17              (PIN_ALT5   | PIN_PORTA | PIN8)
#define PIN_FTM1_QD_PHA_1        (PIN_ALT6   | PIN_PORTA | PIN8)
#define PIN_TRACE_D2             (PIN_ALT7   | PIN_PORTA | PIN8)
#define PIN_FTM1_CH1_1           (PIN_ALT3   | PIN_PORTA | PIN9)
#define PIN_FB_AD16              (PIN_ALT5   | PIN_PORTA | PIN9)
#define PIN_FTM1_QD_PHB_1        (PIN_ALT6   | PIN_PORTA | PIN9)
#define PIN_TRACE_D1             (PIN_ALT7   | PIN_PORTA | PIN9)
#define PIN_FTM2_CH0_1           (PIN_ALT3   | PIN_PORTA | PIN10)
#define PIN_FB_AD15              (PIN_ALT5   | PIN_PORTA | PIN10)
#define PIN_FTM2_QD_PHA_1        (PIN_ALT6   | PIN_PORTA | PIN10)
#define PIN_TRACE_D0             (PIN_ALT7   | PIN_PORTA | PIN10)
#define PIN_FTM2_CH1_1           (PIN_ALT3   | PIN_PORTA | PIN11)
#define PIN_FB_OE                (PIN_ALT5   | PIN_PORTA | PIN11)
#define PIN_FTM2_QD_PHB_1        (PIN_ALT6   | PIN_PORTA | PIN11)
#define PIN_CMP2_IN0             (PIN_ANALOG | PIN_PORTA | PIN12)
#define PIN_CAN0_TX_1            (PIN_ALT2   | PIN_PORTA | PIN12)
#define PIN_FTM1_CH0_2           (PIN_ALT3   | PIN_PORTA | PIN12)
#define PIN_FB_CS5               (PIN_ALT5   | PIN_PORTA | PIN12)
#define PIN_FB_TSIZ1             (PIN_ALT5   | PIN_PORTA | PIN12)
#define PIN_FB_BE23_16_BLS15_8   (PIN_ALT5   | PIN_PORTA | PIN12)
#define PIN_I2S0_TXD_1           (PIN_ALT6   | PIN_PORTA | PIN12)
#define PIN_FTM1_QD_PHA_2        (PIN_ALT7   | PIN_PORTA | PIN12)
#define PIN_CMP2_IN1             (PIN_ANALOG | PIN_PORTA | PIN13)
#define PIN_CAN0_RX_1            (PIN_ALT2   | PIN_PORTA | PIN13)
#define PIN_FTM1_CH1_2           (PIN_ALT3   | PIN_PORTA | PIN13)
#define PIN_FB_CS4               (PIN_ALT5   | PIN_PORTA | PIN13)
#define PIN_FB_TSIZ0             (PIN_ALT5   | PIN_PORTA | PIN13)
#define PIN_FB_BE31_24_BLS7_0    (PIN_ALT5   | PIN_PORTA | PIN13)
#define PIN_I2S0_TX_FS_1         (PIN_ALT6   | PIN_PORTA | PIN13)
#define PIN_FTM1_QD_PHB_2        (PIN_ALT7   | PIN_PORTA | PIN13)
#define PIN_SPI0_PCS0_1          (PIN_ALT2   | PIN_PORTA | PIN14)
#define PIN_UART0_TX_2           (PIN_ALT3   | PIN_PORTA | PIN14)
#define PIN_FB_AD31              (PIN_ALT5   | PIN_PORTA | PIN14)
#define PIN_I2S0_TX_BCLK_1       (PIN_ALT6   | PIN_PORTA | PIN14)
#define PIN_SPI0_SCK_1           (PIN_ALT2   | PIN_PORTA | PIN15)
#define PIN_UART0_RX_2           (PIN_ALT3   | PIN_PORTA | PIN15)
#define PIN_FB_AD30              (PIN_ALT5   | PIN_PORTA | PIN15)
#define PIN_I2S0_RXD_1           (PIN_ALT6   | PIN_PORTA | PIN15)
#define PIN_SPI0_SOUT_1          (PIN_ALT2   | PIN_PORTA | PIN16)
#define PIN_UART0_CTS_2          (PIN_ALT3   | PIN_PORTA | PIN16)
#define PIN_FB_AD29              (PIN_ALT5   | PIN_PORTA | PIN16)
#define PIN_I2S0_RX_FS_1         (PIN_ALT6   | PIN_PORTA | PIN16)
#define PIN_ADC1_SE17            (PIN_ANALOG | PIN_PORTA | PIN17)
#define PIN_SPI0_SIN_1           (PIN_ALT2   | PIN_PORTA | PIN17)
#define PIN_UART0_RTS_2          (PIN_ALT3   | PIN_PORTA | PIN17)
#define PIN_FB_AD28              (PIN_ALT5   | PIN_PORTA | PIN17)
#define PIN_I2S0_MCLK_1          (PIN_ALT6   | PIN_PORTA | PIN17)
#define PIN_I2S0_CLKIN_1         (PIN_ALT7   | PIN_PORTA | PIN17)
#define PIN_EXTAL                (PIN_ANALOG | PIN_PORTA | PIN18)
#define PIN_FTM0_FLT2_1          (PIN_ALT3   | PIN_PORTA | PIN18)
#define PIN_FTM_CLKIN0           (PIN_ALT4   | PIN_PORTA | PIN18)
#define PIN_XTAL                 (PIN_ANALOG | PIN_PORTA | PIN19)
#define PIN_FTM1_FLT0_1          (PIN_ALT3   | PIN_PORTA | PIN19)
#define PIN_FTM_CLKIN1           (PIN_ALT4   | PIN_PORTA | PIN19)
#define PIN_LPT0_ALT1            (PIN_ALT6   | PIN_PORTA | PIN19)
#define PIN_FB_AD14              (PIN_ALT5   | PIN_PORTA | PIN24)
#define PIN_FB_AD13              (PIN_ALT5   | PIN_PORTA | PIN25)
#define PIN_FB_AD12              (PIN_ALT5   | PIN_PORTA | PIN26)
#define PIN_FB_AD11              (PIN_ALT5   | PIN_PORTA | PIN27)
#define PIN_FB_AD10              (PIN_ALT5   | PIN_PORTA | PIN28)
#define PIN_FB_AD19              (PIN_ALT5   | PIN_PORTA | PIN29)

#define PIN_LCD_P0               (PIN_ANALOG | PIN_PORTB | PIN0)
#define PIN_ADC0_SE8             (PIN_ANALOG | PIN_PORTB | PIN0)
#define PIN_ADC1_SE8             (PIN_ANALOG | PIN_PORTB | PIN0)
#define PIN_TSI0_CH0             (PIN_ANALOG | PIN_PORTB | PIN0)
#define PIN_I2C0_SCL_1           (PIN_ALT2   | PIN_PORTB | PIN0)
#define PIN_FTM1_CH0_3           (PIN_ALT3   | PIN_PORTB | PIN0)
#define PIN_FTM1_QD_PHA_3        (PIN_ALT6   | PIN_PORTB | PIN0)
#define PIN_LCD_P0F              (PIN_ALT7   | PIN_PORTB | PIN0)
#define PIN_LCD_P1               (PIN_ANALOG | PIN_PORTB | PIN1)
#define PIN_ADC0_SE9             (PIN_ANALOG | PIN_PORTB | PIN1)
#define PIN_ADC1_SE9             (PIN_ANALOG | PIN_PORTB | PIN1)
#define PIN_TSI0_CH6             (PIN_ANALOG | PIN_PORTB | PIN1)
#define PIN_I2C0_SDA_1           (PIN_ALT2   | PIN_PORTB | PIN1)
#define PIN_FTM1_CH1_3           (PIN_ALT3   | PIN_PORTB | PIN1)
#define PIN_FTM1_QD_PHB          (PIN_ALT6   | PIN_PORTB | PIN1)
#define PIN_LCD_P1F              (PIN_ALT7   | PIN_PORTB | PIN1)
#define PIN_LCD_P2               (PIN_ANALOG | PIN_PORTB | PIN2)
#define PIN_ADC0_SE12            (PIN_ANALOG | PIN_PORTB | PIN2)
#define PIN_TSI0_CH7             (PIN_ANALOG | PIN_PORTB | PIN2)
#define PIN_I2C0_SCL_2           (PIN_ALT2   | PIN_PORTB | PIN2)
#define PIN_UART0_RTS_3          (PIN_ALT3   | PIN_PORTB | PIN2)
#define PIN_FTM0_FLT3            (PIN_ALT6   | PIN_PORTB | PIN2)
#define PIN_LCD_P2F              (PIN_ALT7   | PIN_PORTB | PIN2)
#define PIN_LCD_P3               (PIN_ANALOG | PIN_PORTB | PIN3)
#define PIN_ADC0_SE13            (PIN_ANALOG | PIN_PORTB | PIN3)
#define PIN_TSI0_CH8             (PIN_ANALOG | PIN_PORTB | PIN3)
#define PIN_I2C0_SDA_2           (PIN_ALT2   | PIN_PORTB | PIN3)
#define PIN_UART0_CTS_3          (PIN_ALT3   | PIN_PORTB | PIN3)
#define PIN_FTM0_FLT0_1          (PIN_ALT6   | PIN_PORTB | PIN3)
#define PIN_LCD_P3F              (PIN_ALT7   | PIN_PORTB | PIN3)
#define PIN_LCD_P4               (PIN_ANALOG | PIN_PORTB | PIN4)
#define PIN_ADC1_SE10            (PIN_ANALOG | PIN_PORTB | PIN4)
#define PIN_FTM1_FLT0_2          (PIN_ALT6   | PIN_PORTB | PIN4)
#define PIN_LCD_P4F              (PIN_ALT7   | PIN_PORTB | PIN4)
#define PIN_LCD_P5               (PIN_ANALOG | PIN_PORTB | PIN5)
#define PIN_ADC1_SE11            (PIN_ANALOG | PIN_PORTB | PIN5)
#define PIN_FTM2_FLT0_1          (PIN_ALT6   | PIN_PORTB | PIN5)
#define PIN_LCD_P5F              (PIN_ALT7   | PIN_PORTB | PIN5)
#define PIN_LCD_P6               (PIN_ANALOG | PIN_PORTB | PIN6)
#define PIN_ADC1_SE12            (PIN_ANALOG | PIN_PORTB | PIN6)
#define PIN_LCD_P6F              (PIN_ALT7   | PIN_PORTB | PIN6)
#define PIN_LCD_P7               (PIN_ANALOG | PIN_PORTB | PIN7)
#define PIN_ADC1_SE13            (PIN_ANALOG | PIN_PORTB | PIN7)
#define PIN_LCD_P7F              (PIN_ALT7   | PIN_PORTB | PIN7)
#define PIN_LCD_P8               (PIN_ANALOG | PIN_PORTB | PIN8)
#define PIN_UART3_RTS_1          (PIN_ALT3   | PIN_PORTB | PIN8)
#define PIN_LCD_P8F              (PIN_ALT7   | PIN_PORTB | PIN8)
#define PIN_LCD_P9               (PIN_ANALOG | PIN_PORTB | PIN9)
#define PIN_SPI1_PCS1_1          (PIN_ALT2   | PIN_PORTB | PIN9)
#define PIN_UART3_CTS_1          (PIN_ALT3   | PIN_PORTB | PIN9)
#define PIN_LCD_P9F              (PIN_ALT7   | PIN_PORTB | PIN9)
#define PIN_LCD_P10              (PIN_ANALOG | PIN_PORTB | PIN10)
#define PIN_ADC1_SE14            (PIN_ANALOG | PIN_PORTB | PIN10)
#define PIN_SPI1_PCS0_1          (PIN_ALT2   | PIN_PORTB | PIN10)
#define PIN_UART3_RX_1           (PIN_ALT3   | PIN_PORTB | PIN10)
#define PIN_FTM0_FLT1_1          (PIN_ALT6   | PIN_PORTB | PIN10)
#define PIN_LCD_P10F             (PIN_ALT7   | PIN_PORTB | PIN10)
#define PIN_LCD_P11              (PIN_ANALOG | PIN_PORTB | PIN11)
#define PIN_ADC1_SE15            (PIN_ANALOG | PIN_PORTB | PIN11)
#define PIN_SPI1_SCK_1           (PIN_ALT2   | PIN_PORTB | PIN11)
#define PIN_UART3_TX_1           (PIN_ALT3   | PIN_PORTB | PIN11)
#define PIN_FTM0_FLT2_2          (PIN_ALT6   | PIN_PORTB | PIN11)
#define PIN_LCD_P11F             (PIN_ALT7   | PIN_PORTB | PIN11)
#define PIN_LCD_P12              (PIN_ANALOG | PIN_PORTB | PIN16)
#define PIN_TSI0_CH9             (PIN_ANALOG | PIN_PORTB | PIN16)
#define PIN_SPI1_SOUT_1          (PIN_ALT2   | PIN_PORTB | PIN16)
#define PIN_UART0_RX_3           (PIN_ALT3   | PIN_PORTB | PIN16)
#define PIN_EWM_IN_1             (PIN_ALT6   | PIN_PORTB | PIN16)
#define PIN_LCD_P12F             (PIN_ALT7   | PIN_PORTB | PIN16)
#define PIN_LCD_P13              (PIN_ANALOG | PIN_PORTB | PIN17)
#define PIN_TSI0_CH10            (PIN_ANALOG | PIN_PORTB | PIN17)
#define PIN_SPI1_SIN_1           (PIN_ALT2   | PIN_PORTB | PIN17)
#define PIN_UART0_TX_3           (PIN_ALT3   | PIN_PORTB | PIN17)
#define PIN_EWM_OUT_1            (PIN_ALT6   | PIN_PORTB | PIN17)
#define PIN_LCD_P13F             (PIN_ALT7   | PIN_PORTB | PIN17)
#define PIN_LCD_P14              (PIN_ANALOG | PIN_PORTB | PIN18)
#define PIN_TSI0_CH11            (PIN_ANALOG | PIN_PORTB | PIN18)
#define PIN_CAN0_TX_2            (PIN_ALT2   | PIN_PORTB | PIN18)
#define PIN_FTM2_CH0_2           (PIN_ALT3   | PIN_PORTB | PIN18)
#define PIN_I2S0_TX_BCLK_2       (PIN_ALT4   | PIN_PORTB | PIN18)
#define PIN_FTM2_QD_PHA_2        (PIN_ALT6   | PIN_PORTB | PIN18)
#define PIN_LCD_P14F             (PIN_ALT7   | PIN_PORTB | PIN18)
#define PIN_LCD_P15              (PIN_ANALOG | PIN_PORTB | PIN19)
#define PIN_TSI0_CH12            (PIN_ANALOG | PIN_PORTB | PIN19)
#define PIN_CAN0_RX_2            (PIN_ALT2   | PIN_PORTB | PIN19)
#define PIN_FTM2_CH1_2           (PIN_ALT3   | PIN_PORTB | PIN19)
#define PIN_I2S0_TX_FS_2         (PIN_ALT4   | PIN_PORTB | PIN19)
#define PIN_FTM2_QD_PHB_2        (PIN_ALT6   | PIN_PORTB | PIN19)
#define PIN_LCD_P15F             (PIN_ALT7   | PIN_PORTB | PIN19)
#define PIN_LCD_P16              (PIN_ANALOG | PIN_PORTB | PIN20)
#define PIN_SPI2_PCS0_1          (PIN_ALT2   | PIN_PORTB | PIN20)
#define PIN_CMP0_OUT_1           (PIN_ALT6   | PIN_PORTB | PIN20)
#define PIN_LCD_P16F             (PIN_ALT7   | PIN_PORTB | PIN20)
#define PIN_LCD_P17              (PIN_ANALOG | PIN_PORTB | PIN21)
#define PIN_SPI2_SCK_1           (PIN_ALT2   | PIN_PORTB | PIN21)
#define PIN_CMP1_OUT_1           (PIN_ALT6   | PIN_PORTB | PIN21)
#define PIN_LCD_P17F             (PIN_ALT7   | PIN_PORTB | PIN21)
#define PIN_LCD_P18              (PIN_ANALOG | PIN_PORTB | PIN22)
#define PIN_SPI2_SOUT_1          (PIN_ALT2   | PIN_PORTB | PIN22)
#define PIN_CMP2_OUT_2           (PIN_ALT6   | PIN_PORTB | PIN22)
#define PIN_LCD_P18F             (PIN_ALT7   | PIN_PORTB | PIN22)
#define PIN_LCD_P19              (PIN_ANALOG | PIN_PORTB | PIN23)
#define PIN_SPI2_SIN_1           (PIN_ALT2   | PIN_PORTB | PIN23)
#define PIN_SPI0_PCS5            (PIN_ALT3   | PIN_PORTB | PIN23)
#define PIN_LCD_P19F             (PIN_ALT7   | PIN_PORTB | PIN23)

#define PIN_LCD_P20              (PIN_ANALOG | PIN_PORTC | PIN0)
#define PIN_ADC0_SE14            (PIN_ANALOG | PIN_PORTC | PIN0)
#define PIN_TSI0_CH13            (PIN_ANALOG | PIN_PORTC | PIN0)
#define PIN_SPI0_PCS4            (PIN_ALT2   | PIN_PORTC | PIN0)
#define PIN_PDB0_EXTRG_1         (PIN_ALT3   | PIN_PORTC | PIN0)
#define PIN_I2S0_TXD_2           (PIN_ALT4   | PIN_PORTC | PIN0)
#define PIN_LCD_P20F             (PIN_ALT7   | PIN_PORTC | PIN0)
#define PIN_LCD_P21              (PIN_ANALOG | PIN_PORTC | PIN1)
#define PIN_ADC0_SE15            (PIN_ANALOG | PIN_PORTC | PIN1)
#define PIN_TSI0_CH14            (PIN_ANALOG | PIN_PORTC | PIN1)
#define PIN_SPI0_PCS3_1          (PIN_ALT2   | PIN_PORTC | PIN1)
#define PIN_UART1_RTS_1          (PIN_ALT3   | PIN_PORTC | PIN1)
#define PIN_FTM0_CH0_2           (PIN_ALT4   | PIN_PORTC | PIN1)
#define PIN_LCD_P21F             (PIN_ALT7   | PIN_PORTC | PIN1)
#define PIN_LCD_P22              (PIN_ANALOG | PIN_PORTC | PIN2)
#define PIN_ADC0_SE4B            (PIN_ANALOG | PIN_PORTC | PIN2)
#define PIN_CMP1_IN0             (PIN_ANALOG | PIN_PORTC | PIN2)
#define PIN_TSI0_CH15            (PIN_ANALOG | PIN_PORTC | PIN2)
#define PIN_SPI0_PCS2_1          (PIN_ALT2   | PIN_PORTC | PIN2)
#define PIN_UART1_CTS_1          (PIN_ALT3   | PIN_PORTC | PIN2)
#define PIN_FTM0_CH1_2           (PIN_ALT4   | PIN_PORTC | PIN2)
#define PIN_LCD_P22F             (PIN_ALT7   | PIN_PORTC | PIN2)
#define PIN_LCD_P23              (PIN_ANALOG | PIN_PORTC | PIN3)
#define PIN_CMP1_IN1             (PIN_ANALOG | PIN_PORTC | PIN3)
#define PIN_SPI0_PCS1_1          (PIN_ALT2   | PIN_PORTC | PIN3)
#define PIN_UART1_RX_1           (PIN_ALT3   | PIN_PORTC | PIN3)
#define PIN_FTM0_CH2_2           (PIN_ALT4   | PIN_PORTC | PIN3)
#define PIN_LCD_P23F             (PIN_ALT7   | PIN_PORTC | PIN3)
#define PIN_LCD_P24              (PIN_ANALOG | PIN_PORTC | PIN4)
#define PIN_SPI0_PCS0_2          (PIN_ALT2   | PIN_PORTC | PIN4)
#define PIN_UART1_TX_1           (PIN_ALT3   | PIN_PORTC | PIN4)
#define PIN_FTM0_CH3_2           (PIN_ALT4   | PIN_PORTC | PIN4)
#define PIN_CMP1_OUT_2           (PIN_ALT6   | PIN_PORTC | PIN4)
#define PIN_LCD_P24F             (PIN_ALT7   | PIN_PORTC | PIN4)
#define PIN_LCD_P25              (PIN_ANALOG | PIN_PORTC | PIN5)
#define PIN_SPI0_SCK_2           (PIN_ALT2   | PIN_PORTC | PIN5)
#define PIN_LPT0_ALT2            (PIN_ALT4   | PIN_PORTC | PIN5)
#define PIN_CMP0_OUT_2           (PIN_ALT6   | PIN_PORTC | PIN5)
#define PIN_LCD_P25F             (PIN_ALT7   | PIN_PORTC | PIN5)
#define PIN_LCD_P26              (PIN_ANALOG | PIN_PORTC | PIN6)
#define PIN_CMP0_IN0             (PIN_ANALOG | PIN_PORTC | PIN6)
#define PIN_SPI0_SOUT_2          (PIN_ALT2   | PIN_PORTC | PIN6)
#define PIN_PDB0_EXTRG_2         (PIN_ALT3   | PIN_PORTC | PIN6)
#define PIN_LCD_P26F             (PIN_ALT7   | PIN_PORTC | PIN6)
#define PIN_LCD_P27              (PIN_ANALOG | PIN_PORTC | PIN7)
#define PIN_CMP0_IN1             (PIN_ANALOG | PIN_PORTC | PIN7)
#define PIN_SPI0_SIN_2           (PIN_ALT2   | PIN_PORTC | PIN7)
#define PIN_LCD_P27F             (PIN_ALT7   | PIN_PORTC | PIN7)
#define PIN_LCD_P28              (PIN_ANALOG | PIN_PORTC | PIN8)
#define PIN_ADC1_SE4B            (PIN_ANALOG | PIN_PORTC | PIN8)
#define PIN_CMP0_IN2             (PIN_ANALOG | PIN_PORTC | PIN8)
#define PIN_I2S0_MCLK_2          (PIN_ALT4   | PIN_PORTC | PIN8)
#define PIN_I2S0_CLKIN_2         (PIN_ALT5   | PIN_PORTC | PIN8)
#define PIN_LCD_P28F             (PIN_ALT7   | PIN_PORTC | PIN8)
#define PIN_LCD_P29              (PIN_ANALOG | PIN_PORTC | PIN9)
#define PIN_ADC1_SE5B            (PIN_ANALOG | PIN_PORTC | PIN9)
#define PIN_CMP0_IN3             (PIN_ANALOG | PIN_PORTC | PIN9)
#define PIN_I2S0_RX_BCLK_2       (PIN_ALT4   | PIN_PORTC | PIN9)
#define PIN_FTM2_FLT0_2          (PIN_ALT6   | PIN_PORTC | PIN9)
#define PIN_LCD_P29F             (PIN_ALT7   | PIN_PORTC | PIN9)
#define PIN_LCD_P30              (PIN_ANALOG | PIN_PORTC | PIN10)
#define PIN_ADC1_SE6B            (PIN_ANALOG | PIN_PORTC | PIN10)
#define PIN_CMP0_IN4             (PIN_ANALOG | PIN_PORTC | PIN10)
#define PIN_I2C1_SCL_1           (PIN_ALT2   | PIN_PORTC | PIN10)
#define PIN_I2S0_RX_FS_2         (PIN_ALT4   | PIN_PORTC | PIN10)
#define PIN_LCD_P30F             (PIN_ALT7   | PIN_PORTC | PIN10)
#define PIN_LCD_P31              (PIN_ANALOG | PIN_PORTC | PIN11)
#define PIN_ADC1_SE7B            (PIN_ANALOG | PIN_PORTC | PIN11)
#define PIN_I2C1_SDA_1           (PIN_ALT2   | PIN_PORTC | PIN11)
#define PIN_I2S0_RXD_2           (PIN_ALT4   | PIN_PORTC | PIN11)
#define PIN_LCD_P31F             (PIN_ALT7   | PIN_PORTC | PIN11)
#define PIN_LCD_P32              (PIN_ANALOG | PIN_PORTC | PIN12)
#define PIN_UART4_RTS_1          (PIN_ALT3   | PIN_PORTC | PIN12)
#define PIN_LCD_P32F             (PIN_ALT7   | PIN_PORTC | PIN12)
#define PIN_LCD_P33              (PIN_ANALOG | PIN_PORTC | PIN13)
#define PIN_UART4_CTS_1          (PIN_ALT3   | PIN_PORTC | PIN13)
#define PIN_LCD_P33F             (PIN_ALT7   | PIN_PORTC | PIN13)
#define PIN_LCD_P34              (PIN_ANALOG | PIN_PORTC | PIN14)
#define PIN_UART4_RX_1           (PIN_ALT3   | PIN_PORTC | PIN14)
#define PIN_LCD_P34F             (PIN_ALT7   | PIN_PORTC | PIN14)
#define PIN_LCD_P35              (PIN_ANALOG | PIN_PORTC | PIN15)
#define PIN_UART4_TX_1           (PIN_ALT3   | PIN_PORTC | PIN15)
#define PIN_LCD_P35F             (PIN_ALT7   | PIN_PORTC | PIN15)
#define PIN_LCD_P36              (PIN_ANALOG | PIN_PORTC | PIN16)
#define PIN_CAN1_RX_1            (PIN_ALT2   | PIN_PORTC | PIN16)
#define PIN_UART3_RX_2           (PIN_ALT3   | PIN_PORTC | PIN16)
#define PIN_LCD_P36F             (PIN_ALT7   | PIN_PORTC | PIN16)
#define PIN_LCD_P37              (PIN_ANALOG | PIN_PORTC | PIN17)
#define PIN_CAN1_TX_1            (PIN_ALT2   | PIN_PORTC | PIN17)
#define PIN_UART3_TX_2           (PIN_ALT3   | PIN_PORTC | PIN17)
#define PIN_LCD_P37F             (PIN_ALT7   | PIN_PORTC | PIN17)
#define PIN_LCD_P38              (PIN_ANALOG | PIN_PORTC | PIN18)
#define PIN_UART3_RTS_2          (PIN_ALT3   | PIN_PORTC | PIN18)
#define PIN_LCD_P38F             (PIN_ALT7   | PIN_PORTC | PIN18)
#define PIN_LCD_P39              (PIN_ANALOG | PIN_PORTC | PIN19)
#define PIN_UART3_CTS_2          (PIN_ALT3   | PIN_PORTC | PIN19)
#define PIN_LCD_P39F             (PIN_ALT7   | PIN_PORTC | PIN19)

#define PIN_LCD_P40              (PIN_ANALOG | PIN_PORTD | PIN0)
#define PIN_SPI0_PCS0_3          (PIN_ALT2   | PIN_PORTD | PIN0)
#define PIN_UART2_RTS            (PIN_ALT3   | PIN_PORTD | PIN0)
#define PIN_LCD_P40F             (PIN_ALT7   | PIN_PORTD | PIN0)
#define PIN_LCD_P41              (PIN_ANALOG | PIN_PORTD | PIN1)
#define PIN_ADC0_SE5B            (PIN_ANALOG | PIN_PORTD | PIN1)
#define PIN_SPI0_SCK_3           (PIN_ALT2   | PIN_PORTD | PIN1)
#define PIN_UART2_CTS            (PIN_ALT3   | PIN_PORTD | PIN1)
#define PIN_LCD_P41F             (PIN_ALT7   | PIN_PORTD | PIN1)
#define PIN_LCD_P42              (PIN_ANALOG | PIN_PORTD | PIN2)
#define PIN_SPI0_SOUT_3          (PIN_ALT2   | PIN_PORTD | PIN2)
#define PIN_UART2_RX             (PIN_ALT3   | PIN_PORTD | PIN2)
#define PIN_LCD_P42F             (PIN_ALT7   | PIN_PORTD | PIN2)
#define PIN_LCD_P43              (PIN_ANALOG | PIN_PORTD | PIN3)
#define PIN_SPI0_SIN_3           (PIN_ALT2   | PIN_PORTD | PIN3)
#define PIN_UART2_TX             (PIN_ALT3   | PIN_PORTD | PIN3)
#define PIN_LCD_P43F             (PIN_ALT7   | PIN_PORTD | PIN3)
#define PIN_LCD_P44              (PIN_ANALOG | PIN_PORTD | PIN4)
#define PIN_SPI0_PCS1_2          (PIN_ALT2   | PIN_PORTD | PIN4)
#define PIN_UART0_RTS_4          (PIN_ALT3   | PIN_PORTD | PIN4)
#define PIN_FTM0_CH4_2           (PIN_ALT4   | PIN_PORTD | PIN4)
#define PIN_EWM_IN_2             (PIN_ALT6   | PIN_PORTD | PIN4)
#define PIN_LCD_P44F             (PIN_ALT7   | PIN_PORTD | PIN4)
#define PIN_LCD_P45              (PIN_ANALOG | PIN_PORTD | PIN5)
#define PIN_ADC0_SE6B            (PIN_ANALOG | PIN_PORTD | PIN5)
#define PIN_SPI0_PCS2_2          (PIN_ALT2   | PIN_PORTD | PIN5)
#define PIN_UART0_CTS_4          (PIN_ALT3   | PIN_PORTD | PIN5)
#define PIN_FTM0_CH5_2           (PIN_ALT4   | PIN_PORTD | PIN5)
#define PIN_EWM_OUT_2            (PIN_ALT6   | PIN_PORTD | PIN5)
#define PIN_LCD_P45F             (PIN_ALT7   | PIN_PORTD | PIN5)
#define PIN_LCD_P46              (PIN_ANALOG | PIN_PORTD | PIN6)
#define PIN_ADC0_SE7B            (PIN_ANALOG | PIN_PORTD | PIN6)
#define PIN_SPI0_PCS3_2          (PIN_ALT2   | PIN_PORTD | PIN6)
#define PIN_UART0_RX_4           (PIN_ALT3   | PIN_PORTD | PIN6)
#define PIN_FTM0_CH6_2           (PIN_ALT4   | PIN_PORTD | PIN6)
#define PIN_FTM0_FLT0_2          (PIN_ALT6   | PIN_PORTD | PIN6)
#define PIN_LCD_P46F             (PIN_ALT7   | PIN_PORTD | PIN6)
#define PIN_LCD_P47              (PIN_ANALOG | PIN_PORTD | PIN7)
#define PIN_CMT_IRO              (PIN_ALT2   | PIN_PORTD | PIN7)
#define PIN_UART0_TX_4           (PIN_ALT3   | PIN_PORTD | PIN7)
#define PIN_FTM0_CH7_2           (PIN_ALT4   | PIN_PORTD | PIN7)
#define PIN_FTM0_FLT1_2          (PIN_ALT6   | PIN_PORTD | PIN7)
#define PIN_LCD_P47F             (PIN_ALT7   | PIN_PORTD | PIN7)
#define PIN_UART5_RTS_1          (PIN_ALT3   | PIN_PORTD | PIN10)
#define PIN_FB_AD9               (PIN_ALT5   | PIN_PORTD | PIN10)
#define PIN_SPI2_PCS0_2          (PIN_ALT2   | PIN_PORTD | PIN11)
#define PIN_UART5_CTS_1          (PIN_ALT3   | PIN_PORTD | PIN11)
#define PIN_SDHC0_CLKIN          (PIN_ALT4   | PIN_PORTD | PIN11)
#define PIN_FB_AD8               (PIN_ALT5   | PIN_PORTD | PIN11)
#define PIN_SPI2_SCK_2           (PIN_ALT2   | PIN_PORTD | PIN12)
#define PIN_SDHC0_D4             (PIN_ALT4   | PIN_PORTD | PIN12)
#define PIN_FB_AD7               (PIN_ALT5   | PIN_PORTD | PIN12)
#define PIN_SPI2_SOUT_2          (PIN_ALT2   | PIN_PORTD | PIN13)
#define PIN_SDHC0_D5             (PIN_ALT4   | PIN_PORTD | PIN13)
#define PIN_FB_AD6               (PIN_ALT5   | PIN_PORTD | PIN13)
#define PIN_SPI2_SIN_2           (PIN_ALT2   | PIN_PORTD | PIN14)
#define PIN_SDHC0_D6             (PIN_ALT4   | PIN_PORTD | PIN14)
#define PIN_FB_AD5               (PIN_ALT5   | PIN_PORTD | PIN14)
#define PIN_SPI2_PCS1            (PIN_ALT2   | PIN_PORTD | PIN15)
#define PIN_SDHC0_D7             (PIN_ALT4   | PIN_PORTD | PIN15)
#define PIN_FB_RW                (PIN_ALT5   | PIN_PORTD | PIN15)

#define PIN_ADC1_SE4A            (PIN_ANALOG | PIN_PORTE | PIN0)
#define PIN_SPI1_PCS1_2          (PIN_ALT2   | PIN_PORTE | PIN0)
#define PIN_UART1_TX_2           (PIN_ALT3   | PIN_PORTE | PIN0)
#define PIN_SDHC0_D1             (PIN_ALT4   | PIN_PORTE | PIN0)
#define PIN_FB_AD27              (PIN_ALT5   | PIN_PORTE | PIN0)
#define PIN_I2C1_SDA_2           (PIN_ALT6   | PIN_PORTE | PIN0)
#define PIN_ADC1_SE5A            (PIN_ANALOG | PIN_PORTE | PIN1)
#define PIN_SPI1_SOUT_2          (PIN_ALT2   | PIN_PORTE | PIN1)
#define PIN_UART1_RX_2           (PIN_ALT3   | PIN_PORTE | PIN1)
#define PIN_SDHC0_D0             (PIN_ALT4   | PIN_PORTE | PIN1)
#define PIN_FB_AD26              (PIN_ALT5   | PIN_PORTE | PIN1)
#define PIN_I2C1_SCL_2           (PIN_ALT6   | PIN_PORTE | PIN1)
#define PIN_ADC1_SE6A            (PIN_ANALOG | PIN_PORTE | PIN2)
#define PIN_SPI1_SCK_2           (PIN_ALT2   | PIN_PORTE | PIN2)
#define PIN_UART1_CTS_2          (PIN_ALT3   | PIN_PORTE | PIN2)
#define PIN_SDHC0_DCLK           (PIN_ALT4   | PIN_PORTE | PIN2)
#define PIN_FB_AD25              (PIN_ALT5   | PIN_PORTE | PIN2)
#define PIN_ADC1_SE7A            (PIN_ANALOG | PIN_PORTE | PIN3)
#define PIN_SPI1_SIN_2           (PIN_ALT2   | PIN_PORTE | PIN3)
#define PIN_UART1_RTS_2          (PIN_ALT3   | PIN_PORTE | PIN3)
#define PIN_SDHC0_CMD            (PIN_ALT4   | PIN_PORTE | PIN3)
#define PIN_FB_AD24              (PIN_ALT5   | PIN_PORTE | PIN3)
#define PIN_SPI1_PCS0_2          (PIN_ALT2   | PIN_PORTE | PIN4)
#define PIN_UART3_TX_3           (PIN_ALT3   | PIN_PORTE | PIN4)
#define PIN_SDHC0_D3             (PIN_ALT4   | PIN_PORTE | PIN4)
#define PIN_FB_CS3               (PIN_ALT5   | PIN_PORTE | PIN4)
#define PIN_FB_BE7_0_BLS31_24    (PIN_ALT5   | PIN_PORTE | PIN4)
#define PIN_FB_TA                (PIN_ALT6   | PIN_PORTE | PIN4)
#define PIN_SPI1_PCS2            (PIN_ANALOG | PIN_PORTE | PIN5)
#define PIN_UART3_RX_3           (PIN_ALT2   | PIN_PORTE | PIN5)
#define PIN_SDHC0_D2             (PIN_ALT3   | PIN_PORTE | PIN5)
#define PIN_FB_TBST              (PIN_ALT4   | PIN_PORTE | PIN5)
#define PIN_FB_CS2               (PIN_ALT5   | PIN_PORTE | PIN5)
#define PIN_FB_BE15_8_BLS23_16   (PIN_ALT5   | PIN_PORTE | PIN5)
#define PIN_SPI1_PCS3            (PIN_ALT2   | PIN_PORTE | PIN6)
#define PIN_UART3_CTS_3          (PIN_ALT3   | PIN_PORTE | PIN6)
#define PIN_I2S0_MCLK_3          (PIN_ALT4   | PIN_PORTE | PIN6)
#define PIN_FB_ALE               (PIN_ALT5   | PIN_PORTE | PIN6)
#define PIN_FB_CS1               (PIN_ALT5   | PIN_PORTE | PIN6)
#define PIN_FB_TS                (PIN_ALT5   | PIN_PORTE | PIN6)
#define PIN_I2S0_CLKIN_3         (PIN_ALT6   | PIN_PORTE | PIN6)
#define PIN_UART3_RTS_3          (PIN_ALT3   | PIN_PORTE | PIN7)
#define PIN_I2S0_RXD_3           (PIN_ALT4   | PIN_PORTE | PIN7)
#define PIN_FB_CS0               (PIN_ALT5   | PIN_PORTE | PIN7)
#define PIN_UART5_TX             (PIN_ALT3   | PIN_PORTE | PIN8)
#define PIN_I2S0_RX_FS_3         (PIN_ALT4   | PIN_PORTE | PIN8)
#define PIN_FB_AD4               (PIN_ALT5   | PIN_PORTE | PIN8)
#define PIN_UART5_RX             (PIN_ALT3   | PIN_PORTE | PIN9)
#define PIN_I2S0_RX_BCLK_3       (PIN_ALT4   | PIN_PORTE | PIN9)
#define PIN_FB_AD3               (PIN_ALT5   | PIN_PORTE | PIN9)
#define PIN_UART5_CTS_2          (PIN_ALT3   | PIN_PORTE | PIN10)
#define PIN_I2S0_TXD_3           (PIN_ALT4   | PIN_PORTE | PIN10)
#define PIN_FB_AD2               (PIN_ALT5   | PIN_PORTE | PIN10)
#define PIN_UART5_RTS_2          (PIN_ALT3   | PIN_PORTE | PIN11)
#define PIN_I2S0_TX_FS_3         (PIN_ALT4   | PIN_PORTE | PIN11)
#define PIN_FB_AD1               (PIN_ALT5   | PIN_PORTE | PIN11)
#define PIN_I2S0_TX_BCLK_3       (PIN_ALT4   | PIN_PORTE | PIN12)
#define PIN_FB_AD0               (PIN_ALT5   | PIN_PORTE | PIN12)
#define PIN_ADC0_SE17            (PIN_ANALOG | PIN_PORTE | PIN24)
#define PIN_CAN1_TX_2            (PIN_ALT2   | PIN_PORTE | PIN24)
#define PIN_UART4_TX_2           (PIN_ALT3   | PIN_PORTE | PIN24)
#define PIN_EWM_OUT_3            (PIN_ALT6   | PIN_PORTE | PIN24)
#define PIN_ADC0_SE18            (PIN_ANALOG | PIN_PORTE | PIN25)
#define PIN_CAN1_RX_2            (PIN_ALT2   | PIN_PORTE | PIN25)
#define PIN_UART4_RX_2           (PIN_ALT3   | PIN_PORTE | PIN25)
#define PIN_FB_AD23              (PIN_ALT5   | PIN_PORTE | PIN25)
#define PIN_EWM_IN_3             (PIN_ALT6   | PIN_PORTE | PIN25)
#define PIN_UART4_CTS_2          (PIN_ALT3   | PIN_PORTE | PIN26)
#define PIN_FB_AD22              (PIN_ALT5   | PIN_PORTE | PIN26)
#define PIN_RTC_CLKOUT           (PIN_ALT6   | PIN_PORTE | PIN26)
#define PIN_USB_CLKIN            (PIN_ALT7   | PIN_PORTE | PIN26)
#define PIN_UART4_RTS_2          (PIN_ALT3   | PIN_PORTE | PIN27)
#define PIN_FB_AD21              (PIN_ALT5   | PIN_PORTE | PIN27)
#define PIN_FB_AD20              (PIN_ALT5   | PIN_PORTE | PIN28)

#else
  /* The pin muxing for other K40 parts is defined in other documents */

#  error "No pin multiplexing for this Kinetis K40 part"
#endif

/********************************************************************************************
 * Public Types
 ********************************************************************************************/

/********************************************************************************************
 * Public Data
 ********************************************************************************************/

/********************************************************************************************
 * Public Functions
 ********************************************************************************************/

#endif /* __ARCH_ARM_SRC_KINETIS_KINETIS_K40PINMUX_H */
