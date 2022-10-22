#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer to the list head
 * @str: string to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *address, *l_address;
	int len;
	char *copy;

	if (!head)
		return (NULL);
	address = malloc(sizeof(list_t));

	if (address == NULL)
		return (NULL);
	copy = strdup(str);

	for (len = 0; str[len];)
		len++;

	address->str = copy;
	address->len = len;
	address->next = NULL;

	if (!*head)
		*head = address;
	else
	{
		l_address = *head;
		while (l_address->next != NULL)
			l_address = l_address->next;
		l_address->next = address;
	}
	return (*head);
}
