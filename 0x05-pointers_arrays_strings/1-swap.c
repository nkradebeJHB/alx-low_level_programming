/**
 * swap_int - swaps the value of two integers.
 * @a: first interger to swap.
 * @b: second integer to swap.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
