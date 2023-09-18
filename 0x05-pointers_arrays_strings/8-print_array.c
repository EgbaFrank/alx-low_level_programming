#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n number of array elements
 * @a: array to be printed
 * @n: number of elemnets to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
