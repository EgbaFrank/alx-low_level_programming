#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of array
 * @cmp: function that compares array values
 *
 * Return: index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
