/*
 * UART.c
 *
 * Created: 3/8/2023 10:34:05 AM
 * Author : ADHAM ABDELAZIZ
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include "../MCAL/DIO/dio.h"
#include "../MCAL/UART/uart.h"
#include "../HAL/LED/led.h"
#include <avr/io.h>

/****************************************************************/
/* Description   : Testing Normal Mode                          */
/****************************************************************/
// int main(void)
// {
//     char c;
//     UART_Init(UART_BAUDRATE_9600);
//     led_init();
//     UART_TransmitStr("Adham Salah");
// 	
//     while(1)
//     {
// 		c = UART_ReceiveChr();
// 		UART_TransmitChr(c);
// 		led_on(LED_GREEN);
// 
// 	
// 			
//     }
// }

/****************************************************************/
/* Description   : Testing Interrupt Mode                       */
/****************************************************************/

/*
int main(void)
{
	led_init();
	UART_Init(UART_BAUDRATE_9600);
	GIE_voidEnable();
	UART_TransmitStr("Adham Salah Mahmoud Abdelaziz");

	while(1)
	{
		UART_TransmitStr("Adham Salah Mahmoud Abdelaziz");

		led_on(LED_GREEN);
		_delay_ms(100);
		led_off(LED_GREEN);
		_delay_ms(100);
	}
}
*/