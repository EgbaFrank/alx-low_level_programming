#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			hash_node_t *tmp;

			tmp = node->next;
			free(node->key);
			free(node->value);
			node->next = NULL;
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
