#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2-free a list and null the head
 * @head: the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *cr, *tmp;

	if (head != NULL)
	{
		cr = *head;
		while ((tmp = cr) != NULL)
		{
			cr = cr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

