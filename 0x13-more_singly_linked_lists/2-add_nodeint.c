#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint-add a node to the list
 * @head: head of the list
 * @n: value of new node
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (node);
}
