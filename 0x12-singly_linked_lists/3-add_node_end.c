#include "lists.h"

/**
 * add_node_end - add a new node to the end of a list_t list
 * @head: pointer to list's head
 * @str: string data to be inputted
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL || head == NULL || str == NULL)
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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (new_node);
}
