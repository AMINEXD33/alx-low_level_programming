#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get- retrieve the the value of a key
 * @ht: the hash table
 * @key: the key to the value
 * Return: NULL if the key is not found
 * if the key is found return the addresse to it's value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index = 0;
	struct hash_node_s *head = NULL;

	/*=======CHECK POINTERS=======*/
	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (NULL);
	/*========GET INDEX========*/
	index = key_index((unsigned char *)key, ht->size);
	/*===check for collisions==*/
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
