#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 * 
 */
int main(void)
{
	int size = 1231;
	struct hash_table_s *TABLE = NULL;
	unsigned char *txt = "AMINE MEFTAH";

	printf("setting hashtable of size %d\n", size);
	TABLE = hash_table_create(size);
	TABLE->size = size;
	printf("DONE !\n");
	/******************************/
	printf("HERE\n");
	hash_table_set(TABLE, "hetairas", "HETAIRAS");
	hash_table_set(TABLE, "mentioner", "MENTIONER");
	hash_table_set(TABLE, "depravement", "DEPRAVEMENT");
	hash_table_set(TABLE, "serafins", "SERAFINS");
	hash_table_set(TABLE, "stylist", "STYLIST");
	hash_table_set(TABLE, "subgenera", "SUBGENERA");
	printf("[+]ADDED\n");
	char *value = hash_table_get(TABLE, "hetairas");
	printf("[*]KEY = %s->\t[*]VALUE = %s\n", "hetairas", value);
	value = hash_table_get(TABLE, "mentioner");
	printf("[*]KEY = %s->\t[*]VALUE = %s\n", "mentioner", value);
	value = hash_table_get(TABLE, "depravement");
	printf("[*]KEY = %s->\t[*]VALUE = %s\n", "depravement", value);
	value = hash_table_get(TABLE, "serafins");
	printf("[*]KEY = %s->\t[*]VALUE = %s\n", "serafins", value);
	value = hash_table_get(TABLE, "stylist");
	printf("[*]KEY = %s->\t[*]VALUE = %s\n", "stylist", value);
	value = hash_table_get(TABLE, "subgenera");
	printf("[*]KEY = %s->\t[*]VALUE = %s\n", "subgenera", value);

	hash_table_print(TABLE);
	hash_table_delete(TABLE);
}
