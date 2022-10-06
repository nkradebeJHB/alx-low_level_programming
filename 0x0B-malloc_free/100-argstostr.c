#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with arguments concatenated
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, buffer;
	char *ptr;
	
	i = j = len = buffer = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	ptr = (char *)malloc(sizeof(char) * len + ac + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buffer++)
			ptr[buffer] = av[i][j];
		ptr[buffer] = '\n';
		buffer++;
	}
	ptr[buffer] = '\0';
	return (ptr);
}
