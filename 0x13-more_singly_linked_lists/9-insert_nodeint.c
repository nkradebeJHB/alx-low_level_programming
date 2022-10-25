#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a node at index
 * @head: pointer to head of the list
 * @index: location to insert node
 * @n: the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newlistint, *curlistint;

	curlistint = *head;
	newlistint = malloc(sizeof(listint_t));
	if (newlistint == NULL)
		return (NULL);

	newlistint->n = n;
	if (index == 0)
	{
		newlistint->next = curlistint;
		*head = newlistint;
		return (*head);
	}
	while (index > 1)
	{
		curlistint = curlistint->next;
		index--;
		if (!curlistint)
		{
			free(newlistint);
			return (NULL);
		}
	}
	newlistint->next = curlistint->next;
	curlistint->next = newlistint;
	return (newlistint);
}
