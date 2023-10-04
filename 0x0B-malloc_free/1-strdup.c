#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated memory
 * @str: string to be copied
 *
 * Return: A pointer to the duplicate string
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *ptr;

	while (str[j] != '\0')
	{
		++j;
	}

	ptr = malloc(sizeof(char) * (j + 1));

	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (j + 1); ++i)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
