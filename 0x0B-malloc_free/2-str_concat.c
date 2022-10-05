#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int str1, str2, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if s2 == NULL)
		s2 = "";
	for (str1 = 0; s1[str1]; str1++)
		;
	for (str2 = 0; s2[str2]; str2++)
		;
	sizeBuffer = str1  + str2 + 1;
	p = malloc(sizeof(char) * sizeBuffer);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
		i < str1 ? (ptr[i] = s1[i]) : (ptr[i] = s2[i - str1]);
	return (ptr);
}
