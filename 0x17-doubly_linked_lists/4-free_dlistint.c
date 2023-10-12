#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint-free a linked list
 * @head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *prv = NULL;


	if (node == NULL)
		return;
	/*making sure we're at the begining of the list*/
	while (node->prev != NULL)
		node = node->prev;
	/*freeing the list*/
	while (node != NULL)
	{
		prv = node;
		node = node->next;

		free(prv);
	}
}