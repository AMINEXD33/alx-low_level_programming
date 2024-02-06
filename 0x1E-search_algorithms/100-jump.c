#include <stdio.h>
#include <math.h>
/**
 *jump_search- a function that performs a search using a jump
 *search , O(sqr(n))
 *@array: the array we're searching
 *@size: the size of the array
 *@value: the value we're searching for
 *Return: the index of the element or -1 if it doesn't exist
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x;
	size_t y;
	size_t tmp;

	if (array == NULL || !value)
		return (-1);

	for (x = 0; x < size; x += sqrt(size))
	{
		/*check if this is the value*/
		/**if (array[x] == value)**/
			/**return (x);**/
		/*check if we're ahead of the element*/
		if (array[x] >= value)
		{
			tmp = (x - sqrt(size) + 1);
			printf("Value found between indexes ");
			printf("[%ld] and [%ld]\n", tmp, x);
			/*the element must be betwen X-sqrt(x) and X*/
			for (y = tmp; y <= x ; y++)
			{
				printf("Value checked array");
				printf("[%ld] = [%d]\n", y, array[y]);
				if (array[y] == value)
					return (y);
			}
			/*not found in the above intervale, so it doesn't exist*/
			return (-1);
		}
		else
		{
			printf("Value checked array");
			printf("[%ld] = [%d]\n", x, array[x]);
		}
	}
	return (-1);
}
