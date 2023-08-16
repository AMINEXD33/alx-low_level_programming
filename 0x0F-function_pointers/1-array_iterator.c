#include "function_pointers.h"
#include <stddef.h>
/**
*
*
*
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;


	x = 0;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
}