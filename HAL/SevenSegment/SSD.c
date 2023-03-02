/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  FileName.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#define  F_CPU 16000000UL
#include "../MCAL/DIO/dio.h"
#include "SSD.h"
#include "SSD_cfg.h"
#include <util/delay.h>
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

void SSD_vidInit(void)
{
	dio_vidConfigChannel(BCD_PORT,BCD_CHANNEL1,OUTPUT);
	dio_vidConfigChannel(BCD_PORT,BCD_CHANNEL2,OUTPUT);
	dio_vidConfigChannel(BCD_PORT,BCD_CHANNEL4,OUTPUT);
	dio_vidConfigChannel(BCD_PORT,BCD_CHANNEL8,OUTPUT);
	
	dio_vidConfigChannel(MX_PORT2,COM1,OUTPUT);
	dio_vidConfigChannel(MX_PORT2,COM2,OUTPUT);
	dio_vidConfigChannel(MX_PORT1,COM3,OUTPUT);
	dio_vidConfigChannel(MX_PORT1,COM4,OUTPUT);
}

void SSD_viddisplyNym(u8 num, u8 Digit)
{
	switch(Digit)
	{
		case 1 : dio_vidWriteChannel(MX_PORT2 , COM1 , STD_LOW);      break;
		case 2 : dio_vidWriteChannel(MX_PORT2 , COM2 , STD_LOW);      break;
		case 3 : dio_vidWriteChannel(MX_PORT1 , COM3 , STD_LOW);      break;
		case 4 : dio_vidWriteChannel(MX_PORT1 , COM4 , STD_LOW);      break;
	}
	
	dio_vidWriteChannel(BCD_PORT , BCD_CHANNEL1 , CHECK_BIT(num , 0));
	dio_vidWriteChannel(BCD_PORT , BCD_CHANNEL2 , CHECK_BIT(num , 1));
	dio_vidWriteChannel(BCD_PORT , BCD_CHANNEL4 , CHECK_BIT(num , 2));
	dio_vidWriteChannel(BCD_PORT , BCD_CHANNEL8 , CHECK_BIT(num , 3));
	
	_delay_ms(1);
	switch(Digit)
	{
		case 1 : dio_vidWriteChannel(MX_PORT2 , COM1 , STD_HIGH);      break;
		case 2 : dio_vidWriteChannel(MX_PORT2 , COM2 , STD_HIGH);      break;
		case 3 : dio_vidWriteChannel(MX_PORT1 , COM3 , STD_HIGH);      break;
		case 4 : dio_vidWriteChannel(MX_PORT1 , COM4 , STD_HIGH);      break;
	}
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
