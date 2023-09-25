/**
 * _strchr - locates a character in a string
 * @s: string to search from
 * @c: character to look for
 *
 * Return: pointer to the first instance of character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		++i;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	else
	{
		return (0);
	}
}
