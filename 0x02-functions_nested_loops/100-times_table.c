#include"main.h"
#include <stdio.h>
/**
*print_times_table - to n we go
*
*description:'print_times_table of n'
*@n : n is the number
*return:none
*/
void print_times_table(int n)
{
	int n1;
	int n2;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (n1 = 0; n1 <= n; n1++)
	{
		for (n2  = 0; n2 <= n; n2++)
		{
			if (n != 0)
			{
				printf("%4d", n1 * n2);
			}
			else
			{
				printf("%d", n1 * n2);
			}
			if (n2 != n)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
