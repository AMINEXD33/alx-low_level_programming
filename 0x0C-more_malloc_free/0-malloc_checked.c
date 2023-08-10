#include "main.h"
#include "stdlib.h"
#include "stddef.h"
/**
*malloc_checked- allocate b bytes
*@b: bytes value
*Return: address of the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *s;


	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
