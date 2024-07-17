#include "search_algos.h"

/**
 * linear_skip - Singly linked list skiplist algorithm implementation
 *
 * @list: Pointer to the head of the list to search
 * @value: Value to be found
 *
 * Return: Pointer to the first node containing value, otherwise NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cur = NULL, *prev = NULL;

	if (list == NULL)
		return (NULL);

	prev = cur = list;

	while (cur->express && cur->n < value)
	{
		prev = cur;
		cur = cur->express;
		printf("Value checked at index [%ld] = [%d]\n", cur->index, cur->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		prev->index, cur->index);

	while (prev && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}
	return (NULL);
}
