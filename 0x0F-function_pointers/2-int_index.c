#include "function_pointers.h"
#include <stddef.h>
/**
*int_index-search for an int value , specified by
*the function that cmp is pointing at
*@array: array of ints
*@size: the size of the array
*@cmp: address of an other function
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	if (array != NULL && cmp != NULL && size > 0)
	{
		index = 0;
		while(index < size)
		{
			if (cmp(array[index] != 0))
				return (index);
			index++;
		}
	}
	else
	{
		return (-1);
	}
}