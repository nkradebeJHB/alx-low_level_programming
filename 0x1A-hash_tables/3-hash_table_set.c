#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: is the hash table you want to add or update.
 * @key: is the key to add.
 * @value: the value associated with the key.
 *
 * return: if successful returns 1, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, j;
	char *dup_value;
	hash_nodw_t *new_ht;
}
