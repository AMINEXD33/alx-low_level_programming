#include "main.h"
#include <stdio.h>
/**
 *print_array - print the array to the nth element
 *
 *@a : the int array
 *@n : to nth element
 *
 */
void print_array(int *a, int n)
{
	int first_loop;
	int tmp;

	tmp = 0;
	first_loop = 1;
	while (n > tmp)
	{
		if (first_loop == 1)
		{
			printf("%d", a[tmp]);
			first_loop = 0;
		}
		else
		{
			printf(", %d", a[tmp]);
		}
		tmp++;
	}
	printf("\n");
}
