#include "main.h"

/**
 * set_bit - set the bitvalue to 1
 * @n: pointer to literal to change
 * @index: bit to be changed
 *
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(size_t) * 7)
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (1);
}
