#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * valid - check if string array is num
 * @num: string
 * Return: 0 if it's a number | 1 if it's not a number
*/
int valid(char num[])
{
	int x;
	int Y;

	Y = strlen(num);
	for (x = 0; x < Y; x++)
	{
		if (!isdigit(num[x]))
			return (1);
	}
	return (0);
}
/**
 * main - Entry point
 *
 * @argc: length of the argv array
 * @argv: args array
 *
 * Return: 0 if the input is valid | 1 otherwise
*/

int main(int argc, char *argv[])
{
	int x;
	int SUM;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		SUM = 0;
		for (x = 1; x < argc; x++)
		{
			if (valid(argv[x]) == 0)
			{
				SUM += atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", SUM);
	}
	return (0);
}
