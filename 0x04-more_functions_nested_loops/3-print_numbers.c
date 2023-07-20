#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: None
 */
void print_numbers(void)
{
	int X;

	for (X = 0; X < 9; X++)
	{
		_putchar('0' + X);
	}
	_putchar('\n');
}
