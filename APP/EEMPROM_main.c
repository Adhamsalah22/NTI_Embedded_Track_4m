
#define F_CPU 16000000UL			/* Define frequency here its 8MHz */
#include <avr/io.h>			/* Include avr std header file */
#include <util/delay.h>			/* Include delay header file */
#include "../HAL/LCD/lcd.h"
#include "../MCAL/INT_EEPROM/EEPROM_init.h"			/* Include EEPROM header file */
#include "../HAL/LED/led.h"
/*
int main()
{
	lcd_init();
	EEPROM_write(512,'A');
	lcd_displyChar(EEPROM_read(512));
	EEPROM_write(513,'D');
	lcd_displyChar(EEPROM_read(513));
	EEPROM_write(514,'H');
	lcd_displyChar(EEPROM_read(514));
	EEPROM_write(515,'A');
	lcd_displyChar(EEPROM_read(515));
	EEPROM_write(516,'M');
	lcd_displyChar(EEPROM_read(516));

	while(1)
	{
		
	}
}
*/
int main()
{
	led_init();
	while(1)
	{
		led_on(LED_RED);
	}
		
}