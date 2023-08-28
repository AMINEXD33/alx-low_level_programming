#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint-pop the first element in the linked list
 * @head: is the head of the liked list
 * Return: the value of the poped element
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmp_int;

	if ((*head) == NULL)
		return (0);
	tmp = (*head);
	(*head) = (*head)->next;
	tmp_int = tmp->n;
	free(tmp);
	return(tmp_int);
}
