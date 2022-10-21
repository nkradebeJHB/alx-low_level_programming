#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: points to the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *position = h;

	while (position)
	{
		if (position->str != NULL)
			printf("[%d] %s\n", position->len, position->str);
		else
			printf("[0] (nil)\n");
		i++;
		position = position->next;
	}
	return (i);
}
