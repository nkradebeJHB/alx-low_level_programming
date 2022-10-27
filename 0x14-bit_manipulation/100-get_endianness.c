#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 *  Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *check;
	int i = 1;

	check = (char *)&i;

	if (*check)
		return (1);
	return (0);
}
