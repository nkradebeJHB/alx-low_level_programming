#include "search_algos.h"

/**
 * binary_search - A function that searches for a value
 * in a sorted array of integers using the Binary
 * search algorithm.
 * @array: pointer to the first element of the array.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1
 * Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, z;

	if (array == NULL)
		return (-1);

	for (j = 0, z = size - 1; z >= j;)
	{
		printf("Searching in array: ");
		for (i = j; i < z; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = j + (z - j) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			z = i - 1;
		else
			j = i + 1;
	}

	return (-1);
}
