#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to a singly linked list to print.
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
