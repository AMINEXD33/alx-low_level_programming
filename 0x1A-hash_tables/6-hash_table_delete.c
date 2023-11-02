#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_delete- free a hashtable
 * @ht: the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	/*====CHECK TABLE===*/
	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			delete_linked_list(ht->array[x]);
		}
	}
	free(ht->array);
	free(ht);
}
/**
 * delete_linked_list- free a linked list
 * @head: is the head of the linked list
 */
void delete_linked_list(struct hash_node_s *head)
{
	struct hash_node_s *node = NULL;
	struct hash_node_s *prv_node = NULL;

	node = head;
	while (node != NULL)
	{
		prv_node = node;
		node = node->next;
		if (prv_node->key != NULL)
			free(prv_node->key);
		if (prv_node->value != NULL)
			free(prv_node->value);
		free(prv_node);
		prv_node = NULL;
	}
}
