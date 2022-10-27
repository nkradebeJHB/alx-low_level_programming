#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if b is NULL ,
 * the is one or more chars in b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int str_len = 0;
	int base = 1;

	if (b == NULL)
		return (0);

	while (b[str_len] != '\0')
	{
		if (b[str_len] == '0' || b[str_len] == '1')
			str_len++;
		else
			return (0);
	}

	for (str_len -= 1; str_len >= 0; str_len--, base *= 2)
	{
		if (b[str_len] == '1')
			sum += 1 * base;
	}
	return (sum);
}
