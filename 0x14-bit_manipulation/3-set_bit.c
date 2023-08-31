#include "main.h"
/**
 * set_bit- set a bit at an index to 1
 * @n: the number
 * @index: the bit at an this index will be changed to 1
 * Return: if it failed -1 , else 1
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

	return (1);
}
