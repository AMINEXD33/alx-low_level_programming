#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index-find a node at an index
 * @head: the head of the linked list
 * @index: the index that the function will search for
 * Return: an index if the nood is found , else 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int target;
	listint_t *TMP;

	target = 0;
	if (head == NULL)
		return (NULL);
	TMP = head;
	while (TMP->next != NULL)
	{
		if (target == index)
		{
			return (TMP);
		}
		TMP = TMP->next;
		target++;
	}
	if (target == index)
	{
		return (TMP);
	}

	return (NULL);
}
