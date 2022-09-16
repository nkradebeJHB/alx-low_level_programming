#include "main.h"

/**
 * print_line - draws a a straight line
 * @n: the number of underscores to print to make the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n ; i++)
			_putchar('_');
	_putchar('\n');
}
