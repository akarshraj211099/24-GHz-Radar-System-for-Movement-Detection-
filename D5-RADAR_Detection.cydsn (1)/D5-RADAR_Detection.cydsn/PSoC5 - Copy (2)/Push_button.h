/*******************************************************************************
* File Name: Push_button.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Push_button_H) /* Pins Push_button_H */
#define CY_PINS_Push_button_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Push_button_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Push_button__PORT == 15 && ((Push_button__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Push_button_Write(uint8 value);
void    Push_button_SetDriveMode(uint8 mode);
uint8   Push_button_ReadDataReg(void);
uint8   Push_button_Read(void);
void    Push_button_SetInterruptMode(uint16 position, uint16 mode);
uint8   Push_button_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Push_button_SetDriveMode() function.
     *  @{
     */
        #define Push_button_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Push_button_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Push_button_DM_RES_UP          PIN_DM_RES_UP
        #define Push_button_DM_RES_DWN         PIN_DM_RES_DWN
        #define Push_button_DM_OD_LO           PIN_DM_OD_LO
        #define Push_button_DM_OD_HI           PIN_DM_OD_HI
        #define Push_button_DM_STRONG          PIN_DM_STRONG
        #define Push_button_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Push_button_MASK               Push_button__MASK
#define Push_button_SHIFT              Push_button__SHIFT
#define Push_button_WIDTH              1u

/* Interrupt constants */
#if defined(Push_button__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Push_button_SetInterruptMode() function.
     *  @{
     */
        #define Push_button_INTR_NONE      (uint16)(0x0000u)
        #define Push_button_INTR_RISING    (uint16)(0x0001u)
        #define Push_button_INTR_FALLING   (uint16)(0x0002u)
        #define Push_button_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Push_button_INTR_MASK      (0x01u) 
#endif /* (Push_button__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Push_button_PS                     (* (reg8 *) Push_button__PS)
/* Data Register */
#define Push_button_DR                     (* (reg8 *) Push_button__DR)
/* Port Number */
#define Push_button_PRT_NUM                (* (reg8 *) Push_button__PRT) 
/* Connect to Analog Globals */                                                  
#define Push_button_AG                     (* (reg8 *) Push_button__AG)                       
/* Analog MUX bux enable */
#define Push_button_AMUX                   (* (reg8 *) Push_button__AMUX) 
/* Bidirectional Enable */                                                        
#define Push_button_BIE                    (* (reg8 *) Push_button__BIE)
/* Bit-mask for Aliased Register Access */
#define Push_button_BIT_MASK               (* (reg8 *) Push_button__BIT_MASK)
/* Bypass Enable */
#define Push_button_BYP                    (* (reg8 *) Push_button__BYP)
/* Port wide control signals */                                                   
#define Push_button_CTL                    (* (reg8 *) Push_button__CTL)
/* Drive Modes */
#define Push_button_DM0                    (* (reg8 *) Push_button__DM0) 
#define Push_button_DM1                    (* (reg8 *) Push_button__DM1)
#define Push_button_DM2                    (* (reg8 *) Push_button__DM2) 
/* Input Buffer Disable Override */
#define Push_button_INP_DIS                (* (reg8 *) Push_button__INP_DIS)
/* LCD Common or Segment Drive */
#define Push_button_LCD_COM_SEG            (* (reg8 *) Push_button__LCD_COM_SEG)
/* Enable Segment LCD */
#define Push_button_LCD_EN                 (* (reg8 *) Push_button__LCD_EN)
/* Slew Rate Control */
#define Push_button_SLW                    (* (reg8 *) Push_button__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Push_button_PRTDSI__CAPS_SEL       (* (reg8 *) Push_button__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Push_button_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Push_button__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Push_button_PRTDSI__OE_SEL0        (* (reg8 *) Push_button__PRTDSI__OE_SEL0) 
#define Push_button_PRTDSI__OE_SEL1        (* (reg8 *) Push_button__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Push_button_PRTDSI__OUT_SEL0       (* (reg8 *) Push_button__PRTDSI__OUT_SEL0) 
#define Push_button_PRTDSI__OUT_SEL1       (* (reg8 *) Push_button__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Push_button_PRTDSI__SYNC_OUT       (* (reg8 *) Push_button__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Push_button__SIO_CFG)
    #define Push_button_SIO_HYST_EN        (* (reg8 *) Push_button__SIO_HYST_EN)
    #define Push_button_SIO_REG_HIFREQ     (* (reg8 *) Push_button__SIO_REG_HIFREQ)
    #define Push_button_SIO_CFG            (* (reg8 *) Push_button__SIO_CFG)
    #define Push_button_SIO_DIFF           (* (reg8 *) Push_button__SIO_DIFF)
#endif /* (Push_button__SIO_CFG) */

/* Interrupt Registers */
#if defined(Push_button__INTSTAT)
    #define Push_button_INTSTAT            (* (reg8 *) Push_button__INTSTAT)
    #define Push_button_SNAP               (* (reg8 *) Push_button__SNAP)
    
	#define Push_button_0_INTTYPE_REG 		(* (reg8 *) Push_button__0__INTTYPE)
#endif /* (Push_button__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Push_button_H */


/* [] END OF FILE */
