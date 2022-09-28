#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumx, sumy;

	sumx = sumy = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumx += a[i];
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == (size - 1))
				sumy += a[i];
		}
	}
	printf("%d, %d\n", sumx, sumy);
}
