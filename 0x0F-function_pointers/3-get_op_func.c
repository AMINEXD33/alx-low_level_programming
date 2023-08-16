#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
    };

    i = 0;
    while (i < 4)
    {
    	if (strcmp(ops[i].op , s) == 0)
    	{
    		return (ops[i].f);
    	}
    	i++;
    }
    exit(99);
}
