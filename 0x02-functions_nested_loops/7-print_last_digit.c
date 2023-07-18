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
	return (_abs(n));
}
