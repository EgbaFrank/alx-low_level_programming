#include <stdio.h>

/**
 * print_to_98 - prints from entered number to 98
 *
 * @n: Number to print from
 *
 * Return: void success
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; ++i)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}

			else
			{
				printf("%d\n", i);
			}
		}
	}

	if (n >= 98)
	{
		for (i = n; i >= 98; --i)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}

			else
			{
				printf("%d\n", i);
			}
		}
	}
}
