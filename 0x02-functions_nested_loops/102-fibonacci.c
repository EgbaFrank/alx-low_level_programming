#include <stdio.h>

/**
 * main - printsthe first 50 fibonacci numbers
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	unsigned long int num1 = 1, num2 = 2;

	for (i = 0; i < 25; ++i)
	{
		if (i < 24)
		{
			printf("%lu, %lu, ", num1, num2);
		}

		else
		{
			printf("%lu, %lu\n", num1, num2);
		}

			num1 += num2;
			num2 += num1;
	}

	return (0);
}
