#include <stdio.h>
/**
 *main- Entry point
 *@argc: length of argv
 *@argv: array of arguments
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	argv = argv;
	return (0);
}
