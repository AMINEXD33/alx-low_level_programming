#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main- Enry point
 *@argc: length of argv
 *@argv: args vercor
 *Return: 1 if a character is not a digit, else 0
 */
int main(int argc, char *argv[])
{
	int SUM;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	SUM = 0;
	for (num = 1; num < argc; num++)
	{
		if (isdigit(*argv[num]))
		{
			SUM += atoi(argv[num]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}	
	printf("%d\n", SUM);
	return (0);
}
