#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of buffer
 * Return: pointer to buffer on success,
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (p == NULL)
		exit(98);
	return (ptr);
}
