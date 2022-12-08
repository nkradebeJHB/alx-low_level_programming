#include "lists.h"

/**
 * sum_dlistint - sums all the elements in a list
 * @head: pointer to the list
 * Return: the resulting sum, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
