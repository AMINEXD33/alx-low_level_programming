#include <stdio.h>
/**
 *main- Entry point
 *@argc: length of array argv
 *@argv: args array
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}
	argc = argc;
	return (0);
}
