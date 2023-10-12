#include "lists.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 * 
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum;

	sum = 0;
	/*checking if we're at the start of the list*/
	while (node->prev != NULL)
		node = node->prev;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}