#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate the 2nd string to the 1st string up to n bytes
 * @s1: first string
 * @s2: Second string
 * @n: Number of bytes
 * Return: Point to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j <= n)
		n = j;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];
	for (k = 0; k < n; k++)
		ptr[k + i] = s2[k];
	ptr[k + i] = '\0';
	return (ptr);
}
