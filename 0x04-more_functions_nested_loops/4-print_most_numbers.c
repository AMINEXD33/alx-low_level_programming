#include "main.h"
/**
 *print_most_numbers - print all nums (but not 2 or 4)
 *
 *Return: None
 *
 */
void print_most_numbers(void)
{
	int X;
	char s;

	for (X = 0 ; X <= 9; X++)
	{
		s = '0' + X;
		if (s != '2' || s != '4')
		{
			_putchar(s);
		}
	}
	_putchar('\n');

}
