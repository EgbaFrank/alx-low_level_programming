#include "search_algos.h"

/**
 * advanced_binary - Implements a binary search algorithm
 * which returns the target's first occurence using recursion
 *
 * @array: Pointer to the first element in the array
 * @size: Number of elements in the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size <= 0)
		return (-1);

	return (recurse_binary(array, 0, size - 1, value));
}

/**
 * recurse_binary - Actual recursive binary search
 *
 * @array: Pointer to the first element in the array
 * @left: Lower boundary of the array
 * @right: Higher boundary of the array
 * @value: Value to be found
 *
 * Return: The index of the value if found, otherwise -1
 */

int recurse_binary(int *array, size_t left, size_t right, int value)
{
	int result = -1;
	size_t i, mid;

	if ((ssize_t) left > (ssize_t) right)
		return (-1);

	if (left == right)
		return ((array[left] == value) ? (ssize_t) left : -1);

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
	{
		result = recurse_binary(array, left, mid, value);
		return ((result == -1) ? (int) mid : result);
	}

	else if (array[mid] < value)
		return (recurse_binary(array, mid + 1, right, value));
	else
		return (recurse_binary(array, left, mid - 1, value));

	return (result);
}
