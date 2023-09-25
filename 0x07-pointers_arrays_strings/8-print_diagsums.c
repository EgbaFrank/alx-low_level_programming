#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals in a square matrix
 * @a: pointer to an array of int
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];

		sum2 += a[i * size + size - 1 - i];

		++i;
	}

	printf("%d %d\n", sum1, sum2);
}
