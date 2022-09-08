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

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", (sizeof(ll));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
