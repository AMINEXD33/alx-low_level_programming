#include "lists.h"
/**
 * get_dnodeint_at_index-get a node at an index
 * @head: the head of the list
 * @index: index of the targtet node
 * Return: the target node node, NULL if it doesn't exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	i = 0;
	while (i != index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (NULL);
	return (node);
}
