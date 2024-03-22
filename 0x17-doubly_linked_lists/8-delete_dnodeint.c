#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 * @head: list's head double pointer
 * @index: index of node to be delete
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *cur = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;

	/* Handling node at the beginning */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);

		return (1);
	}

	/* Handling node at end and other indices*/
	for (i = 0; cur != NULL && i < index; ++i)
		cur = cur->next;

	/* Index is out of range if loop exits with NULL */
	if (cur == NULL)
		return (-1);

	if (cur->prev != NULL)
		cur->prev->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;

	free(cur);

	return (1);
}
