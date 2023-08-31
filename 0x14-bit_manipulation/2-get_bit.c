#include "main.h"
#include <stdio.h>
/**
 * get_bit- get the value of a bit
 * @n: the number
 * @index: the index of the number
 * Return: (1 or 0) depending on the bit, -1 if the index is over flowing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*if the index exceedes the size of the unsigned long int (bites)*/
	if (index > (sizeof(unsigned long int) * sizeof(unsigned long int)))
	{
		return (-1);
	}
	/*shift the bites "index" places to the right */
	n = n >> (index);
	/*check if the bit is 1 or 0*/
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
