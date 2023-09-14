#include "main.h"

/**
 * print_diagonal - draws a specified diagonal line length
 * @n: number of diagonal lines to be drawn
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
