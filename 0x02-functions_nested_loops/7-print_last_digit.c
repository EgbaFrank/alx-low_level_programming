#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number digit to be printed
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	_putchar('0' + (n % 10));

	return (n % 10);
}
