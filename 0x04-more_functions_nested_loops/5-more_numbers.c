#include "main.h"

/**
 * more_numbers - print X10 , numbers from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int X;
	int Y;

	for (X = 0; X <= 14; X++)
	{
		Y  = X;
		if (X >= 10)
		{
			Y = (X - 10);
			_putchar('1');
		}
		_putchar('0' + Y);
	}
	_putchar('\n');
}
