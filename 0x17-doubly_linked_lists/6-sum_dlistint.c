#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint-sum up the list values
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum;

	sum = 0;
	if (node == NULL)
		return (sum);
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
