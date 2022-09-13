#include "main.h"

/**
 * void print_alphabet_x1 - function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; i++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
