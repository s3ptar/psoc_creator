/*******************************************************************************
* File Name: UserBTN.h  
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

#if !defined(CY_PINS_UserBTN_H) /* Pins UserBTN_H */
#define CY_PINS_UserBTN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "UserBTN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 UserBTN__PORT == 15 && ((UserBTN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    UserBTN_Write(uint8 value);
void    UserBTN_SetDriveMode(uint8 mode);
uint8   UserBTN_ReadDataReg(void);
uint8   UserBTN_Read(void);
void    UserBTN_SetInterruptMode(uint16 position, uint16 mode);
uint8   UserBTN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the UserBTN_SetDriveMode() function.
     *  @{
     */
        #define UserBTN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define UserBTN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define UserBTN_DM_RES_UP          PIN_DM_RES_UP
        #define UserBTN_DM_RES_DWN         PIN_DM_RES_DWN
        #define UserBTN_DM_OD_LO           PIN_DM_OD_LO
        #define UserBTN_DM_OD_HI           PIN_DM_OD_HI
        #define UserBTN_DM_STRONG          PIN_DM_STRONG
        #define UserBTN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define UserBTN_MASK               UserBTN__MASK
#define UserBTN_SHIFT              UserBTN__SHIFT
#define UserBTN_WIDTH              1u

/* Interrupt constants */
#if defined(UserBTN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in UserBTN_SetInterruptMode() function.
     *  @{
     */
        #define UserBTN_INTR_NONE      (uint16)(0x0000u)
        #define UserBTN_INTR_RISING    (uint16)(0x0001u)
        #define UserBTN_INTR_FALLING   (uint16)(0x0002u)
        #define UserBTN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define UserBTN_INTR_MASK      (0x01u) 
#endif /* (UserBTN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define UserBTN_PS                     (* (reg8 *) UserBTN__PS)
/* Data Register */
#define UserBTN_DR                     (* (reg8 *) UserBTN__DR)
/* Port Number */
#define UserBTN_PRT_NUM                (* (reg8 *) UserBTN__PRT) 
/* Connect to Analog Globals */                                                  
#define UserBTN_AG                     (* (reg8 *) UserBTN__AG)                       
/* Analog MUX bux enable */
#define UserBTN_AMUX                   (* (reg8 *) UserBTN__AMUX) 
/* Bidirectional Enable */                                                        
#define UserBTN_BIE                    (* (reg8 *) UserBTN__BIE)
/* Bit-mask for Aliased Register Access */
#define UserBTN_BIT_MASK               (* (reg8 *) UserBTN__BIT_MASK)
/* Bypass Enable */
#define UserBTN_BYP                    (* (reg8 *) UserBTN__BYP)
/* Port wide control signals */                                                   
#define UserBTN_CTL                    (* (reg8 *) UserBTN__CTL)
/* Drive Modes */
#define UserBTN_DM0                    (* (reg8 *) UserBTN__DM0) 
#define UserBTN_DM1                    (* (reg8 *) UserBTN__DM1)
#define UserBTN_DM2                    (* (reg8 *) UserBTN__DM2) 
/* Input Buffer Disable Override */
#define UserBTN_INP_DIS                (* (reg8 *) UserBTN__INP_DIS)
/* LCD Common or Segment Drive */
#define UserBTN_LCD_COM_SEG            (* (reg8 *) UserBTN__LCD_COM_SEG)
/* Enable Segment LCD */
#define UserBTN_LCD_EN                 (* (reg8 *) UserBTN__LCD_EN)
/* Slew Rate Control */
#define UserBTN_SLW                    (* (reg8 *) UserBTN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define UserBTN_PRTDSI__CAPS_SEL       (* (reg8 *) UserBTN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define UserBTN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) UserBTN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define UserBTN_PRTDSI__OE_SEL0        (* (reg8 *) UserBTN__PRTDSI__OE_SEL0) 
#define UserBTN_PRTDSI__OE_SEL1        (* (reg8 *) UserBTN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define UserBTN_PRTDSI__OUT_SEL0       (* (reg8 *) UserBTN__PRTDSI__OUT_SEL0) 
#define UserBTN_PRTDSI__OUT_SEL1       (* (reg8 *) UserBTN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define UserBTN_PRTDSI__SYNC_OUT       (* (reg8 *) UserBTN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(UserBTN__SIO_CFG)
    #define UserBTN_SIO_HYST_EN        (* (reg8 *) UserBTN__SIO_HYST_EN)
    #define UserBTN_SIO_REG_HIFREQ     (* (reg8 *) UserBTN__SIO_REG_HIFREQ)
    #define UserBTN_SIO_CFG            (* (reg8 *) UserBTN__SIO_CFG)
    #define UserBTN_SIO_DIFF           (* (reg8 *) UserBTN__SIO_DIFF)
#endif /* (UserBTN__SIO_CFG) */

/* Interrupt Registers */
#if defined(UserBTN__INTSTAT)
    #define UserBTN_INTSTAT            (* (reg8 *) UserBTN__INTSTAT)
    #define UserBTN_SNAP               (* (reg8 *) UserBTN__SNAP)
    
	#define UserBTN_0_INTTYPE_REG 		(* (reg8 *) UserBTN__0__INTTYPE)
#endif /* (UserBTN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_UserBTN_H */


/* [] END OF FILE */
