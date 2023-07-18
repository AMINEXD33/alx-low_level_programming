#include <stdio.h>
/**
*main - Entry point
*
*Description: 'print the sum of all multiples of
*3 or 5 below 1024'
*
* Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int result;
	int target;

	target = 1024;
	result = 0;
	for (x = 1 ; x < target ; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			result += x;
		}
	}
	printf("%d\n", result);
	return (0);
}
