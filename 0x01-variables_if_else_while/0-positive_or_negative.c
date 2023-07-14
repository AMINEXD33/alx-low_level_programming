#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: 'picks a random number and return
 * if it's positive or negative or equal to 0'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive")
	}
	else if (n < 0)
	{
		printf("%d is negative")
	}
	else
	{
		printf("%d is zero")
	}
	return (0);
}
