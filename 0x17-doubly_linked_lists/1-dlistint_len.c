#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: pointer to the list
 * Return: nomber of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count)
}
