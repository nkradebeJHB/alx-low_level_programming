#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer of head of the list.
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	if (*head)
	{
		i = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	else
		i = 0;
	return (i);
}
