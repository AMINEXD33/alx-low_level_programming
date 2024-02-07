#include <stdio.h>

/**
 *interpolation_search- search an array using the interpolation algorithm
 *@array: the array we're searching
 *@size: the size of the array
 *@value: the value we're searching for
 *Return: the index of the element ar first hit, or -1 if it doesn't exist
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t calc;
	size_t low = 0;
	size_t high = size - 1;
	/**char already_zero = 'f';**/
	if (array == NULL)
		return (-1);


	while (1)
	{
		/** the probe position calc **/
		calc = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (calc > size)
		{
			/** out of range **/
			printf("Value checked array[%ld] is out of range\n", calc);
			return (-1);
		}
		/** compair **/
		if (array[calc] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", calc, array[calc]);
			return (calc);
		}
		printf("Value checked array[%ld] = [%d]\n", calc, array[calc]);
		/** not there (poorly uniformed list) **/
		if (value < array[calc])
			high = calc;
		else
			low = calc;
	}
	return (-1);
}
