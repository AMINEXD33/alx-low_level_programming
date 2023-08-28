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
	listint_t *TMP_NODE, *NODE;
	unsigned int target;

	TMP_NODE = (*head);
	NODE = malloc(sizeof(listint_t));
	if ((TMP_NODE == NULL && idx != 0) || NODE == NULL)
	{
		free(NODE);
		return (NULL);
	}
	NODE->n = n;
	for (target = 0; *head != NULL && target < idx - 1; target++)
	{
		TMP_NODE = TMP_NODE->next;
		if (TMP_NODE == NULL)
		{
			free(NODE);
			return (NULL);
		}
	}
	if (idx == 0)
	{
		NODE->next = *head;
		*head = NODE;
	}
	else if (TMP_NODE->next != NULL)
	{
		NODE->next = TMP_NODE->next;
		TMP_NODE->next = NODE;
	}
	else
	{
		NODE->next = NULL;
		TMP_NODE->next = NODE;
	}
	return (NODE);
}
