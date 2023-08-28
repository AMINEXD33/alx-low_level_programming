#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end-add a node to the end of the list
 * @head: the head of the list
 * @n: value of the new node
 * Return: the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	current_node = (*head);
	if ((*head) == NULL)
	{
		(*head) = node;
		return (current_node);
	}
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = node;
	return (node);
}
