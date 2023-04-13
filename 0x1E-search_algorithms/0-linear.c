#include "search_algos.h"

/**
 * linear_search - A function that searches for a 
 * value in an array of integers.
 * @array: is a pointer to the first element of the array.
 * @size:  is the number of elements in array.
 * @value: is the value to search for
 */
int linear_search(int *array, size_t size, int value)
{
	size_t size_i;

	if (array == NULL)
		return (-1);
	for (size_i = 0; size_i < size; size_i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
