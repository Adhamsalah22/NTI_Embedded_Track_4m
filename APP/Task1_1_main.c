
/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : Task1.1                                  */
/************************************************************/

/****************************************************************/
/*                         INCLUDES                             */
/****************************************************************/

#define  F_CPU 16000000UL
#include <util/delay.h>
#include "../HAL/LED/led.h"
#include "../HAL/PUSH_BUTTON/button.h"


/****************************************************************/
/* Description   : Write Embedded C Code to Toggle LED0         */
/*                 connected to PORTC.2 each 500ms.             */
/****************************************************************/
/*

	int main(void)
	{
	//led_init();
	H_Buzzer_Void_BuzzerInit();
	while(1) 
	{
	//led_toggle(LED_NEW);
	H_Buzzer_Void_BuzzerOn();
	_delay_ms(500);
	}
	}
*/	
	
/****************************************************************/
/* Description   : Write Embedded C code to toggle the          */
/*                 three LEDs Sequentially.                     */
/****************************************************************/	

/*
	int main(void)
	{
	led_init();	
	while(1)
	{	
		led_toggle(LED_RED);
	_delay_ms(500);
	led_toggle(LED_BLUE);
	_delay_ms(500);
	led_toggle(LED_GREEN);
	_delay_ms(500);
	}
	}
*/


/****************************************************************/
/* Description   : TASK-2 Write Embedded C code to Toggle LED0  */
/*                 connected to PORTC.2 each 500ms and LED2     */
/*                   connected to PORTD.3 each 1000ms.          */
/****************************************************************/
/*	 	int main(void)
 	{		led_init();		while(1)
 		{			led_toggle(LED_NEW);			led_toggle(LED_NEW1);			_delay_ms(500);			led_toggle(LED_NEW1);			_delay_ms(500);		}*/	

/***********************************************************************/
/* Description   : TASK-3 Write Embedded C code to control LED0        */
/*                 using Button0 as follow: While Button0 is           */
/*                 Pressed, LED0 ON.While Button0 is Released,LED0 OFF */
/***********************************************************************/	
	/*	int main(void)
	{	led_init();	button_vidInit();	while(1)
	{
		if(Button_GetStatus(BUTTON0))
		{
			led_on(LED_RED);
		}
	else 
		led_off(LED_RED);
	}
	}
	*/
	/*


/***********************************************************************/
/* Description   : TASK-4 Write Embedded C code to control LED0 using  */
/*                 Button0 as follow: While Button0 is Pressed, LED0   */
/*                 Toggle. While Button0 is Pressed, LED0 OFF.         */
/***********************************************************************/	
	/*
	int main(void)
	{
		led_init();		button_vidInit();		while(1)
		{
			if(Button_GetStatus(BUTTON0))
			{
				led_toggle(LED_RED);
			}
			else
			led_off(LED_RED);
		}
	}
	*/
	
	
/***********************************************************************/
/* Description   : TASK-5 Write Embedded C code to control LED0 and    */
/*                 LED1 using Button0 and Button1 as follow:           */
/*                 If Button0 is Pressed, LED0 Toggle.                 */
/*                 If Button1 is Pressed, LED1 Toggle.                 */
/***********************************************************************/	
	
	/*

	int main(void)
	{
	led_init();
	button_vidInit();
	while(1)
	{
		if (Button_GetStatus(BUTTON0))
		{
			led_toggle(LED_RED);
		}
		
		if (Button_GetStatus(BUTTON1))
		{
			led_toggle(LED_GREEN);
		}
	
	}
}
*/