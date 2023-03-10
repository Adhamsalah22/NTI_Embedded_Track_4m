/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 26 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : Buzzer.h	                                */
/************************************************************/
#ifndef BUZZER_H
#define BUZZER_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../MCAL/DIO/dio.h"
#include "util/delay.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define BUZZER_PORT DIO_PORTC
#define BUZZER_PIN DIO_PIN6
#define BUZZER_Frequency 0

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
void BuzzerInit(void);
void BUZZER_ON();
void BUZZER_OFF();
 
#endif  /*BUZZER_H */

/**********************************************************************************************************************
 *  END OF FILE: BUZZER.h
 *********************************************************************************************************************/
