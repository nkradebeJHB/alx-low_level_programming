#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of the list
 * @head: pointer to head if the list
 * @index: Node to stop at, the nth node
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next ==)
			return (NULL);
		head = head->next;
	}
	return (head);
}
