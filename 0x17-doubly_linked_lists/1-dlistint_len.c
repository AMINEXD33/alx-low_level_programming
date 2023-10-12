#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len-print the values of nodes in a linked list
 * @h: head of the linked list
 * Return: the size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count;

	count = 0;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
