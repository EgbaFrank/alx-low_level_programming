#include <stdio.h>

/**
 * main - prints the even numbers sum of the first 50 fibonacci numbers
 *
 * Return: 0 success
 */

int main(void)
{
	int i;

	unsigned long int num1 = 1, num2 = 2, sum = 0;

	for (i = 0; i < 16; ++i)
	/*16 is used because its fib num is less than 4,000,000*/
	{
		if (num1 % 2 == 0)
		{
			sum += num1;
		}

		if (num2 % 2 == 0)
		{
			sum += num2;
		}

		num1 += num2;
		num2 += num1;
	}

	printf("%lu\n", sum);

	return (0);
}
