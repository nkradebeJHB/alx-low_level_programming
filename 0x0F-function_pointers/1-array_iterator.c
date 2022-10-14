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
	void (*ptr)(int);

	if (size <= 0)
		return;

	if (array == NULL || action == NULL)
		return;

	ptr = action;
	for (i = 0; i < size; i++)
		ptr(array[i]);
}
