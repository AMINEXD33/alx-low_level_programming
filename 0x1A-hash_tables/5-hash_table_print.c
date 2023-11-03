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
	/*=====TABLE CHECK=====*/
	if (ht == NULL || ht->array == NULL)
		return;

	/*====PRINT TABLE=====*/

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
			print_linked_list(ht->array[x]);
	}

}
/**
 * print_linked_list- print a linked list
 * @head: the head of the linked list
 */
void print_linked_list(struct hash_node_s *head)
{
	struct hash_node_s *node = NULL;

	if (head == NULL)
		return;
	node = head;
	printf("{");
	while (node != NULL)
	{
		if (node->value != NULL && node->key != NULL)
			printf("'%s':'%s'", node->key, node->value);
		node = node->next;
	}
	printf("}\n");
}

