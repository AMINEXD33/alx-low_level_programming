#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*set_to_zero- sets every bytes in an array to 0
*@nmemb: n elemts
*@Mem: memory chunck
*/
void set_to_zero(int nmemb, char *Mem)
{
	int x;

	for (x = 0; x < nmemb; x++)
		Mem[x] = '\0';
}
/**
*_calloc - allocate a chunck of memory and set it to 0
*@nmemb: n elemts
*@size: is the size of each element
*Return: addr of the new allocated memory , or NULL if it failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Mem;

	/*handle nmemb and size side cases*/
	if (size == 0 || nmemb == 0)
		return (NULL);
	/*allocation*/
	Mem = malloc(nmemb * size);
	if (Mem == NULL)
		return (NULL);
	/*set every byte to 0*/
	set_to_zero(nmemb, Mem);

	return (Mem);
}
