#include "main.h"
/**
*jack_bauer - print every minut and hour
*Description: print every minute and hour of jack's day
*
* Return: none
*/
void jack_bauer(void)
{
	int hours;
	int min;

	hours = 0;
	min = 0;
	while (hours <= 23 && min <= 59)
	{
		if (hours < 10)
		{
			_putchar('0');
		}
		_putchar('0' + hours);
		_putchar(':');
		if (min < 10)
		{
			_putchar('0');
		}
		_putchar('0' + min);
		_putchar('\n');

		if (min < 59)
		{
			min++;
		}
		else if (min == 59)
		{
			min = 0;
			hours++;
		}
	}
}
