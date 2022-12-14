/**
 * _strncat - concatenates two strings.
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
