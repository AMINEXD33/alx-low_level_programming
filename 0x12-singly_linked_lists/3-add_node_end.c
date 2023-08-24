#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end-add a node to the end of the linked list
 * @head: the head of the L-list
 * @str: the string value
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	/*malloc and configure the node and tmp node*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	tmp = (*head);
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (new_node);
}
