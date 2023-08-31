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

	if (index > (sizeof(unsigned long int) * sizeof(unsigned long int)))
		return (-1);
	/*make a mask,0x01 shifted by index*/
	mask = 1 << index;
	/*applly the mask to the number*/
	*n |= mask;

	return(1);
}