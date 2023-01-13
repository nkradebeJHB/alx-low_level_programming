#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: the key of the value in the ht.
 *
 * Return: the value associated with the key, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht ==NULL || *key == '\0' || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	node = ht->array[i];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return (node == NULL ? NULL : node->value);
}
