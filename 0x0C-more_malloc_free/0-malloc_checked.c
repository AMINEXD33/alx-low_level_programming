#include "main.h"
#include "stdlib.h"
#include "stddef.h"
/**
*
*
*
*/
void *malloc_checked(unsigned int b)
{
	int *s;


	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}