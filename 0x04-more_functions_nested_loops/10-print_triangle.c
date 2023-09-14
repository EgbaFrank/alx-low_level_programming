#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = size; i < 0; --i)
	{
		for (j = 0; j < (i - 1); ++j)
		{
			_putchar(' ');
		}

		for (k = (i - 1); k < size; ++k)
		{
			_putchar("#");
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
