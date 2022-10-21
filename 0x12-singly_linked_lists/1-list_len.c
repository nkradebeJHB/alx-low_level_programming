#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list
 * @h: pointer to the linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size += 1;
		h = h->next;
	}
	return (size);
}
