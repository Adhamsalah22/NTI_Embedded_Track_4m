#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "../HAL/LED/led.h"
#include "../MCAL/SPI/SPI.h"
#include "../HAL/LED/led.h"s

/*
int main(void) {
	
	SPI_VoidInit();
	led_init();
	while (1) {
		char RX_Result = SPI_u8SendRecData(4,3);

		if (RX_Result ==4)
		{
			led_on(LED_BLUE);
		}
		if (RX_Result == 3)
		{
			led_on(LED_BLUE);
		}


	}

	return 0;
}
*/