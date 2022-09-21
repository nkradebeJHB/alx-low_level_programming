/**
 * leet - encodes a string into leetspeak
 * @s: pointer to input string
 * Return: pointer to leetspeak string
 */
char *leet(char *s)
{
	int i, j;
	char rep[] = "aAeEoOtTlL";
	char conv[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rep[j] != '\0'; j++)
			if (s[i] == rep[j])
				s[i] = conv[j / 2];
	}
	return (s);
}
