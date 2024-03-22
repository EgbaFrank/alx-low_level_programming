#include "lists.h"

/**
 * get_dnodeint_at_index - get node at nth index
 * @head: list's head pointer
 * @index: index to get
 *
 * Return: index entered, NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;

	while (head != NULL && idx < index)
	{
		++idx;
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
