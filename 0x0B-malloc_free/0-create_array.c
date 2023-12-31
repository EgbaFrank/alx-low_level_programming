#include <stdlib.h>

/**
 * create_array - create an array of chars, initialize to a
 * specific char
 * @size: size of array
 * @c: Character to be initialized with
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
		ptr[i] = c;
	}

	return (ptr);
}
