#include "lists.h"
#include <stdlib.h>
/**
 * free_listint-free a linked list
 * @head: is the head of the list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
/**
 * free_listint2-free a list and null the head
 * @head: the head of the linked list
 */
void free_listint2(listint_t **head)
{
	if ((*head) != NULL)
	{
		free_listint((*head));
		(*head) = NULL;
	}
	return;
}

