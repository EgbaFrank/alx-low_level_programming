#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: head pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;

		free(head);
		head = next;
	}
}
