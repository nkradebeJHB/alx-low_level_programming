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

	while (b[str_len] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			str_len++;
	}

	while (str_len)
	{
		sum += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (sum);
}
