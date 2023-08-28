#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint-count the nodes in the linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;
	if (h == NULL)
		return (-1);
	count = 0;
	while (h->next != NULL)
	{
		if (h->n)
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	if (h->n)
		printf("%d\n", h->n);
	count++;
	return (count);
}
