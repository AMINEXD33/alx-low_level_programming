#include "main.h"
/**
 * 
 * 
 * 
 * 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/*make a mask,0x01 shifted by index*/
	mask = 1 << index;
	/*applly the mask to the number*/
	*n |= mask;

	return(*n);
}