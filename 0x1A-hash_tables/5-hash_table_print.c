#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char *space = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (i < ht->size)
	{
		node = ((ht->array)[i]);
		while (node)
		{
			printf("%s'%s': '%s'", space, node->key, node->value);
			space = ", ";
			node = node->next;
		}
		i++;
	}
	puts("}");
}
