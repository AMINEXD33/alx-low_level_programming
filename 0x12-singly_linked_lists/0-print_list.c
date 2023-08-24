#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list-print the values inside a liked list
 * @h: the head of the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int x;

	x = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
