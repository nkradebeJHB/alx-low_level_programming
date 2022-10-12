#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: The pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == NULL)
		return;

	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
