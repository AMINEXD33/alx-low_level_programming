#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_print-print a hash table by table order
 * NOTE table order meaning from table 0 to n
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	struct hash_node_s *node = NULL;
	unsigned long int TRACKER = 0;

	/*=====TABLE CHECK=====*/
	if (ht == NULL || ht->array == NULL)
		return;
	/*====PRINT TABLE=====*/
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			node = ht->array[x];
			while (node != NULL)
			{
				if (node->value != NULL && node->key != NULL)
				{
					printf("'%s': '%s'", node->key, node->value);
					if (ht->items_in - 1 > TRACKER)
						printf(", ");
					TRACKER++;
				}
				node = node->next;

			}
		}
	}
	printf("}\n");
}

