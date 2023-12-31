#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*hash_table_set- add a node to the hash table
* @ht: the hashtable
* @key: the key
* @value: the value
* Return: 1 if the node is added, 0 if an error accured
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	struct hash_node_s  *head = NULL;
	struct hash_node_s  *node  = NULL;

	/*============SET UP============*/
	/*check if the key and table are not null*/
	if ((key == NULL) || (strcmp(key, "") == 0) || (ht == NULL))
		return (FALSE);
	/*make new node*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (FALSE);
	node->key = strdup(key);
	node->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	ht->items_in += 1;
	/*update value if it exists already*/
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (TRUE);
		}
		head = head->next;
	}
	/*===========ADD NODE============*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (TRUE);
	}
	head = ht->array[index];
	ht->array[index] = node;
	node->next = head;
	return (TRUE);
}
