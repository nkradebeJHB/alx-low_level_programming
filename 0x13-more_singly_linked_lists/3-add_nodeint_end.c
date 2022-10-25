#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new nodes to the end of the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current place in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlistint, *curlistint;

	newlistint = malloc(sizeof(listint_t));
	if (newlistint ==NULL)
		return (NULL);

	newlistint->n = n;
	newlistint->next = NULL;

	if (*head == NULL)
	{
		*head = newlistint;
		return (*head);
	}

	curlistint = *head;

	while (curlistint->next != NULL)
		curlistint = curlistint->next;
	curlistint-next = newlistint;
	return (*head);
}
