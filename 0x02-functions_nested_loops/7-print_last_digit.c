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
		return ((result) * 10 + result);
	}
	else if (result < 0)
	{
		return (((result * (-1)) * 10) + result);
	}
	else
	{
		return (00);
	}
}
