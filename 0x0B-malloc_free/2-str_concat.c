#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new memory space of both strings
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *ptr;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			++len1;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			++len2;

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; ++i)
		ptr[i] = s1[i];

	for (j = 0; j < len2; ++i, ++j)
		ptr[i] = s2[j];

	ptr[i] = '\0';
	return (ptr);
}
