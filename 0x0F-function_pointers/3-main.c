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
	printf("in?");
	//if (argc < 4 && argc > 4)
	//	printf("Error\n");
	//	exit(98);
	num1 = atoi(argv[1]);	
	num2 = atoi(argv[3]);
	printf("num1 = %d  | num2 = %d\n", num1 ,num2);
	int (*func)(int , int) = get_op_func(argv[2]);
	printf("RESULT OF %s %s %s = %d\n",argv[1],argv[2],argv[3],func(num1, num2));









	return (0);
}