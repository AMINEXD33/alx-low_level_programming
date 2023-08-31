#include "main.h"
/**
 * flip_bits- returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: the number
 * @m: the other number
 * Return:the number needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int Y = 0;
	unsigned long int X;

	/*xor n and b*/
	X = n ^ m;
	/*keep shifting diff to right until it gets to 0*/
	do {

		Y += (X & 1);
		X >>= 1;
	} while (X > 0);

	return (Y);
}
