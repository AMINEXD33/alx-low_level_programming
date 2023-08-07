#include "main.h"
#include "stdlib.h"
/**
 *create_array- returns an allocated array of size , and type char
 *@size: size of the array
 *@c:is the character the list will be initializes with
 *Return: an array of a size , ot NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *X;
	unsigned int i;


	if (size == 0)
		return (NULL);
	X = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		X[i] = c;
	}
	return (X);
}
