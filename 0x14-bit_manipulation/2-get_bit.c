#include "main.h"

/**
 * get_bit - finds trhe value of a bit at a given index
 * @n: number to be checked
 * @index: index to check
 *
 * Return: bit value or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 7)
		return (-1);

	if (n & (1 << index))
		return (1);

	else
		return (0);
}
