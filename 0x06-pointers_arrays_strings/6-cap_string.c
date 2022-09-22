/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?(){}";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; sep[j]; j++)
		{
			if (s[i] == sep[j])
			{
				s[i] = ' ';
			}
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
