#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to first element
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		++node_count;
	}

	return (node_count);
}
