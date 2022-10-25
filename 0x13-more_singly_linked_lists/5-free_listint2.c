#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer toa a head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *curlistint, *temp;

	if (head == NULL)
		return;
	curlistint = *head;
	while (curlistint != NULL)
	{
		temp = curlistint;
		curlistint = curlistint->next;
		free(temp);
	}
	*head = NULL;
}
