#include "lists.h"

/**
 * sum_listint - sums a data in a listint_t list
 * @head: pointer to first node
 *
 * Return: sum of a values in list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
