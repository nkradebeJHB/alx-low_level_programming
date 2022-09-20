/**
 * rev_string - reverse a string
 * @s: inout string to be reversed.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char r[1000];

	i = j = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[j] = r[i];
		i--;
		j++;
	}
	s[j++] = '\0';
}
