#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * pow_-costume power function
 * @base: is the base number
 * @exponent: :) very self
 * Return: the power result
 */
double pow_(double base, int exponent)
{
	double result = 1.0;
	int i;

	if (exponent >= 0)
	{
		for (i = 0; i < exponent; i++)
		{
			result *= base;
		}
	}
	else
	{
		for (i = 0; i > exponent; i--)
		{
			result /= base;
		}
	}
	return (result);
}
/**
 * binary_to_uint-from a string binary representation
 * to an unsigned decimal representation
 * @b: the char
 * Return: the decimal representation
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int NUM;
	int x;

	if (b == NULL)
		return (0);
	len = (strlen(b) - 1);

	x = 0;
	NUM = 0;
	while (len >= 0 && b[x] != '\0')
	{
		if (b[x] == '1')
		{
			NUM += pow_(2.0, len);
		}
		if (b[x] > 49 || b[x] < 48)
			return (0);
		len--;
		x++;
	}
	return (NUM);
}
