#include "main.h"
/**
 * _isupper - checks if its uppercase.
 *@c: in the ascii number of a letter
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
