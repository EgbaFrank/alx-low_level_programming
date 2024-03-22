#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at a dlistint_t list end
 * @head: list's head double pointer
 * @n: data to be added
 *
 * Return: new node address, or NULL otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur = NULL, *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	/* Return NULL if list doesn't exist or new is NULL */
	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	/* Add new as head if list is empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	cur = *head;

	/* add new at list's end */
	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new;
	new->prev = cur;

	return (new);
}
