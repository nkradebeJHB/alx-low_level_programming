#include "lists.h"

/**
 * add_dnodeint - adds a nes node at the beginning of a list
 * @head: point to the beginning of the list
 * @n: value to add into the list
 * Return: pointer to the new element, or NULL if not successful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;

	return (node);
}
