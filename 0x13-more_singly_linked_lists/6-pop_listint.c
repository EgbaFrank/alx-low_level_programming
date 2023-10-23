#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: double pointer to the first node
 *
 * Return: the data stored in the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node = *head;
	int n = temp_node->n;

	*head = (*head)->next;
	free(temp_node);

	return (n);
}
