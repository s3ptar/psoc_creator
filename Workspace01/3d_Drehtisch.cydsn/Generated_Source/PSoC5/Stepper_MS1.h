/*******************************************************************************
* File Name: Stepper_MS1.h  
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

#if !defined(CY_PINS_Stepper_MS1_H) /* Pins Stepper_MS1_H */
#define CY_PINS_Stepper_MS1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Stepper_MS1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Stepper_MS1__PORT == 15 && ((Stepper_MS1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Stepper_MS1_Write(uint8 value);
void    Stepper_MS1_SetDriveMode(uint8 mode);
uint8   Stepper_MS1_ReadDataReg(void);
uint8   Stepper_MS1_Read(void);
void    Stepper_MS1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Stepper_MS1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Stepper_MS1_SetDriveMode() function.
     *  @{
     */
        #define Stepper_MS1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Stepper_MS1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Stepper_MS1_DM_RES_UP          PIN_DM_RES_UP
        #define Stepper_MS1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Stepper_MS1_DM_OD_LO           PIN_DM_OD_LO
        #define Stepper_MS1_DM_OD_HI           PIN_DM_OD_HI
        #define Stepper_MS1_DM_STRONG          PIN_DM_STRONG
        #define Stepper_MS1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Stepper_MS1_MASK               Stepper_MS1__MASK
#define Stepper_MS1_SHIFT              Stepper_MS1__SHIFT
#define Stepper_MS1_WIDTH              1u

/* Interrupt constants */
#if defined(Stepper_MS1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Stepper_MS1_SetInterruptMode() function.
     *  @{
     */
        #define Stepper_MS1_INTR_NONE      (uint16)(0x0000u)
        #define Stepper_MS1_INTR_RISING    (uint16)(0x0001u)
        #define Stepper_MS1_INTR_FALLING   (uint16)(0x0002u)
        #define Stepper_MS1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Stepper_MS1_INTR_MASK      (0x01u) 
#endif /* (Stepper_MS1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Stepper_MS1_PS                     (* (reg8 *) Stepper_MS1__PS)
/* Data Register */
#define Stepper_MS1_DR                     (* (reg8 *) Stepper_MS1__DR)
/* Port Number */
#define Stepper_MS1_PRT_NUM                (* (reg8 *) Stepper_MS1__PRT) 
/* Connect to Analog Globals */                                                  
#define Stepper_MS1_AG                     (* (reg8 *) Stepper_MS1__AG)                       
/* Analog MUX bux enable */
#define Stepper_MS1_AMUX                   (* (reg8 *) Stepper_MS1__AMUX) 
/* Bidirectional Enable */                                                        
#define Stepper_MS1_BIE                    (* (reg8 *) Stepper_MS1__BIE)
/* Bit-mask for Aliased Register Access */
#define Stepper_MS1_BIT_MASK               (* (reg8 *) Stepper_MS1__BIT_MASK)
/* Bypass Enable */
#define Stepper_MS1_BYP                    (* (reg8 *) Stepper_MS1__BYP)
/* Port wide control signals */                                                   
#define Stepper_MS1_CTL                    (* (reg8 *) Stepper_MS1__CTL)
/* Drive Modes */
#define Stepper_MS1_DM0                    (* (reg8 *) Stepper_MS1__DM0) 
#define Stepper_MS1_DM1                    (* (reg8 *) Stepper_MS1__DM1)
#define Stepper_MS1_DM2                    (* (reg8 *) Stepper_MS1__DM2) 
/* Input Buffer Disable Override */
#define Stepper_MS1_INP_DIS                (* (reg8 *) Stepper_MS1__INP_DIS)
/* LCD Common or Segment Drive */
#define Stepper_MS1_LCD_COM_SEG            (* (reg8 *) Stepper_MS1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Stepper_MS1_LCD_EN                 (* (reg8 *) Stepper_MS1__LCD_EN)
/* Slew Rate Control */
#define Stepper_MS1_SLW                    (* (reg8 *) Stepper_MS1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Stepper_MS1_PRTDSI__CAPS_SEL       (* (reg8 *) Stepper_MS1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Stepper_MS1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Stepper_MS1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Stepper_MS1_PRTDSI__OE_SEL0        (* (reg8 *) Stepper_MS1__PRTDSI__OE_SEL0) 
#define Stepper_MS1_PRTDSI__OE_SEL1        (* (reg8 *) Stepper_MS1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Stepper_MS1_PRTDSI__OUT_SEL0       (* (reg8 *) Stepper_MS1__PRTDSI__OUT_SEL0) 
#define Stepper_MS1_PRTDSI__OUT_SEL1       (* (reg8 *) Stepper_MS1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Stepper_MS1_PRTDSI__SYNC_OUT       (* (reg8 *) Stepper_MS1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Stepper_MS1__SIO_CFG)
    #define Stepper_MS1_SIO_HYST_EN        (* (reg8 *) Stepper_MS1__SIO_HYST_EN)
    #define Stepper_MS1_SIO_REG_HIFREQ     (* (reg8 *) Stepper_MS1__SIO_REG_HIFREQ)
    #define Stepper_MS1_SIO_CFG            (* (reg8 *) Stepper_MS1__SIO_CFG)
    #define Stepper_MS1_SIO_DIFF           (* (reg8 *) Stepper_MS1__SIO_DIFF)
#endif /* (Stepper_MS1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Stepper_MS1__INTSTAT)
    #define Stepper_MS1_INTSTAT            (* (reg8 *) Stepper_MS1__INTSTAT)
    #define Stepper_MS1_SNAP               (* (reg8 *) Stepper_MS1__SNAP)
    
	#define Stepper_MS1_0_INTTYPE_REG 		(* (reg8 *) Stepper_MS1__0__INTTYPE)
#endif /* (Stepper_MS1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Stepper_MS1_H */


/* [] END OF FILE */
