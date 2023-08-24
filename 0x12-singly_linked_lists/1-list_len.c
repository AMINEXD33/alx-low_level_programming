#include "lists.h"
#include <stdio.h>
/**
 * list_len-count the elements in a single linked list
 * @h: header
 * Return: the num of elements
 */
size_t list_len(const list_t *h)
{
	int x;

	x = 0;
	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
