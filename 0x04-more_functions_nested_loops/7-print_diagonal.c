#include "main.h"
/**
 * print_diagonal - print the char '/' n times
 *@n :> the number of spaces and lines
 * Return: None
 */
void print_diagonal(int n)
{
	int line_tracker;
	int X;
	int Y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (X = 0; n > X; X++)
	{
		for (Y = 0 ;  line_tracker >  Y; Y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		line_tracker++;
	}
}
