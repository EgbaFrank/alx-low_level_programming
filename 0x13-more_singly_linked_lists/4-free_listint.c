#include "lists.h"

/**
 * free_listint - free nodes in a listint_t list
 * @head: pointer to first node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
