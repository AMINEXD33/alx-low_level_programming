#include "lists.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * add_dnodeint- add a node to the begining of a Doubly
 * linked list
 * @head: the head of the linked list
 * @n: the val of the new added node
 * Return: the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = *(head);
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (node != NULL)
	{
		while (node->prev != NULL)
		{
			node = node->prev;
		}
	}
	new_node->next = node;
	if (node != NULL)
		node->prev = new_node;
	*head = new_node;
	return (new_node);
}
