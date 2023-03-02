/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : ADC_main.c                               */
/************************************************************/


/****************************************************************/
/*                         INCLUDES                             */
/****************************************************************/
#define  F_CPU 16000000UL
#include <util/delay.h>
#include "../HAL/LCD/lcd.h"
#include "../HAL/PUSH_BUTTON/button.h"
#include "../MCAL/ADC/ADC_int.h"
//#include "MCAL/EXI0/EXTI0_int.h"
#include "../HAL/LED/led.h"
#include "../MCAL/GIE/GIE_int.h"


void toggle(void);

	char String[5];
	int value;


void DisplayValue(void);
char str[4]={};
u16 adcValue=255;
/*
int main(void)
{
	//EXT0_voidCallBack(DisplayValue);

	ADC_callback(DisplayValue);
	lcd_vidInit();
	//lcd_displyStr("Hello!");
	ADC_voidInit();
	ADC_voidInterrputEnable();
	ADC_voidEnable();
	ADC_voidAutoTrigger();
	EXT0_voidInit();
	EXT0_voidEnable();
	//lcd_displyChar('h');
	//_delay_ms(10000);
	while (1)
	{
		//adcValue=ADC_u16ReadADCInMV();
		//_delay_ms(1000);
	}
}
void DisplayValue(){
	adcValue = ADC_u16ReadADCInMV();
	lcd_vidSendCmd(0x01);
	lcd_vidDisplyStr("ADC Value: ");
	lcd_vidDisplyStr(itoa(adcValue, str, 10));
}
*/