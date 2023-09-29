/**
 * check - checks if a string is palindrome
 * @c: string to be checked
 * @b: start of the string
 * @d: end of the string
 *
 * Return: 1 if true and 0 otherwise
 */

int check(char *c, int b, int d)
{
	if (b >= d)
	{
		return (1);
	}

	if (c[b] != c[d])
	{
		return (0);
	}

	return (check(c, (b + 1), (d - 1)));
}

/**
 * _strlen - finds the lenght of a string
 * @a: string whose lenght to be found
 *
 * Return: the lenght of string
 */

int _strlen(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}

	return (1 + _strlen(a + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if true and 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check(s, 0, (len - 1)));
}
