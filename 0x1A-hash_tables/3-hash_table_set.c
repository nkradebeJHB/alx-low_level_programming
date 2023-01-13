#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: is the hash table you want to add or update.
 * @key: is the key to add.
 * @value: the value associated with the key.
 *
 * Return: if successful returns 1, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, j;
	char *dup_value;
	hash_nodw_t *new_ht;

	if (*key == '\0' || value == NULL || key == NULL)
		return (0);
	dup_value = strdup(value);

	i = key_index((const unsigned char *)key, ht->size);

	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = dup_value;
			return (1);
		}
	}

	new_ht malloc(sizeof(hash_node_t));

	if (new_ht == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_ht->key = strup(key);

	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = dup_value;
	new_ht->next = ht->array[i];
	ht->array[i] = new_ht;

	return (1);
}
