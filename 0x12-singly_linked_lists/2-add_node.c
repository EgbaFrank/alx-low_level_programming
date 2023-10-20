#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * of a list_t list
 * @head: a pointer to the head
 * @str: The string data to be stored
 *
 * Return: a pointer to the new node;
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
