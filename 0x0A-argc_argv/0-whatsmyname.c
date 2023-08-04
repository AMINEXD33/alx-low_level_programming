#include <stdio.h>
/**
 *main- Entry point
 *@argc: length of argv
 *@argv: args array
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - argc)]);
	return (0);
}
