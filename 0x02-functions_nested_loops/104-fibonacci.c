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
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	int i;
	unsigned long tmp;

	printf("%lu", num1);
	for (i = 1; i < 93; i++)
	{
		printf(", %lu", num2);
		tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;
	}
	printf("\n");
	return (0);
}
