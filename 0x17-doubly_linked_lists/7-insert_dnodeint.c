#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index- insert a node at an index (idx)
 * @h: the head of the list
 * @idx: the targeted index
 * @n: the new node val
 * Return: the addr of the new added node , NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr_n = *h;
	dlistint_t *prev_n = NULL;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || curr_n == NULL)
		return (NULL);
	/*verifie position*/
	while (curr_n->prev != NULL)
		curr_n = curr_n->prev;
	/*if inserting into head*/
	if (idx == 0)
	{
		curr_n = add_dnodeint(&curr_n, (const int)n);
		*h = curr_n;
		return (curr_n);
	}
	/*search for the right index*/
	while (idx != 0 && curr_n != NULL)
	{
		prev_n = curr_n;
		curr_n = curr_n->next;
		idx--;
	}
	/*if curr_n , thus index is in range*/
	if (curr_n != NULL)
	{
		/*if it's idx pointing to the last element*/
		if (curr_n != NULL && curr_n->next == NULL)
		{
			curr_n = add_dnodeint_end(&curr_n, (const int)n);
			return (curr_n);
		}
		new_node->n = n;/*conf new node*/
		/*if idx is not at the end or begining of the list*/
		new_node->next = curr_n, new_node->prev = prev_n;
		curr_n->prev = new_node, prev_n->next = new_node;
		return (new_node);
	}
	return (NULL);/*out of range , returning NULL*/
}
