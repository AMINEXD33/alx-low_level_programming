#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator-calls a nother function with each element in array
*@array: an array of ints
*@size: size of array
*@action: address to the other function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
