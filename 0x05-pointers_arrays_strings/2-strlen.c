/**
 * _strlen - gets the lenght of a string.
 * @s: pointer to a string.
 * Return: length to a string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
