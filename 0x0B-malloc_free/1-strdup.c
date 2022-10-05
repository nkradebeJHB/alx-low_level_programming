#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
