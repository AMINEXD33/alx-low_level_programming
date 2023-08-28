#include "lists.h"
#include <stdlib.h>
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
	unsigned int target, flag;

	if ((*head) == NULL)
		return (NULL);
	/*finding the target*/
	TMP_NODE = (*head);
	target = 0;
	flag = 0;
	while (TMP_NODE->next != NULL)
	{
		if (target == idx)
		{
			flag = 1;
			break;
		}
		target++;
		PRV_NODE = TMP_NODE;
		TMP_NODE = TMP_NODE->next;
	}
	/*target node found , adding the new node*/
	if (flag == 1)
	{
		NODE = malloc(sizeof(listint_t));
		if (NODE == NULL)
		{
			free(NODE);
			return (NULL);
		}
		NODE->n = n;
		NODE->next = TMP_NODE;
		PRV_NODE->next = NODE;
		return (NODE);
	}
	/*target node not found, returning NULL*/
	return (NULL);
}
