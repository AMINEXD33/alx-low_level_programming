#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*main-Entry point
*@argc: the length of the args
*@argv: the array of args
*Return: 0 always
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *op;

	/*Errors handling*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\0");
		exit(99);
	}

	if ((*op == 47 || *op == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/*print the valid answer*/
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
