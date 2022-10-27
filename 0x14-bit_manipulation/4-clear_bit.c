#include "main.h"
/**
 * sets the value of a bit to 0 at a given index.
 * @n: number to be used
 * @index: position to be cleared
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
