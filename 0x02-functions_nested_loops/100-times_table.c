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

	if (n > 0 || n < 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				result = n1 * n2;
				if ((n2 != 0 || n2 != n) && (n <= 15 && n > 0))
				{
					if (result < 10)
					{
						printf("   ,%d", result);
					}
					else if (result > 10 && result < 100)
					{
						printf("  ,%d", result);
					}
					else if (result >= 100 && result < 1000)
					{
						printf(" ,%d", result);
					}
				}
				else if ((n2 == 0 || n2 == n) && (n <= 15 && n > 0))
				{
					printf("%d", result);
				}
			}
		if (n <= 15 && n > 0)
			printf("\n");
		}
	}
}

