/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int rev[1000];

	i = j = 0;
	while (i < n)
	{
		rev[i] = a[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		a[i] = rev[j];
		i--;
		j++;
	}
}
