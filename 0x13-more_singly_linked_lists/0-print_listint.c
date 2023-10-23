#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the first element
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++node_count;
	}

	return (node_count);
}
