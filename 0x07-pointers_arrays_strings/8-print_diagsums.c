#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals in a square matrix
 * @a: pointer to an array of int
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0, p;

	for (i = 0; i < size; ++i)
	{
		p = i + (size * i);
		sum1 += *(a + p);
	}

	for (i = 0; i < size; ++i)
	{
		p = (i * size) + (size - 1 - i);
		sum2 += *(a + p);
	}

	printf("%i %i\n", sum1, sum2);
}
