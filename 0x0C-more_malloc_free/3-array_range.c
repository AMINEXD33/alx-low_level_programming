#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range- allocate in memory an array of integers , that can
 *hold the range of (max-min)
 *@min: is the minimum value in the range
 *@max: is the maximum valude in the range
 *Return:addr of the Alloc memory
 */
int *array_range(int min, int max)
{
	int x;
	int range;
	int *Mem;

	/*handle side cases*/
	if (min > max)
		return (NULL);
	/*calc range*/
	range = ((max - min) + 1);
	/*allocation*/
	Mem = malloc(sizeof(int) * range);
	if (Mem == NULL)
		return (NULL);
	/*fill the allocated memory with the range*/
	x = 0;
	for (; min <= max; min++)
	{
		Mem[x] = min;
		x++;
	}

	return (Mem);
}
