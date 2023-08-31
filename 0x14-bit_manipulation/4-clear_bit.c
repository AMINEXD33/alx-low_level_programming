#include "main.h"
/**
 * clear_bit-set the bit at index to 0
 * @n: the number
 * @index: the index of the targeted bit
 * Return: 1 if succsess , 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * sizeof(unsigned long int)))
		return (-1);
	/*mask*/
	mask = 1 << index;
	/*apply mask*/
	mask = ~mask;
	n &= mask;
	return(1);	
}
