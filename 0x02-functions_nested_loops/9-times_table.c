#include "main.h"
/**
* times_table - weeeet
*
* Description: 'prints times_table'
*
* Return: none
*/
void times_table(void)
{
	int n1;
	int n2;
	int digit1;
	int digit2;

	for (n1 = 0 ; n1 <= 9 ; n1++)
	{
		for (n2 = 0 ; n2 <= 9 ; n2++)
		{
			digit1 = ((n1 * n2) / 10);
			digit2 = ((n1 * n2) % 10);
			if (digit1 != 0)
				_putchar('0' + digit1);

			_putchar('0' + digit2);
			_putchar(' ');
		}
			_putchar('\n');
	}
}