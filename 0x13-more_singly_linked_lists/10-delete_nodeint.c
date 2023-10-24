#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific 
 * index in a listint_t list
 * @head: double pointer to the first node
 * @index: what node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *del = NULL;
	size_t count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}

	else
	{
		while (count != index && temp->next != NULL)
		{
			temp = temp->next;
			++count;
		}

		if (temp->next == NULL)
		{
			return (-1);
		}

		del = temp->next;
		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
	}

	return (1);
}
