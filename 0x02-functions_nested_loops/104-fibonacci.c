#include <stdio.h>

/**
 * main - prints of first 98 fibonacci
 *
 * Return: 0 success
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2;
	unsigned long int fib1_num1, fib1_num2, fib2_num1, fib2_num2;
	int i;

	for (i = 0; i < 45; ++i)
	{
		printf("%lu, %lu, ", fib1, fib2);
		fib1 += fib2;
		fib2 += fib1;
	}
	fib1_num1 = fib1 / 1000000000;
	fib1_num2 = fib1 % 1000000000;
	fib2_num1 = fib2 / 1000000000;
	fib2_num2 = fib2 % 1000000000;

	for (i = 0; i < 4; ++i)
	{
		if (i < 3)
			printf("%lu%lu, %lu%lu, ", fib1_num1, fib1_num2, fib2_num1, fib2_num2);
		else
			printf("%lu%lu, %lu%lu\n", fib1_num1, fib1_num2, fib2_num1, fib2_num2);

		fib1_num2 += fib2_num2;
		if (((fib1_num2 + fib2_num2) % 1000000000) >= 1)
			fib1_num1 += 1;

		fib1_num1 += fib2_num1;

		fib2_num2 += fib1_num2;
		if (((fib2_num2 + fib1_num2) % 1000000000) >= 1)
			fib2_num1 += 1;

		fib2_num1 += fib1_num1;
	}
	return (0);
}
