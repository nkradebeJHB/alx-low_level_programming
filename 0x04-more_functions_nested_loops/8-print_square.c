#include "main.h"

/**
 * print_square - draws a square using #'s on a terminal.
 * @n: the width and length of the square
 * Return: Nothing
 */
void print_square(int n)
{
	int i, j;

	if ( n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
