#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginnig of a list
 * @head: pointer to pointer to the head of the list
 * @str: String to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	listint_t *address;
	int i;

	if (!head)
		return (NULL);

	address = malloc(sizeof(list_t));

	if (address == NULL)
		return (NULL);
	
	for (i = 0; str[i];)
		i++;

	address->str = str;
	address->i = i;
	address->next = *head;

	*head = address;

	return (address);
}
