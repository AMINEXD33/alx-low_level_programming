#include "main.h"
/**
 *factorial - calculate the factorial of a number
 *@n: nummber
 *Return: factorial
 *
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (n);
	}
	else if(n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n-1));
}
