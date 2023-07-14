#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'picks a random number and see if bigger
 * than 5 or smaller than 6 or equale to 0'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int last_;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_ = n % 10;
	if (last_ < 6)
	{
		if (last_ == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_);
		}
	}
	else if (last_ > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_);
	}
	return (0);
}
