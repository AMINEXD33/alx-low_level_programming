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
