#include "main.h"
/**
* _abs- _abs(-1) =  1
*
*Description: 'figure out the sign of the number
*and bassed on it get's the abs value'
*@n : is the number passed
* Return: the abs value of a number
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-n));
	}
	else
	{
		return (0);
	}
}
