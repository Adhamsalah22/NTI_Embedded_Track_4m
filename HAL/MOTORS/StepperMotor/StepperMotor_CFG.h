/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef _STEPPERMOTOR_CFG_H
#define _STEPPERMOTOR_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../MCAL/DIO/dio.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define STEP_u8_PORTN0 			    DIO_PORTD
#define STEP_COIL_u8_A				DIO_PIN0
#define STEP_COIL_u8_B				DIO_PIN1
#define STEP_COIL_u8_C				DIO_PIN2
#define STEP_COIL_u8_D				DIO_PIN3

#define STEP_u8_STEP_ANGLE       	12
#define STEP_u8_DELAY_MS			100

#define STEP_u8_FULL_STEP			0
#define STEP_u8_HALF_STEP			1
#define STEP_u8_MODE				STEP_u8_FULL_STEP

#define direction             ClockWise


#define ClockWise			0
#define AntiClockWise			1


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* _STEPPERMOTOR_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: StepperMotor_Cfg.h
 *********************************************************************************************************************/
