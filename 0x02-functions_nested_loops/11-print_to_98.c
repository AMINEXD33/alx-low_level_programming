#include "main.h"
#include <stdio.h>
/**
* print_to_98 - in range (n to 98)
*
* Description: 'prints all the alphabet and a new line'
*@n : is the start of the range
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		printf("%d", n);
		n--;
		while (n != 98)
		{
			printf(", %d,", n);
			n--;
		}
		printf("%d", n);
	}
	else if (n < 98)
	{
		printf("%d", n);
		n++;
		while (n != 98)
		{
			printf(", %d,", n);
			n++;
		}
		printf("%d", n);
	}
}
