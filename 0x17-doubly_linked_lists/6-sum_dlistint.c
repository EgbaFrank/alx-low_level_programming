#include "lists.h"

/**
 * sum_dlistint - finds the sum of all data a dlistint_t linked list
 * @head: list's head pointer
 *
 * Return: sum of all data, 0 otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
