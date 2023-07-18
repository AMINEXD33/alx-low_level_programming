#include"main.h"
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
	int digit1;
	int digit2;
	int flag1;

	if (n > 0 || n < 15)
	{
		flag1 = 0;
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 = 0; n2 <= n; n2++)
			{
				digit1 = ((n1 * n2) / 10);
				digit2 = ((n1 * n2) % 10);
				if (digit1 != 0)
				{
					_putchar('0' + digit1);
				}
				else if (digit1 == 0 && n2 != 0)
				{
					flag1 = 1;
					_putchar(' ');
				}
				_putchar('0' + digit2);
				if (n2 < n)
					_putchar(',');
				if (flag1 == 1 && n2 < n)
				{
					flag1 = 0;
				}
				if (n2 < n)
					_putchar(' ');
					_putchar(' ');
				}
		_putchar('\n');
		}
	}
}

