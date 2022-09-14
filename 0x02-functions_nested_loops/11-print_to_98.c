#include "main.c"
#include <stdio>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number starting from
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", 98);
}
