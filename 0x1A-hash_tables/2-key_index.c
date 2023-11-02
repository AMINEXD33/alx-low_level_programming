#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * key_index- this function will hash a string , then
 * map it to an index by respect to the size of the table
 * @key: the string
 * @size: the size of the hash table
 * Return: the index where the item should go in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keyy = hash_djb2(key);

	return (keyy % size);
}
