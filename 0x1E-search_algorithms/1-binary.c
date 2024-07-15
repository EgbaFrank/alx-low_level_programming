#include "search_algos.h"

/**
 * binary_search - Implements the Binary search algorithm
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		size_t i;

		/* Print the current subarray being searched */
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);

			if (i != right)
				printf(", ");
		}
		putchar('\n');

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}
