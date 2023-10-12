#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end- add a node to the end of the list
 * @head: the head of th linked list
 * @n: the val of the new added node
 * Return: the address of the new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (node != NULL)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = node;
	return (new_node);
}
