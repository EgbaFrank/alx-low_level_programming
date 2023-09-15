#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: (0) success
 */

int main(void)
{
	long int n = 612852475143, i;

	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			n /= i;
		}

	}
	printf("%ld\n", n);

	return (0);
}
