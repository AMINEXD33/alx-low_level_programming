#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index- delete a node at index X
 * @head: the head of the linked list
 * @index: the index of the node
 * Return: 1 succsses , -1 code failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int target;
	listint_t *CURRENT, *PRVNODE;

	target = 0;
	CURRENT = (*head);
	if (CURRENT == NULL)
		return (-1);
	while (CURRENT != NULL)
	{
		if (target == index)
		{
			if (index == 0 || PRVNODE == NULL)/*remove the head node*/
			{
				*head = CURRENT->next;/*update the head*/
			}
			else
			{
				PRVNODE->next = CURRENT->next;
			}
			free(CURRENT);
			return (1); /*Successful deletion*/
		}
		target++;
		PRVNODE = CURRENT;
	    CURRENT = CURRENT->next;
	}
	return (-1); /*Index not found*/
}
