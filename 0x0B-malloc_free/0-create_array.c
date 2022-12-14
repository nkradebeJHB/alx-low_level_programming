#include <stdlib.h>
/**
 * create_array - creates an array and initializes it with a char.
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size > 0)
	{
		ptr = malloc(size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
