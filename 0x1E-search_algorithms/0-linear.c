#include <stddef.h>
#include <stdio.h>
/**
*linear_search-do a search for an element linearly O(n)
*@array: the int arrays
*@size: the size of the array
*@value: the value we're searching for
*Return: the index of the element , or -1 if it doesn't exist
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int tracker = 0;

	if (array == NULL || value == NULL)
		return (-1);
	while (tracker < size)
	{
		printf("Value checked array[%d] =[%d]\n", tracker, array[tracker]);
		if (array[tracker] == value)
			return (tracker);
		tracker++;
	}
	/*not found*/
	return (-1);


}
