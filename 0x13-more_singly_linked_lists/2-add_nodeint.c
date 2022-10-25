#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlistint;

	newlistint = *head;

	newlistint = malloc(sizeof(listint_t));

	if (newlistint == NULL)
		return (NULL);

	newlistint->n = n;
	newlistint->next = *head;
	*head = newlistint;
	return (*head);
}
