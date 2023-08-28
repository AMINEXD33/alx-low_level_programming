#include "lists.h"
#include <stdio.h>
/**
 * listint_len-count elements in a linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int elements;

	if (h == NULL)
		return (0);
	elements = 0;
	while (h->next != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
