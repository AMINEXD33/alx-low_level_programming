#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node-add new node to the begining of the
 * linked list
 * @head: head of the linked list
 * @str: str value
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
