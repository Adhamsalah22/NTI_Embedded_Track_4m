/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : Task1.2                                  */
/************************************************************/ 


/****************************************************************/
/*                         INCLUDES                             */
/****************************************************************/
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "../HAL/LED/led.h"
#include "../HAL/PUSH_BUTTON/button.h"
#include "../HAL/BUZZER/Buzzer.h"







/********************************************************************************************************/
/* Description   : Project (1-1) (N0N Sequential) We need to make a password which is a combination of  */
/*                 some presses in sequential manner (2 presses on Button0 & 1 press on Button1 & 3     */
/*                 presses on Button2). Write Embedded C code to check password.                        */
/*                 TRUE -> Turn LED Green ON for 500 ms then turn OFF.                                  */
/*                 FALSE -> Turn LED RED ON for 500 ms then turn OFF                                    */
/********************************************************************************************************/

/*
	int main(void)
	{
	led_init();
	button_vidInit();
	u8 main_counter = 0;
	u8 counter1 = 0;
	u8 counter2 = 0;
	u8 counter3 = 0;
	while(1)
	{
	
			if(Button_GetStatus(BUTTON0)==PRESSED){
				counter1++ ;
				main_counter++ ;
				_delay_ms(100);
			}
			else if(Button_GetStatus(BUTTON1)==PRESSED){
				counter2++ ;
				main_counter++ ;
				_delay_ms(100);
			}
			else if(Button_GetStatus(BUTTON2)==PRESSED){
				counter3++ ;
				main_counter++ ;
				_delay_ms(100);
			}
			else
			;
		
		if( main_counter == 6)
		{
			if(counter1 == 2 && counter2 == 1 && counter3 == 3)
			{
				led_on(LED_GREEN);
				_delay_ms(500);
				led_off(LED_GREEN);
				
			}
			else
			{
				led_on(LED_RED);
				_delay_ms(500);
				led_off(LED_RED);
				
			}
			main_counter = 0;
			counter1 = 0;
			counter2 = 0;
			counter3 = 0;
			
		}
	 }
   }

*/

/********************************************************************************************************/
/* Description   : Project (1-1) (Sequential) We need to make a password which is a combination of      */
/*                 some presses in sequential manner (2 presses on Button0 & 1 press on Button1 & 3     */
/*                 presses on Button2). Write Embedded C code to check password.                        */
/*                 TRUE -> Turn LED Green ON for 500 ms then turn OFF.                                  */
/*                 FALSE -> Turn LED RED ON for 500 ms then turn OFF                                    */
/********************************************************************************************************/
	
/*
int main(void)
{
	led_init();
	button_vidInit();
	BuzzerInit();
	u8 ButtonSequence[6] = {};                   //when was ButtonSequence[]={} it was always a correct password
	const u8 ActualButtonSequence[]={0,0,1,2,2,2};        // Actual Button Sequence
	u8 ButtonSequenceCounter=0;                           // Set Counter by zero
	while (1)
	{                                                    // check for which buutton is pressed
		if (Button_GetStatus(BUTTON0)){
			
			ButtonSequence[ButtonSequenceCounter]=0;
			ButtonSequenceCounter++;
			_delay_ms(500);
			
		}
		else if(Button_GetStatus(BUTTON1)){
			ButtonSequence[ButtonSequenceCounter]=1;
			ButtonSequenceCounter++;
			_delay_ms(500);
			
		}
		else if(Button_GetStatus(BUTTON2)){
			ButtonSequence[ButtonSequenceCounter]=2;
			ButtonSequenceCounter++;
			_delay_ms(500);
			
		}
		else if(Button_GetStatus(BUTTON3)){
			ButtonSequence[ButtonSequenceCounter]=3;
			ButtonSequenceCounter++;
			_delay_ms(500);
			
		}
		if(ButtonSequenceCounter == 6){                                     // Checking the new sequence with the actual sequence
			for(u8 ButtonSequenceCompareCounter=0;ButtonSequenceCompareCounter<6;ButtonSequenceCompareCounter++){
				if(ButtonSequence[ButtonSequenceCompareCounter]==ActualButtonSequence[ButtonSequenceCompareCounter]){
					if (ButtonSequenceCompareCounter==5)
					{
						led_on(LED_GREEN);
						_delay_ms(500);
						led_off(LED_GREEN);
					}
				}
				else{
					led_on(LED_RED);
					_delay_ms(500);
					led_off(LED_RED);
					break;
				}
			}
			ButtonSequenceCounter=0;
		}
	}
}
*/