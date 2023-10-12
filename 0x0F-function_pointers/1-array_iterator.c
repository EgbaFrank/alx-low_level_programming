#include <stddef.h>

/**
 * array_iterator - iterate an array and executes a function
 * @array: array to iterate through
 * @size: size of array
 * @action: function to run
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 && action != 0)
	{
		size_t i;

		for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
	}
}
