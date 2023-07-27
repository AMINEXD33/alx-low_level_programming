#include "main.h"
/**
 *
 *
 *
 *
 */
void print_number(int n)
{
	while (n > 0)
	{
		_putchar((n%10)+'0');
		n /= 10;
	}
}
