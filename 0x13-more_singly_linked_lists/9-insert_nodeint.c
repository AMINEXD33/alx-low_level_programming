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
	listint_t *TMP_NODE, *PRV_NODE, *NODE;
	unsigned int target;

	if ((*head) == NULL)
		return (NULL);
	TMP_NODE = (*head);/*finding the target*/
	target = 0;
	while (TMP_NODE->next != NULL)
	{
		if (target == idx)
			break;
		target++;
		PRV_NODE = TMP_NODE;
		TMP_NODE = TMP_NODE->next;
	}
	if (target == idx)/*target node found , adding the new node*/
	{
		NODE = malloc(sizeof(listint_t));
		if (NODE == NULL)
		{
			free(NODE);
			return (NULL);
		}
		NODE->n = n;
		if (target == 0)
		{
			NODE->next = (*head);
			(*head) = NODE;
			return ((*head));
		}
		else
		{
			NODE->next = TMP_NODE;
			PRV_NODE->next = NODE;
			return (NODE);
		}
	}
	return ((*head));
}
