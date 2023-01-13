#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *swap;
	hash table_t *table_h = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node != NULL)
			{
				swap = node->next;

				free(node->key);
				free(node->value);
				free(node);
				node = swap;
			}
		}
	}
	free(table_h->array);
	free(table_h);
}
