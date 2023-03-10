/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 26 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : Buzzer.c	                                */
/************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Buzzer.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                                                                         
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void BuzzerInit(void){
	dio_vidConfigChannel(BUZZER_PORT,BUZZER_PIN,OUTPUT);
}
void BUZZER_ON(){
	#if BUZZER_Frequency == 0
		#define BuzzerCyclicDelay 0
	#else
		#define BuzzerCyclicDelay 500/BUZZER_Frequency
	#endif
	#if (BuzzerCyclicDelay == 0)
		dio_vidWriteChannel(BUZZER_PORT,BUZZER_PIN,STD_HIGH);
	#else
		dio_vidWriteChannel(BUZZER_PORT,BUZZER_PIN,STD_HIGH);
		_delay_ms(BuzzerCyclicDelay);
		dio_vidWriteChannel(BUZZER_PORT,BUZZER_PIN,STD_LOW);
		_delay_ms(BuzzerCyclicDelay);
	#endif
}
void BUZZER_OFF(){
	dio_vidWriteChannel(BUZZER_PORT,BUZZER_PIN,STD_LOW);
}
/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
