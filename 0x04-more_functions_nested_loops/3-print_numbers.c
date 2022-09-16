#include "main.h"

/**
 * print_numbers - Prints number from zero to nine
 * Return: Nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar("\n");
}
