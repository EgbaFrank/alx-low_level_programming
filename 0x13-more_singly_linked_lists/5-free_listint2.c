#include "lists.h"

/**
 * free_listint2 - frees nodes of a listint_t list,
 * as well as the head pointer
 * @head: double pointer to the first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
