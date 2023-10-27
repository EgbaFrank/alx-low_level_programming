#include "main.h"

/**
 * clear_bit - set bitvalue to 0
 * @n: pointer to literal to change
 * @index: bit to be changed
 *
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(size_t) * 7)
	{
		return (-1);
	}

	if (*n & (1 << index))
	{
		*n = *n ^ (1 << index);
	}

	return (1);
}
