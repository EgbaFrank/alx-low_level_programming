#include "main.h"

/**
 * flip_bits - finds the number of bits to flip to get a number
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o = n ^ m, i, bit_no = 0;

	for (i = 0; i < sizeof(n) * 4; ++i)
	{
		if (o & (1 << i))
		{
			++bit_no;
		}
	}

	return (bit_no);
}
