/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : SevenSegment_main.c                      */
/************************************************************/

#define F_CPU 16000000UL
#include <util/delay.h>
#include "../HAL/SevenSegment/SevenSegment.h"
#include "../HAL/PUSH_BUTTON/button.h"

// int main(void)
// {
// 	SevenSegmentInit();
// 	button_vidInit();
// 	u16 counter=0;
// 	/* Replace with your application code */
// 	
// 	
// 	while (1)
// 	{
// 		SevenSegmentDisplay(counter);
// 		if(Button_GetStatus(BUTTON0) && counter<99){
// 			counter++;
// 			_delay_ms(500);
// 		}
// 		else if(Button_GetStatus(BUTTON1) && counter>0){
// 			counter--;
// 			_delay_ms(500);
// 		}
// 	}
// }
