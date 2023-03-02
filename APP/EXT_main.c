/************************************************************/
/* 	Author 	 	 : Adham Salah Abdelaziz                    */
/* 	Date   		 : 25 Feb 2023                              */
/* 	Version 	 : 1V 									    */
/* 	Description	 : External Interrupt                       */
/************************************************************/


/****************************************************************/
/*                         INCLUDES                             */
/****************************************************************/
#define F_CPU 16000000UL
#include <util/delay.h>
#include "../HAL/LED/led.h"
#include "../HAL/PUSH_BUTTON/button.h"
#include "../MCAL/EXI0/EXTI0_int.h"
#include "../MCAL/EXI1/EXTI1_int.h"
#include "../MCAL/GIE/GIE_int.h"


/****************************************************************/
/* Description   : Testing EXT0 and EXT1 by clicking on         */
/*            pushbutton to respond the action of interrupt     */
/****************************************************************/

/*
void	ISR0   (void);
void    ISR1   (void);
void    ISR2   (void);



int main(void)
{
	led_init();    // initalize Led
	button_vidInit();  // initalize Button
	EXT0_voidCallBack(ISR0);   // call back function of External Interrupt 0
	EXT1_voidCallBack(ISR1);   // call back function of External Interrupt 1
	EXT2_voidCallBack(ISR2);    // call back function of External Interrupt 2
	EXT0_voidInit();       // initalize External Interrupt 0
	EXT1_voidInit();       // initalize External Interrupt 1
	EXT2_voidInit();       // initalize External Interrupt 2
	EXT0_voidEnable();     // Enable External Interrupt 0
	EXT1_voidEnable();     // Enable External Interrupt 1
	EXT2_voidEnable();     // Enable External Interrupt 2
	GIE_voidEnable();      // Enable Global Interrupt 
  
	
	while(1);
	return 0;
}

void	ISR0	(void)             //  function of External Interrupt 0
{ 
	
	//led red on
	led_on(LED_RED);
	_delay_ms(50);
}

void    ISR1   (void)            //function of External Interrupt 1
{
	//SET_BIT(SREG,7);             //for making nesting
	//led green on
	led_on(LED_GREEN);
	_delay_ms(50);	

}

void    ISR2   (void)            //  function of External Interrupt 2
{
	//SET_BIT(SREG,7);             //for making nesting
	//led blue on
	led_on(LED_BLUE);
	_delay_ms(50);

}

*/