/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : LED APIs	                            */
/************************************************************/
#ifndef LED_H
#define LED_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "led_types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


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
void led_init(void);
void led_on(led_id_t ledId);
void led_off(led_id_t ledId);
void led_toggle(led_id_t ledId);
 
#endif  /* LED_H */

/**********************************************************************************************************************
 *  END OF FILE: led.h
 *********************************************************************************************************************/
