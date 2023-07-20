#include "main.h"
/**
 * print_number - print any int
 *@n : is the number that will be printed
 * Return: Always 0.
 */
void print_number(int n)
{
	/*some crazy side case*/
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n %= 1000000000;
		n = -n;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + n % 10);
}
