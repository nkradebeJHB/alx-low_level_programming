#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: The array being passed.
 * @size: The number of indexes in the array.
 * @cmp: The pointer to a function.
 * Return: The index of the first element,
 * If no element matches, return -1 and If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*ptr)(int);

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);
	ptr = cmp;
	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}
	return (-1);
}
