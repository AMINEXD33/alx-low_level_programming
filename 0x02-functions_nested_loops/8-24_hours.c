#include "main.h"
/**
*jack_bauer - print every minut and hour
*Description: print every minute and hour of jack's day
*
* Return: none
*/
void jack_bauer(void)
{
	int hours_1;
	int min_1;

	for (hours_1 = 0; hours_1 < 24; hours_1++)
	{
		for (min_1 = 0; min_1 < 60; min_1++)
		{
			_putchar('0' + (hours_1 / 10));
			_putchar('0' + (hours_1 % 10));
			_putchar(':');
			_putchar('0' + (min_1 / 10));
			_putchar('0' + (min_1 % 10));
			_putchar('\n');
		}
	}
}
