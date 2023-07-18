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
	int hours_2;
	int min_1;
	int min_2;

	for (hours_1 = 0; hours_1 <= 2; hours_1++)
	{
		for (hours_2 = 0; hours_2 <= 3; hours_2++)
		{
			for (min_1 = 0; min_1 <= 5; min_1++)
			{
				for (min_2 = 0; min_2 <= 9; min_2++)
				{
					_putchar('0' + hours_1);
					_putchar('0' + hours_2);
					_putchar(':');
					_putchar('0' + min_1);
					_putchar('0' + min_2);
					_putchar('\n');
				}
			}
		}
	}
}
