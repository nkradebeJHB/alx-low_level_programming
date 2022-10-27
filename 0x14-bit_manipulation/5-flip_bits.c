#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: The number to be modified
 * @m: The value to be modified to
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
