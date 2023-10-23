#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: a pointer to a pointer to the first node
 * @n: data to be stored in new node
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
