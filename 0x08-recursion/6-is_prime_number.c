/**
 * check_prime - checks that a number is a prime
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int check_prime(int n, int i)
{
	if ((n % i == 0 && i < n) || n < 2)
		return (0);
	else if (n == i - 1)
		return (1);
	else if (i < n)
		return (check_prime(n, i + 1));
	return (1);
}
/**
 * is_prime_number - checks if a number is a prime.
 * @n: the munber to be checked
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
