#include <stdio.h>
/**
 *print_array-print the array
 *@array: the array we're priting
 *@size: the size of the array
 *@startfrom: we're the printing starts from
 *Return: nothing
 */
void print_array(int *array, size_t size, size_t startfrom)
{
	size_t tracker = startfrom;
	printf("Searching in array ");
	while (tracker < size)
	{
		if (tracker == startfrom)
		{
			printf("%d,", array[tracker]);
		}
		else if (tracker == size - 1)
		{
			printf(" %d", array[tracker]);
		}
		else
		{
			printf(" %d,", array[tracker]);
		}
		tracker++;
	}
	printf("\n");
}
/**
 *binary_search-search for an element in a list in order log(n)
 *@array: the array we're searching in
 *@size: the size of the array we're searching
 *@value: the value we're searching for
 *Return: the index of the element if found , -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	size_t mid;
	int stop = 0;
	printf("prior while list = >");
	print_array(array, size, 0);
	while (start < end)
	{
		print_array(array, end, start);
		mid = start + ((end - start) / 2);
		printf("mid = %ld\n", mid);
		
		if (array[mid] == value)
		{
			return (mid);
		}
		else if  (value > array[mid])
		{
			start = mid;
		}
		else{
			end = mid;
		}
		if (stop == 5)
			return (-1);
		stop++;
	}
	return(-1);
}
