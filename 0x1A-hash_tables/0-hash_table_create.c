#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table, or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *node = NULL;
	unsigned long int i;

	node = malloc(sizeof(hash_table_t));
	if (!node)
		return (NULL);

	node->size = size;
	node->array = malloc(sizeof(hash_node_t **) * size);
	if (!node->array)
	{
		free(node);
		return (NULL)
	}
	for (i = 0; i < size; i++)
		(node->array)[i] = NULL;
	return (node);
}
