#include <stdio.h>
/**
*main - Entry point
*
*Description: 'print the first 50 units of fibonacci
*
* Return: Always 0 (Success)
 */
int main(void)
{
	long a;
	long b;
	long int sum;
	int x;

	a = 0;
	b = 1;
	sum = 0;
	for (x = 0 ; x < 50 ; x++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (x < 49)
		{
			printf("%ld, ", sum);
		}
		else if (x == 49)
		{
			printf("%ld", sum);
		}
	}
	printf("\n");
	return (0);
}
