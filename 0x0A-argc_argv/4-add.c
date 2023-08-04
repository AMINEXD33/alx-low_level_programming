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


	SUM = 0;
	argv++; /*skiping the prog name*/
	while (*argv != NULL)
	{
		if (((**argv) >= 48 && (**argv) <= 57) || (**argv) == 45)
		{
			num = atoi(*argv);
			if (num >= 0)
			{
				SUM += num;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		argv++;
	}
	argc = argc;
	printf("%d\n", SUM);
	return (0);
}
