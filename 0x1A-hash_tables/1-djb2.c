#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 52381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c;
	}
	return (h);
}
