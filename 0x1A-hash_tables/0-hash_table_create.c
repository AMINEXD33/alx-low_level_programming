#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_create- create a hash table
 * @size: the size of the hash table
 * Return: the addresse of the table, NULL if something
 * went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int x;
	struct hash_table_s *TABLE = NULL;

	/*allocate memo for the hash table*/
	TABLE = malloc(sizeof(hash_table_t));
	if (TABLE == NULL)
		return (NULL);

	/*allocate memo for the pointers array*/
	TABLE->array = NULL;
	TABLE->array = malloc(sizeof(hash_node_t *) * size);
	if (TABLE->array == NULL)
	{
		free(TABLE);
		return (NULL);
	}
	/*null the newly allocated pointers array*/
	for (x = 0; x < size; x++)
	{
		TABLE->array[x] = NULL;
	}
	return (TABLE);
}
