#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash_table to be implemented on
 * @key: what to look for
 *
 * Return: value associated with 'key', NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	/* Get index associated with key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if return value */
	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
