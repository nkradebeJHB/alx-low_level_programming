#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;
	dlistint_t *node;

	if (head)
	{
		node = head;
		next_node = head->next;
		while (next_node)
		{
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node);
	}
}
