#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*
*
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *Mem;
	char *pt_r;
	/*handle size cases*/
	if (old_size == new_size)
		return (ptr);
	else if (new_size == 0 || ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*allocation*/
	Mem = malloc(new_size);
	if (Mem == NULL)
		return (NULL);
	/*copy values*/
	pt_r = (char *)ptr;
	for (x = 0; x < old_size && x < new_size; x++)
	{
		Mem[x] = pt_r[x];
	}
	free(ptr);
	return (Mem);
}