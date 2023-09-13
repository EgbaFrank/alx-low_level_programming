#include <stdio.h>

/**
 * main - prints of first 98 fibonacci
 *
 * Return: 0 success
 */

int main(void)
{
	long unsigned int fib1 = 1, fib2 = 2;
	int i;

	for (i = 0; i < 47; ++i)
	{
		if (i < 46)
		{
			printf("%lu, %lu, ", fib1, fib2);
		}

		else
		{
			printf("%lu, %lu\n", fib1, fib2);
		}

		fib1 += fib2;
		fib2 += fib1;
	}

	return (0);
}
