#include "main.h"

/**
 * _strcpy - copies string to buffer
 * @src: string to be copied from
 * @dest: buffer to be copied to
 *
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}

	dest[i] = '\0';

	return (dest);
}
