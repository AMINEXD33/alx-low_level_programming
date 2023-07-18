#include <stdio.h>
/**
*main - Entry point
*
*Description: 'print the first 98 units of fibonacci
*
* Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long sum;
	int x;

	a = 0;
	b = 1;
	sum = 0;
	for (x = 0 ; x < 98 ; x++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (x < 97)
		{
			printf("%lu, ", sum);
		}
		else if (x == 97)
		{
			printf("%lu", sum);
		}
	}


	return (0);
}
