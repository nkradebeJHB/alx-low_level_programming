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
	listint_t *newlistint;

	if (head == NULL)
		return (NULL);
	newlistint = malloc(sizeof(listint_t));

	if (newlistint == NULL)
		return (NULL);

	newlistint->n = n;
	if (index == 0)
	{
		newlistint->next = head;
		*head = newlistint;
		return (*head);
	}
	while (index > 1)
	{
		head = head->next;
		index--;
		if (!head)
		{
			free(newlistint);
			return (NULL);
		}
	}
	newlistint->next = head->next;
	head->next = newlistint;
	return (newlistint);
}
