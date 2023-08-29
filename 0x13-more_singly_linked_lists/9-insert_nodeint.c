#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index-insert a node at an idex
 * @head: the head of the linked list
 * @idx: the index where the new node should be inserted
 * @n: the value of the node
 * Return: the address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node_to_insert_after;
	unsigned int i = 0;

	node_to_insert_after = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = node_to_insert_after;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		if (!node_to_insert_after)
		{
			free(new_node);
			return (NULL);
		}
node_to_insert_after = node_to_insert_after->next;
i++;
	}
	new_node->next = node_to_insert_after->next;
	node_to_insert_after->next = new_node;
	return (new_node);
}
