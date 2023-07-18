#include "main.h"
/**
*print_last_digit - get's last digit
*
*Description: 'prints the last digit of a number'
*@n : is the number
*Return: number
*/
int print_last_digit(int n)
{
	int result = n % 10;
	if (result > 0)
	{
		_putchar('0'+ result);
		return (result);
	}
	else if (result < 0)
	{
		_putchar('0' + (result * (-1)));
		return (result * (-1));
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
