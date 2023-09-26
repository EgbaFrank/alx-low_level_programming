/**
 * _strstr - searches for a substring within a string
 * @haystack: where to check
 * @needle: string to check for
 *
 * Return: pointer to string if found or null if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (*needle != '\0' && haystack[i] == *needle)
		{
			const char *h = &haystack[i];
			const char *n = needle;

			while (*n == *h && *n != '\0')
			{
				++h;
				++n;
			}

			if (*n == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (0);
}
