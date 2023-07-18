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
	int result;
	int flag1;

	if (n > 0 || n < 15)
	{
		flag1 = 0;
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				result = n1 * n2;
				if (result > 10 && result < 100)
				{
					flag1 = 2;
				}
				else if (result >= 100)
				{
					flag1 = 1;
				}
				else if (result < 10)
				{
					flag1 = 3;
				}
				if (n2 == 0 || n2 == n)
				{
					printf("%d", result);
				}
				while (flag1 != 0)
				{
					flag1--;
					printf(" ");
				}
				if (n2 != 0 || n2 != n)
					printf(",%d", result);
			}
		printf("\n");
		}
	}
}

