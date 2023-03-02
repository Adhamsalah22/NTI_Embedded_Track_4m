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
#include "../LIB/std_types.h"
#include "../LIB/bit_math.h"
#include "../MCAL/DIO/dio.h"
#include "../HAL/MOTORS/StepperMotor/StepperMotor_init.h"
#include "../HAL/MOTORS/StepperMotor/StepperMotor_CFG.h"
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
void StepperMotor_voidInit( void )
{
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN0,OUTPUT);
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN1,OUTPUT);
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN2,OUTPUT);
	dio_vidConfigChannel(DIO_PORTD,DIO_PIN3,OUTPUT);
	
}
// 
// void STEP_vid_CW_Move( void )
// {
// 	switch( STEP_u8_MODE )
// 	{
// 		
// 		case STEP_u8_FULL_STEP:
// 		for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
// 		{
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);	
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 		}
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 		_delay_ms(STEP_u8_DELAY_MS);
// 		_delay_ms(1000);
// 		
// 		case STEP_u8_HALF_STEP:
// 		for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
// 		{
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 		}
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);    /* Last step to initial position */
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);		
// 		_delay_ms(STEP_u8_DELAY_MS);
// 		_delay_ms(1000);
// 		
// 	}
// }
// 
// void STEP_vid_ACW_Move( void )
// {
// 	switch( STEP_u8_MODE )
// 	{
// 		
// 		case STEP_u8_FULL_STEP:
// 		for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
// 		{
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 		}
// 		dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 		dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 		dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 		dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 		_delay_ms(STEP_u8_DELAY_MS);
// 		_delay_ms(1000);
// 		
// 		case STEP_u8_HALF_STEP:
// 		for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
// 		{
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
// 			_delay_ms(STEP_u8_DELAY_MS);
// 		}
// 		dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);    /* Last step to initial position */
// 		dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
// 		_delay_ms(STEP_u8_DELAY_MS);
// 		_delay_ms(1000);
// 		
// 	}
// }

void STEP_vid_Move( void )
{
	#if direction == ClockWise
		switch( STEP_u8_MODE )
		{
			
			case STEP_u8_FULL_STEP:
			for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
			{
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
			}
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
			_delay_ms(STEP_u8_DELAY_MS);
			_delay_ms(1000);
			
			case STEP_u8_HALF_STEP:
			for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
			{
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
			}
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);    /* Last step to initial position */
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
			_delay_ms(STEP_u8_DELAY_MS);
			_delay_ms(1000);
			
		}
	
	#elif direction == AntiClockWise
		switch( STEP_u8_MODE )
		{
			
			case STEP_u8_FULL_STEP:
			for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
			{
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
			}
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
			_delay_ms(STEP_u8_DELAY_MS);
			_delay_ms(1000);
			
			case STEP_u8_HALF_STEP:
			for(int i=0;i<STEP_u8_STEP_ANGLE;i++)
			{
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_B,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				_delay_ms(STEP_u8_DELAY_MS);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
				dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_C,STD_LOW);
				_delay_ms(STEP_u8_DELAY_MS);
			}
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_A,STD_HIGH);    /* Last step to initial position */
			dio_vidWriteChannel(STEP_u8_PORTN0,STEP_COIL_u8_D,STD_HIGH);
			_delay_ms(STEP_u8_DELAY_MS);
			_delay_ms(1000);
			
		}
	
	#endif
}

/**********************************************************************************************************************
 *  END OF FILE: FileName.c
 *********************************************************************************************************************/
