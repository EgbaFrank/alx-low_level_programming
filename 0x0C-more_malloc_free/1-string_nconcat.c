#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: First string
 * @s2: second string
 * @n: number of byte of second string
 *
 * Return: pointer to new string if succussful, otherwise NULL;
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, len, i, j;
	char *str;

	if (s1 == NULL)
		len1 = 0;

	else
		while (s1[len1] != '\0')
			++len1;

	if (s2 == NULL)
		len2 = 0;

	else
		while (s2[len2] != '\0')
			++len2;

	if (n < len2)
		len2 = n;

	len = len1 + len2;
	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	for (j = 0; j < len1; ++j, ++i)
		str[i] = s1[j];

	for (j = 0; j < len2; ++j, ++i)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
