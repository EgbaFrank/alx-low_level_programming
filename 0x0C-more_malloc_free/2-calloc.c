#include <stdlib.h>

/**
 * _memset - fills the first n  bytes of memory with a character
 * @s: memory to be filled
 * @b: character to be filled with
 * @n: the first n bytes to be filled
 *
 * Return: pointer to the memory filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: pointer to memory if successful, NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	_memset(arr, 0, (nmemb * size));

	return (arr);
}
