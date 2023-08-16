#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*get_op_func- this function search for the
*right function for a spesific operator
*@s: is the operator
*Return: the address of the targeted function , NULL if none is found
*/
int(*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
