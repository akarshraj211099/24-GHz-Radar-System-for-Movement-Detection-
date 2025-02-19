/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* ADC */
#define ADC_DEC__COHER CYREG_DEC_COHER
#define ADC_DEC__CR CYREG_DEC_CR
#define ADC_DEC__DR1 CYREG_DEC_DR1
#define ADC_DEC__DR2 CYREG_DEC_DR2
#define ADC_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DEC__PM_ACT_MSK 0x01u
#define ADC_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DEC__PM_STBY_MSK 0x01u
#define ADC_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DEC__SR CYREG_DEC_SR
#define ADC_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8
#define ADC_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DSM__CLK CYREG_DSM0_CLK
#define ADC_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DSM__MISC CYREG_DSM0_MISC
#define ADC_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DSM__TST1 CYREG_DSM0_TST1
#define ADC_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_Ext_CP_Clk__INDEX 0x00u
#define ADC_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_Ext_CP_Clk__PM_STBY_MSK 0x01u
#define ADC_in__0__INTTYPE CYREG_PICU15_INTTYPE5
#define ADC_in__0__MASK 0x20u
#define ADC_in__0__PC CYREG_IO_PC_PRT15_PC5
#define ADC_in__0__PORT 15u
#define ADC_in__0__SHIFT 5u
#define ADC_in__AG CYREG_PRT15_AG
#define ADC_in__AMUX CYREG_PRT15_AMUX
#define ADC_in__BIE CYREG_PRT15_BIE
#define ADC_in__BIT_MASK CYREG_PRT15_BIT_MASK
#define ADC_in__BYP CYREG_PRT15_BYP
#define ADC_in__CTL CYREG_PRT15_CTL
#define ADC_in__DM0 CYREG_PRT15_DM0
#define ADC_in__DM1 CYREG_PRT15_DM1
#define ADC_in__DM2 CYREG_PRT15_DM2
#define ADC_in__DR CYREG_PRT15_DR
#define ADC_in__INP_DIS CYREG_PRT15_INP_DIS
#define ADC_in__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define ADC_in__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define ADC_in__LCD_EN CYREG_PRT15_LCD_EN
#define ADC_in__MASK 0x20u
#define ADC_in__PORT 15u
#define ADC_in__PRT CYREG_PRT15_PRT
#define ADC_in__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define ADC_in__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define ADC_in__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define ADC_in__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define ADC_in__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define ADC_in__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define ADC_in__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define ADC_in__PS CYREG_PRT15_PS
#define ADC_in__SHIFT 5u
#define ADC_in__SLW CYREG_PRT15_SLW
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_IRQ__INTC_MASK 0x20000000u
#define ADC_IRQ__INTC_NUMBER 29u
#define ADC_IRQ__INTC_PRIOR_NUM 7u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define ADC_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_theACLK__INDEX 0x00u
#define ADC_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_theACLK__PM_ACT_MSK 0x01u
#define ADC_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_theACLK__PM_STBY_MSK 0x01u

/* DAC */
#define DAC__0__INTTYPE CYREG_PICU4_INTTYPE0
#define DAC__0__MASK 0x01u
#define DAC__0__PC CYREG_PRT4_PC0
#define DAC__0__PORT 4u
#define DAC__0__SHIFT 0u
#define DAC__AG CYREG_PRT4_AG
#define DAC__AMUX CYREG_PRT4_AMUX
#define DAC__BIE CYREG_PRT4_BIE
#define DAC__BIT_MASK CYREG_PRT4_BIT_MASK
#define DAC__BYP CYREG_PRT4_BYP
#define DAC__CTL CYREG_PRT4_CTL
#define DAC__DM0 CYREG_PRT4_DM0
#define DAC__DM1 CYREG_PRT4_DM1
#define DAC__DM2 CYREG_PRT4_DM2
#define DAC__DR CYREG_PRT4_DR
#define DAC__INP_DIS CYREG_PRT4_INP_DIS
#define DAC__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU4_BASE
#define DAC__LCD_COM_SEG CYREG_PRT4_LCD_COM_SEG
#define DAC__LCD_EN CYREG_PRT4_LCD_EN
#define DAC__MASK 0x01u
#define DAC__PORT 4u
#define DAC__PRT CYREG_PRT4_PRT
#define DAC__PRTDSI__CAPS_SEL CYREG_PRT4_CAPS_SEL
#define DAC__PRTDSI__DBL_SYNC_IN CYREG_PRT4_DBL_SYNC_IN
#define DAC__PRTDSI__OE_SEL0 CYREG_PRT4_OE_SEL0
#define DAC__PRTDSI__OE_SEL1 CYREG_PRT4_OE_SEL1
#define DAC__PRTDSI__OUT_SEL0 CYREG_PRT4_OUT_SEL0
#define DAC__PRTDSI__OUT_SEL1 CYREG_PRT4_OUT_SEL1
#define DAC__PRTDSI__SYNC_OUT CYREG_PRT4_SYNC_OUT
#define DAC__PS CYREG_PRT4_PS
#define DAC__SHIFT 0u
#define DAC__SLW CYREG_PRT4_SLW

/* ISR_PB */
#define ISR_PB__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_PB__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_PB__INTC_MASK 0x40u
#define ISR_PB__INTC_NUMBER 6u
#define ISR_PB__INTC_PRIOR_NUM 7u
#define ISR_PB__INTC_PRIOR_REG CYREG_NVIC_PRI_6
#define ISR_PB__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_PB__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Red_LED */
#define Red_LED__0__INTTYPE CYREG_PICU2_INTTYPE6
#define Red_LED__0__MASK 0x40u
#define Red_LED__0__PC CYREG_PRT2_PC6
#define Red_LED__0__PORT 2u
#define Red_LED__0__SHIFT 6u
#define Red_LED__AG CYREG_PRT2_AG
#define Red_LED__AMUX CYREG_PRT2_AMUX
#define Red_LED__BIE CYREG_PRT2_BIE
#define Red_LED__BIT_MASK CYREG_PRT2_BIT_MASK
#define Red_LED__BYP CYREG_PRT2_BYP
#define Red_LED__CTL CYREG_PRT2_CTL
#define Red_LED__DM0 CYREG_PRT2_DM0
#define Red_LED__DM1 CYREG_PRT2_DM1
#define Red_LED__DM2 CYREG_PRT2_DM2
#define Red_LED__DR CYREG_PRT2_DR
#define Red_LED__INP_DIS CYREG_PRT2_INP_DIS
#define Red_LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Red_LED__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Red_LED__LCD_EN CYREG_PRT2_LCD_EN
#define Red_LED__MASK 0x40u
#define Red_LED__PORT 2u
#define Red_LED__PRT CYREG_PRT2_PRT
#define Red_LED__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Red_LED__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Red_LED__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Red_LED__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Red_LED__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Red_LED__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Red_LED__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Red_LED__PS CYREG_PRT2_PS
#define Red_LED__SHIFT 6u
#define Red_LED__SLW CYREG_PRT2_SLW

/* Debug_Rx */
#define Debug_Rx__0__INTTYPE CYREG_PICU2_INTTYPE0
#define Debug_Rx__0__MASK 0x01u
#define Debug_Rx__0__PC CYREG_PRT2_PC0
#define Debug_Rx__0__PORT 2u
#define Debug_Rx__0__SHIFT 0u
#define Debug_Rx__AG CYREG_PRT2_AG
#define Debug_Rx__AMUX CYREG_PRT2_AMUX
#define Debug_Rx__BIE CYREG_PRT2_BIE
#define Debug_Rx__BIT_MASK CYREG_PRT2_BIT_MASK
#define Debug_Rx__BYP CYREG_PRT2_BYP
#define Debug_Rx__CTL CYREG_PRT2_CTL
#define Debug_Rx__DM0 CYREG_PRT2_DM0
#define Debug_Rx__DM1 CYREG_PRT2_DM1
#define Debug_Rx__DM2 CYREG_PRT2_DM2
#define Debug_Rx__DR CYREG_PRT2_DR
#define Debug_Rx__INP_DIS CYREG_PRT2_INP_DIS
#define Debug_Rx__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Debug_Rx__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Debug_Rx__LCD_EN CYREG_PRT2_LCD_EN
#define Debug_Rx__MASK 0x01u
#define Debug_Rx__PORT 2u
#define Debug_Rx__PRT CYREG_PRT2_PRT
#define Debug_Rx__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Debug_Rx__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Debug_Rx__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Debug_Rx__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Debug_Rx__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Debug_Rx__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Debug_Rx__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Debug_Rx__PS CYREG_PRT2_PS
#define Debug_Rx__SHIFT 0u
#define Debug_Rx__SLW CYREG_PRT2_SLW

/* Debug_Tx */
#define Debug_Tx__0__INTTYPE CYREG_PICU2_INTTYPE1
#define Debug_Tx__0__MASK 0x02u
#define Debug_Tx__0__PC CYREG_PRT2_PC1
#define Debug_Tx__0__PORT 2u
#define Debug_Tx__0__SHIFT 1u
#define Debug_Tx__AG CYREG_PRT2_AG
#define Debug_Tx__AMUX CYREG_PRT2_AMUX
#define Debug_Tx__BIE CYREG_PRT2_BIE
#define Debug_Tx__BIT_MASK CYREG_PRT2_BIT_MASK
#define Debug_Tx__BYP CYREG_PRT2_BYP
#define Debug_Tx__CTL CYREG_PRT2_CTL
#define Debug_Tx__DM0 CYREG_PRT2_DM0
#define Debug_Tx__DM1 CYREG_PRT2_DM1
#define Debug_Tx__DM2 CYREG_PRT2_DM2
#define Debug_Tx__DR CYREG_PRT2_DR
#define Debug_Tx__INP_DIS CYREG_PRT2_INP_DIS
#define Debug_Tx__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Debug_Tx__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Debug_Tx__LCD_EN CYREG_PRT2_LCD_EN
#define Debug_Tx__MASK 0x02u
#define Debug_Tx__PORT 2u
#define Debug_Tx__PRT CYREG_PRT2_PRT
#define Debug_Tx__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Debug_Tx__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Debug_Tx__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Debug_Tx__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Debug_Tx__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Debug_Tx__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Debug_Tx__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Debug_Tx__PS CYREG_PRT2_PS
#define Debug_Tx__SHIFT 1u
#define Debug_Tx__SLW CYREG_PRT2_SLW

/* ISR_UART */
#define ISR_UART__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ISR_UART__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ISR_UART__INTC_MASK 0x01u
#define ISR_UART__INTC_NUMBER 0u
#define ISR_UART__INTC_PRIOR_NUM 7u
#define ISR_UART__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ISR_UART__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ISR_UART__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* UART_LOG */
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB10_11_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB10_11_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB10_11_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB10_11_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB10_11_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB10_11_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB10_11_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB10_11_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB10_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB10_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB10_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB10_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB10_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB10_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB10_MSK
#define UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB10_11_ST
#define UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB10_MSK
#define UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB10_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB10_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB10_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB10_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB10_ST
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB13_14_A0
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB13_14_A1
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB13_14_D0
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB13_14_D1
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB13_14_F0
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB13_14_F1
#define UART_LOG_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB13_A0_A1
#define UART_LOG_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB13_A0
#define UART_LOG_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB13_A1
#define UART_LOG_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB13_D0_D1
#define UART_LOG_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB13_D0
#define UART_LOG_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB13_D1
#define UART_LOG_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define UART_LOG_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB13_F0_F1
#define UART_LOG_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB13_F0
#define UART_LOG_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB13_F1
#define UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB14_15_ST
#define UART_LOG_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_LOG_BUART_sRX_RxSts__3__POS 3
#define UART_LOG_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_LOG_BUART_sRX_RxSts__4__POS 4
#define UART_LOG_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_LOG_BUART_sRX_RxSts__5__POS 5
#define UART_LOG_BUART_sRX_RxSts__MASK 0x38u
#define UART_LOG_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB14_MSK
#define UART_LOG_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_LOG_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB14_ST
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB10_11_A0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB10_11_A1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB10_11_D0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB10_11_D1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB10_11_F0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB10_11_F1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB10_A0_A1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB10_A0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB10_A1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB10_D0_D1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB10_D0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB10_D1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB10_F0_F1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB10_F0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB10_F1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__MSK_DP_AUX_CTL_REG CYREG_B0_UDB10_MSK_ACTL
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__PER_DP_AUX_CTL_REG CYREG_B0_UDB10_MSK_ACTL
#define UART_LOG_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB15_A0_A1
#define UART_LOG_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB15_A0
#define UART_LOG_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB15_A1
#define UART_LOG_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB15_D0_D1
#define UART_LOG_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB15_D0
#define UART_LOG_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB15_D1
#define UART_LOG_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB15_ACTL
#define UART_LOG_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB15_F0_F1
#define UART_LOG_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB15_F0
#define UART_LOG_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB15_F1
#define UART_LOG_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_LOG_BUART_sTX_TxSts__0__POS 0
#define UART_LOG_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_LOG_BUART_sTX_TxSts__1__POS 1
#define UART_LOG_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_LOG_BUART_sTX_TxSts__2__POS 2
#define UART_LOG_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_LOG_BUART_sTX_TxSts__3__POS 3
#define UART_LOG_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_LOG_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB15_MSK
#define UART_LOG_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB15_ACTL
#define UART_LOG_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB15_ST
#define UART_LOG_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define UART_LOG_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define UART_LOG_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define UART_LOG_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_LOG_IntClock__INDEX 0x01u
#define UART_LOG_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_LOG_IntClock__PM_ACT_MSK 0x02u
#define UART_LOG_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_LOG_IntClock__PM_STBY_MSK 0x02u
#define UART_LOG_TXInternalInterrupt__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define UART_LOG_TXInternalInterrupt__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define UART_LOG_TXInternalInterrupt__INTC_MASK 0x02u
#define UART_LOG_TXInternalInterrupt__INTC_NUMBER 1u
#define UART_LOG_TXInternalInterrupt__INTC_PRIOR_NUM 7u
#define UART_LOG_TXInternalInterrupt__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define UART_LOG_TXInternalInterrupt__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define UART_LOG_TXInternalInterrupt__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* User_LED */
#define User_LED__0__INTTYPE CYREG_PICU6_INTTYPE7
#define User_LED__0__MASK 0x80u
#define User_LED__0__PC CYREG_PRT6_PC7
#define User_LED__0__PORT 6u
#define User_LED__0__SHIFT 7u
#define User_LED__AG CYREG_PRT6_AG
#define User_LED__AMUX CYREG_PRT6_AMUX
#define User_LED__BIE CYREG_PRT6_BIE
#define User_LED__BIT_MASK CYREG_PRT6_BIT_MASK
#define User_LED__BYP CYREG_PRT6_BYP
#define User_LED__CTL CYREG_PRT6_CTL
#define User_LED__DM0 CYREG_PRT6_DM0
#define User_LED__DM1 CYREG_PRT6_DM1
#define User_LED__DM2 CYREG_PRT6_DM2
#define User_LED__DR CYREG_PRT6_DR
#define User_LED__INP_DIS CYREG_PRT6_INP_DIS
#define User_LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU6_BASE
#define User_LED__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define User_LED__LCD_EN CYREG_PRT6_LCD_EN
#define User_LED__MASK 0x80u
#define User_LED__PORT 6u
#define User_LED__PRT CYREG_PRT6_PRT
#define User_LED__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define User_LED__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define User_LED__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define User_LED__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define User_LED__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define User_LED__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define User_LED__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define User_LED__PS CYREG_PRT6_PS
#define User_LED__SHIFT 7u
#define User_LED__SLW CYREG_PRT6_SLW

/* WaveDAC8 */
#define WaveDAC8_DacClk__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define WaveDAC8_DacClk__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define WaveDAC8_DacClk__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define WaveDAC8_DacClk__CFG2_SRC_SEL_MASK 0x07u
#define WaveDAC8_DacClk__INDEX 0x02u
#define WaveDAC8_DacClk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define WaveDAC8_DacClk__PM_ACT_MSK 0x04u
#define WaveDAC8_DacClk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define WaveDAC8_DacClk__PM_STBY_MSK 0x04u
#define WaveDAC8_VDAC8_viDAC8__CR0 CYREG_DAC2_CR0
#define WaveDAC8_VDAC8_viDAC8__CR1 CYREG_DAC2_CR1
#define WaveDAC8_VDAC8_viDAC8__D CYREG_DAC2_D
#define WaveDAC8_VDAC8_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define WaveDAC8_VDAC8_viDAC8__PM_ACT_MSK 0x04u
#define WaveDAC8_VDAC8_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define WaveDAC8_VDAC8_viDAC8__PM_STBY_MSK 0x04u
#define WaveDAC8_VDAC8_viDAC8__STROBE CYREG_DAC2_STROBE
#define WaveDAC8_VDAC8_viDAC8__SW0 CYREG_DAC2_SW0
#define WaveDAC8_VDAC8_viDAC8__SW2 CYREG_DAC2_SW2
#define WaveDAC8_VDAC8_viDAC8__SW3 CYREG_DAC2_SW3
#define WaveDAC8_VDAC8_viDAC8__SW4 CYREG_DAC2_SW4
#define WaveDAC8_VDAC8_viDAC8__TR CYREG_DAC2_TR
#define WaveDAC8_VDAC8_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC2_M1
#define WaveDAC8_VDAC8_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC2_M2
#define WaveDAC8_VDAC8_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC2_M3
#define WaveDAC8_VDAC8_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC2_M4
#define WaveDAC8_VDAC8_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC2_M5
#define WaveDAC8_VDAC8_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC2_M6
#define WaveDAC8_VDAC8_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC2_M7
#define WaveDAC8_VDAC8_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC2_M8
#define WaveDAC8_VDAC8_viDAC8__TST CYREG_DAC2_TST
#define WaveDAC8_Wave1_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_Wave1_DMA__DRQ_NUMBER 0u
#define WaveDAC8_Wave1_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_Wave1_DMA__PRIORITY 2u
#define WaveDAC8_Wave1_DMA__TERMIN_EN 0u
#define WaveDAC8_Wave1_DMA__TERMIN_SEL 0u
#define WaveDAC8_Wave1_DMA__TERMOUT0_EN 0u
#define WaveDAC8_Wave1_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_Wave1_DMA__TERMOUT1_EN 0u
#define WaveDAC8_Wave1_DMA__TERMOUT1_SEL 0u
#define WaveDAC8_Wave2_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_Wave2_DMA__DRQ_NUMBER 1u
#define WaveDAC8_Wave2_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_Wave2_DMA__PRIORITY 2u
#define WaveDAC8_Wave2_DMA__TERMIN_EN 0u
#define WaveDAC8_Wave2_DMA__TERMIN_SEL 0u
#define WaveDAC8_Wave2_DMA__TERMOUT0_EN 0u
#define WaveDAC8_Wave2_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_Wave2_DMA__TERMOUT1_EN 0u
#define WaveDAC8_Wave2_DMA__TERMOUT1_SEL 0u

/* Green_LED */
#define Green_LED__0__INTTYPE CYREG_PICU2_INTTYPE4
#define Green_LED__0__MASK 0x10u
#define Green_LED__0__PC CYREG_PRT2_PC4
#define Green_LED__0__PORT 2u
#define Green_LED__0__SHIFT 4u
#define Green_LED__AG CYREG_PRT2_AG
#define Green_LED__AMUX CYREG_PRT2_AMUX
#define Green_LED__BIE CYREG_PRT2_BIE
#define Green_LED__BIT_MASK CYREG_PRT2_BIT_MASK
#define Green_LED__BYP CYREG_PRT2_BYP
#define Green_LED__CTL CYREG_PRT2_CTL
#define Green_LED__DM0 CYREG_PRT2_DM0
#define Green_LED__DM1 CYREG_PRT2_DM1
#define Green_LED__DM2 CYREG_PRT2_DM2
#define Green_LED__DR CYREG_PRT2_DR
#define Green_LED__INP_DIS CYREG_PRT2_INP_DIS
#define Green_LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Green_LED__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Green_LED__LCD_EN CYREG_PRT2_LCD_EN
#define Green_LED__MASK 0x10u
#define Green_LED__PORT 2u
#define Green_LED__PRT CYREG_PRT2_PRT
#define Green_LED__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Green_LED__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Green_LED__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Green_LED__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Green_LED__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Green_LED__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Green_LED__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Green_LED__PS CYREG_PRT2_PS
#define Green_LED__SHIFT 4u
#define Green_LED__SLW CYREG_PRT2_SLW

/* Yellow_LED */
#define Yellow_LED__0__INTTYPE CYREG_PICU2_INTTYPE5
#define Yellow_LED__0__MASK 0x20u
#define Yellow_LED__0__PC CYREG_PRT2_PC5
#define Yellow_LED__0__PORT 2u
#define Yellow_LED__0__SHIFT 5u
#define Yellow_LED__AG CYREG_PRT2_AG
#define Yellow_LED__AMUX CYREG_PRT2_AMUX
#define Yellow_LED__BIE CYREG_PRT2_BIE
#define Yellow_LED__BIT_MASK CYREG_PRT2_BIT_MASK
#define Yellow_LED__BYP CYREG_PRT2_BYP
#define Yellow_LED__CTL CYREG_PRT2_CTL
#define Yellow_LED__DM0 CYREG_PRT2_DM0
#define Yellow_LED__DM1 CYREG_PRT2_DM1
#define Yellow_LED__DM2 CYREG_PRT2_DM2
#define Yellow_LED__DR CYREG_PRT2_DR
#define Yellow_LED__INP_DIS CYREG_PRT2_INP_DIS
#define Yellow_LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Yellow_LED__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Yellow_LED__LCD_EN CYREG_PRT2_LCD_EN
#define Yellow_LED__MASK 0x20u
#define Yellow_LED__PORT 2u
#define Yellow_LED__PRT CYREG_PRT2_PRT
#define Yellow_LED__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Yellow_LED__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Yellow_LED__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Yellow_LED__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Yellow_LED__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Yellow_LED__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Yellow_LED__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Yellow_LED__PS CYREG_PRT2_PS
#define Yellow_LED__SHIFT 5u
#define Yellow_LED__SLW CYREG_PRT2_SLW

/* Push_button */
#define Push_button__0__INTTYPE CYREG_PICU2_INTTYPE7
#define Push_button__0__MASK 0x80u
#define Push_button__0__PC CYREG_PRT2_PC7
#define Push_button__0__PORT 2u
#define Push_button__0__SHIFT 7u
#define Push_button__AG CYREG_PRT2_AG
#define Push_button__AMUX CYREG_PRT2_AMUX
#define Push_button__BIE CYREG_PRT2_BIE
#define Push_button__BIT_MASK CYREG_PRT2_BIT_MASK
#define Push_button__BYP CYREG_PRT2_BYP
#define Push_button__CTL CYREG_PRT2_CTL
#define Push_button__DM0 CYREG_PRT2_DM0
#define Push_button__DM1 CYREG_PRT2_DM1
#define Push_button__DM2 CYREG_PRT2_DM2
#define Push_button__DR CYREG_PRT2_DR
#define Push_button__INP_DIS CYREG_PRT2_INP_DIS
#define Push_button__INTSTAT CYREG_PICU2_INTSTAT
#define Push_button__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Push_button__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Push_button__LCD_EN CYREG_PRT2_LCD_EN
#define Push_button__MASK 0x80u
#define Push_button__PORT 2u
#define Push_button__PRT CYREG_PRT2_PRT
#define Push_button__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Push_button__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Push_button__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Push_button__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Push_button__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Push_button__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Push_button__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Push_button__PS CYREG_PRT2_PS
#define Push_button__SHIFT 7u
#define Push_button__SLW CYREG_PRT2_SLW
#define Push_button__SNAP CYREG_PICU2_SNAP

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "D5-RADAR_Detection"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E160069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x2000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000003u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
