#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at a given index
 * @head: pointer to first node
 * @idx: index where node should be added
 * @n: node data to be added
 *
 * Return: pointer to new node if successful, NULL otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}

	temp = *head;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	while (!(count == (idx - 1)) && temp != NULL)
	{
		temp = temp->next;
		++count;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
