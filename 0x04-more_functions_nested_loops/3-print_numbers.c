#include "main.h"

/**
 * print_numbers - Prints number from zero to nine
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	putchar("\n");
}
