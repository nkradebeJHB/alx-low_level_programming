#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * is_digit - check input is digit
 * @argc: argument count
 * @argv: argument vector
 * @i: int as an iterator for argv[]
 * @j: int as an iterator for argv[][]
 * Return: 0 on success, 1 on failure
 */
int is_digit(int argc, char *argv[], int i, unsigned int j)
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - adds arguments together
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (is_digit(argc, 1, 0, argv) == 1)
	{
		printf("Input is not a digit\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
