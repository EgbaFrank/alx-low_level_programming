#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: double pointer to the first node
 *
 * Return: the data stored in the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int n = temp_node->n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);

	return (n);
}
