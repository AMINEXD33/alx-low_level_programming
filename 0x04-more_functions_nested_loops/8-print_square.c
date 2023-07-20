#include "main.h"
/**
 * print_square - check the code
 *@size :> size of the square
 * Return: None
 */
void print_square(int size)
{
	int X;
	int Y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (X = 0; size > X ; X++)
	{
		for (Y = 0; size > Y; Y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
