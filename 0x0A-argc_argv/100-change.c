#include <stdio.h>
#include <stdlib.h>
/**
 *main- Entry point
 *@argc: lenght of args array
 *@argv: args array
 *Return: 0 Success | 1 input is not right
 *
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins += 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}

