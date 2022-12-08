#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a linked list
 * @head: pointer to the list
 * @index: nth node
 * Return: nth node, Null if no nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	int count = 0;

	while (node && count != index)
	{
		node = node->next;
		count++;
	}
	if (node && count == index)
		return (node);
	return (NULL);
}
