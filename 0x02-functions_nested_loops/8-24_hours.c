#include"main.h"
/**
 * jack bauer - prints minutes
 */
 void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; minute <= 59; minute++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) +'0');
		_putchar((minute % 10) + '0');
	}
}
