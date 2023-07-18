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
	n = n % 10;
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (0);
	}
}
