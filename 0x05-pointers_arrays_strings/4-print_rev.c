#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: input string to print.
 */
 void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
