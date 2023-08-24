#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list-print the values inside a liked list
 * @h: the head of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t x;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (-1);
	}
	x = 0;
	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		x++;
	}
	return (x);
}