/**
 * _strstr - searches for a substring within a string
 * @haystack: where to check
 * @needle: string to check for
 *
 * Return: pointer to string if found or null if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (0);
	}

	while (*haystack)
	{
		char *h = haystack;

		while (*needle && (*needle == *haystack))
		{
			++needle;
			++haystack;
		}

		if (*needle == '\0')
		{
			return (h);
		}

		++haystack;
	}

	return (0);
}
