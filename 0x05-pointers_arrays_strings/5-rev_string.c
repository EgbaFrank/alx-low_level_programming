#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		++i;
	}

	for (j = 0; j < i; ++j, --i)
	{
		int tmp = s[j];

		s[j] = s[i - 1];
		s[i - 1] = tmp;
	}
}
