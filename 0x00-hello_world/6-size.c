#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	char c;
	float f;
	long l;
	long long ll;

	printf("Size of a char: %c byte(s)\n", sizeof(c);
	printf("Size of an int: %d byte(s)\n", sizeof(i);
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %f byte(s)\n", sizeof(f);
	return (0);
}
