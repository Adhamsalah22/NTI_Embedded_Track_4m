/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : Timer_main.c                             */
/************************************************************/

#include "../HAL/LED/led.h"
#include "../MCAL/TIMER0/TIMR0_int.h"
#include "../MCAL/TIMER2/TIMR2_int.h"
#include "../MCAL/GIE/GIE_int.h"
#include "../MCAL/DIO/dio.h"

/****************************************************************/
/* Description   : Testing Normal Mode                          */
/****************************************************************/

void ISR (void);
u8 counter = 0;

int main(void)  
{
	TIMER0_void_SetOVCallBack(ISR);
	led_init();
	TIMER0_void_Init();
	TIMER0_void_EnableOVInt();
	GIE_voidEnable();	
	while(1)
	{
		
	}
	
}

void ISR (void)
{
	counter++; 
	if (counter == 40)
	{
		led_toggle(LED_RED);
		counter = 0;
	}
	
}


/****************************************************************/
/* Description   : Testing CTC Mode                             */
/****************************************************************/
/*
 void ISR (void);
 u8 counter = 0;

int main(void)    
{
	TIMER0_void_SetCTCCallBack(ISR);
	led_init();
	TIMER0_void_Init();
	TIMER0_void_SetCompareVal(127);
	TIMER0_void_EnableCTCInt();
	GIE_voidEnable();
	while(1)
	{
		
	}
	
}

void ISR (void)
{
	counter++;
	if (counter == 40)
	{
		led_toggle(LED_RED);
		counter = 0;
	}
	 
}
*/

/****************************************************************/
/* Description   : Testing Phase PWM Mode                       */
/****************************************************************/
/*
#include <util/delay.h>       
 int main(void)
 {

	 led_init();
	 dio_vidConfigChannel(DIO_PORTB,DIO_PIN3,OUTPUT);
	 TIMER0_void_Init();
	 
	 while(1)
	 {
		 for (u8 i = 0 ; i < 255; i++)
		 {
			 TIMER0_void_SetCompareVal(i);
			 _delay_ms(20);
		 }
	 }
	 
 }
 */

// 
// void ISR (void);
// u8 counter = 0;
// 
// int main(void)
// {
// 	TIMER2_void_SetOVCallBack(ISR);
// 	led_init();
// 	TIMER2_void_Init();
// 	TIMER2_void_EnableOVInt();
// 	GIE_voidEnable();
// 	while(1)
// 	{
// 		
// 	}
// 	
// }
// 
// void ISR (void)
// {
// 	counter++;
// 	if (counter == 40)
// 	{
// 		led_toggle(LED_BLUE);
// 		counter = 0;
// 	}
// 	
// }
