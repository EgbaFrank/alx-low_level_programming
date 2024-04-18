#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be applied on
 * @key: key to be indexed
 * @value: value associated with key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;

	if (key == NULL || ht == NULL)
		return (0);

	/* Create new node */
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	/* Initialize values */
	new->key = strdup(key);
	new->value = strdup(value); /* A copy is used, remember to free*/
	new->next = NULL;

	/* Get node index */
	index = key_index((const unsigned char *)new->key, ht->size);

	/* Store new key at array index */
	/* Checks if node is empty */
	if (ht->array[index] == NULL)
		ht->array[index] = new;

	/* Collusion handling */
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
