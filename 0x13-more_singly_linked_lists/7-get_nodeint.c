#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t list
 * @head: pointer to the first node
 * @index: index to be found
 *
 * Return: the index if successful, or NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}

		++count;
		head = head->next;
	}

	return (NULL);
}
