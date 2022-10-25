#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete a node at index
 * @head: pointer of head of the list
 * @index: location of the node to delete
 * Return: pointer to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curlistint, *tmp;

	if (!head || !*head)
		return (-1);
	curlistint = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curlistint);
		return (-1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		curlistint = curlistint->next;
		if (curlistint == NULL)
			return (-1);
	}
	tmp = curlistint->next;
	curlistint->next = tmp->next;
	free(tmp);
	return (1);
}
