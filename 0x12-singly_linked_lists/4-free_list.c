#include "lists.h"
#include <stdlib.h>
/**
 * free_list-frees a linked list
 * @head: the head of a linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	/*recursively freeing the list*/
	free_list(head->next);

	free(head->str);
	free(head);
}
