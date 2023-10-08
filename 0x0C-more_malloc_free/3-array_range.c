#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: least integer
 * @max: max integer value
 *
 * Return: pointer to array if succcessful, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, c;

	if (min > max)
	{
		return (NULL);
	}

	c = max - min + 1;
	arr = malloc(sizeof(int) * c);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= c; ++i)
	{
		arr[i] = min + i;
	}

	return (arr);
}
