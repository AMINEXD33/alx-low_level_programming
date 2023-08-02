#include "main.h"
/**
 *_pow_recursion- raise x to the power of y
 *@x: number
 *@y:power
 *Return: X raised to the power of Y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if  (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
