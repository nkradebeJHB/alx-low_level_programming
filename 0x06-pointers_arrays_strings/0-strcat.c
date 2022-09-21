/**
 * _strcat - Concatinates two strings
 * @dest: Pointer to the concatinated string
 * @src: point to the string to concatinate with
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
