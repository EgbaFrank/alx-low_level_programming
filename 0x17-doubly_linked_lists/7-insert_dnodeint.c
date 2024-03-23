#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: list's double head pointer
 * @idx: index to be inserted in
 * @n: data to be entered
 *
 * Return: address of new node, NULL otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i;
	dlistint_t *new = NULL, *cur = NULL;

	/* Handling invalid lists and malloc failures */
	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* Assigning data and pointers to new */
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	/* Handling insertion at the beginning */
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	cur = *h;
	/* Handling insertion at the end and at a given index */
	for (i = 0; cur != NULL && i < idx; ++i)
		cur = cur->next;
	/* if idx is out of range */
	if (cur == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = cur->next;
	new->prev = cur;
	if (cur->next != NULL)
		cur->next->prev = new;
	cur->next = new;

	return (new);
}
