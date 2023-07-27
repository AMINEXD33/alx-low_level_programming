#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void print_number(int n)
{
	int flag;
	int flag2;
	int tmp;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	flag = 0;
	flag2 = 0;
	if (n < 0)
	{
		n = n * -1;
		flag = 1;
	}
	while (n > 0)
	{
		if (flag == 1){
			if (flag2 == 0){
				_putchar('-');
				flag2 = 1;
			}
			_putchar((n % 10) + '0');
			tmp += n*10;
		}
		else
		{
			_putchar((n % 10) + '0');
			
		}
		n %= 10;
	}
	printf("%d", tmp);
}
