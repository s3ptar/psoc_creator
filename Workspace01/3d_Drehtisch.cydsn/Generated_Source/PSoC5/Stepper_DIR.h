/*******************************************************************************
* File Name: Stepper_DIR.h  
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

#if !defined(CY_PINS_Stepper_DIR_H) /* Pins Stepper_DIR_H */
#define CY_PINS_Stepper_DIR_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Stepper_DIR_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Stepper_DIR__PORT == 15 && ((Stepper_DIR__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Stepper_DIR_Write(uint8 value);
void    Stepper_DIR_SetDriveMode(uint8 mode);
uint8   Stepper_DIR_ReadDataReg(void);
uint8   Stepper_DIR_Read(void);
void    Stepper_DIR_SetInterruptMode(uint16 position, uint16 mode);
uint8   Stepper_DIR_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Stepper_DIR_SetDriveMode() function.
     *  @{
     */
        #define Stepper_DIR_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Stepper_DIR_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Stepper_DIR_DM_RES_UP          PIN_DM_RES_UP
        #define Stepper_DIR_DM_RES_DWN         PIN_DM_RES_DWN
        #define Stepper_DIR_DM_OD_LO           PIN_DM_OD_LO
        #define Stepper_DIR_DM_OD_HI           PIN_DM_OD_HI
        #define Stepper_DIR_DM_STRONG          PIN_DM_STRONG
        #define Stepper_DIR_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Stepper_DIR_MASK               Stepper_DIR__MASK
#define Stepper_DIR_SHIFT              Stepper_DIR__SHIFT
#define Stepper_DIR_WIDTH              1u

/* Interrupt constants */
#if defined(Stepper_DIR__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Stepper_DIR_SetInterruptMode() function.
     *  @{
     */
        #define Stepper_DIR_INTR_NONE      (uint16)(0x0000u)
        #define Stepper_DIR_INTR_RISING    (uint16)(0x0001u)
        #define Stepper_DIR_INTR_FALLING   (uint16)(0x0002u)
        #define Stepper_DIR_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Stepper_DIR_INTR_MASK      (0x01u) 
#endif /* (Stepper_DIR__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Stepper_DIR_PS                     (* (reg8 *) Stepper_DIR__PS)
/* Data Register */
#define Stepper_DIR_DR                     (* (reg8 *) Stepper_DIR__DR)
/* Port Number */
#define Stepper_DIR_PRT_NUM                (* (reg8 *) Stepper_DIR__PRT) 
/* Connect to Analog Globals */                                                  
#define Stepper_DIR_AG                     (* (reg8 *) Stepper_DIR__AG)                       
/* Analog MUX bux enable */
#define Stepper_DIR_AMUX                   (* (reg8 *) Stepper_DIR__AMUX) 
/* Bidirectional Enable */                                                        
#define Stepper_DIR_BIE                    (* (reg8 *) Stepper_DIR__BIE)
/* Bit-mask for Aliased Register Access */
#define Stepper_DIR_BIT_MASK               (* (reg8 *) Stepper_DIR__BIT_MASK)
/* Bypass Enable */
#define Stepper_DIR_BYP                    (* (reg8 *) Stepper_DIR__BYP)
/* Port wide control signals */                                                   
#define Stepper_DIR_CTL                    (* (reg8 *) Stepper_DIR__CTL)
/* Drive Modes */
#define Stepper_DIR_DM0                    (* (reg8 *) Stepper_DIR__DM0) 
#define Stepper_DIR_DM1                    (* (reg8 *) Stepper_DIR__DM1)
#define Stepper_DIR_DM2                    (* (reg8 *) Stepper_DIR__DM2) 
/* Input Buffer Disable Override */
#define Stepper_DIR_INP_DIS                (* (reg8 *) Stepper_DIR__INP_DIS)
/* LCD Common or Segment Drive */
#define Stepper_DIR_LCD_COM_SEG            (* (reg8 *) Stepper_DIR__LCD_COM_SEG)
/* Enable Segment LCD */
#define Stepper_DIR_LCD_EN                 (* (reg8 *) Stepper_DIR__LCD_EN)
/* Slew Rate Control */
#define Stepper_DIR_SLW                    (* (reg8 *) Stepper_DIR__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Stepper_DIR_PRTDSI__CAPS_SEL       (* (reg8 *) Stepper_DIR__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Stepper_DIR_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Stepper_DIR__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Stepper_DIR_PRTDSI__OE_SEL0        (* (reg8 *) Stepper_DIR__PRTDSI__OE_SEL0) 
#define Stepper_DIR_PRTDSI__OE_SEL1        (* (reg8 *) Stepper_DIR__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Stepper_DIR_PRTDSI__OUT_SEL0       (* (reg8 *) Stepper_DIR__PRTDSI__OUT_SEL0) 
#define Stepper_DIR_PRTDSI__OUT_SEL1       (* (reg8 *) Stepper_DIR__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Stepper_DIR_PRTDSI__SYNC_OUT       (* (reg8 *) Stepper_DIR__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Stepper_DIR__SIO_CFG)
    #define Stepper_DIR_SIO_HYST_EN        (* (reg8 *) Stepper_DIR__SIO_HYST_EN)
    #define Stepper_DIR_SIO_REG_HIFREQ     (* (reg8 *) Stepper_DIR__SIO_REG_HIFREQ)
    #define Stepper_DIR_SIO_CFG            (* (reg8 *) Stepper_DIR__SIO_CFG)
    #define Stepper_DIR_SIO_DIFF           (* (reg8 *) Stepper_DIR__SIO_DIFF)
#endif /* (Stepper_DIR__SIO_CFG) */

/* Interrupt Registers */
#if defined(Stepper_DIR__INTSTAT)
    #define Stepper_DIR_INTSTAT            (* (reg8 *) Stepper_DIR__INTSTAT)
    #define Stepper_DIR_SNAP               (* (reg8 *) Stepper_DIR__SNAP)
    
	#define Stepper_DIR_0_INTTYPE_REG 		(* (reg8 *) Stepper_DIR__0__INTTYPE)
#endif /* (Stepper_DIR__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Stepper_DIR_H */


/* [] END OF FILE */
