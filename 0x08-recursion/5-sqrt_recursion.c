/**
 * sqrt - checks if a value has a square root
 * @n: the number to be checked
 * @base: base number to check
 * Return: natural square root of number base
 */
int sqrt(int n , i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqrt(n, i + 1));
}
/**
 * int _sqrt_recursion - returns the natural square root of a number.
 * @n: number to check the square root
 * Return: -1 if n does not have a square root,
 * the square root if it exist
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n , base));
}
