#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to the head of the list
 * @n: value to add to the list
 * Return: pointer to the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *i = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (i)
	{
		while (i->next)
			i = i->next;
		node->prev = i;
		i->next = node;
	}
	else
	{
		*head = node;
		node->prev = NULL;
	}
	return (node);
}
