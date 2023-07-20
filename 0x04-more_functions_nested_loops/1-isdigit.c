#include "main.h"
/**
 * _isdigit - check if c in in range (0 to 9)
 *
 * @c : ascii number
 * Return: return 1 if true, 0 false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
