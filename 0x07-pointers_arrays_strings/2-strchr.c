/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] == c; i++)
	{
		if (s[i] == c)
			return (s[i]);
		else if (s[i + 1] == c)
			return (s[i + 1]);
	}
	return ('\0');
}
