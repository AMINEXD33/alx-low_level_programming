#include "main"
/**
 * print_line - prints a line n times
 *@n :> is the number of "_"
 * Return: None
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int X;

	for (X = 0 ; n >= X ; X++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
