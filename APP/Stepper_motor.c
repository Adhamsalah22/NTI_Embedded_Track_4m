
/*
 * LCD_main.c
 *
 * Created: 2/27/2023 8:40:30 PM
 *  Author: ADHAM ABDELAZIZ
 */ 
#define  F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "../HAL/MOTORS/StepperMotor/StepperMotor_init.h"
#include "../MCAL/DIO/dio.h"
/*
int main(void)
{
	StepperMotor_voidInit();

		
	while (1)
	{
		STEP_vid_Move();
	}
}
*/