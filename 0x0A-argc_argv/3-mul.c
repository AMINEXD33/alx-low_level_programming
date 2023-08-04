#include <stdio.h>
#include <stdlib.h>
/**
 *main- Entry point
 *@argc: length of argv
 *@argv: args array
 *Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if ((argc - 1) <= 1)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
