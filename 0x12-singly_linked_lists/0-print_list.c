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

	while (position != NULL)
	{
		if (position->str != NULL)
		{
			_putchar(position->len);
			_putchar(position->str);
		}
		else
			_putchar("[0] (nil)\n");
		i += 1;
		position = position->next;
	}
	return (i);
}
