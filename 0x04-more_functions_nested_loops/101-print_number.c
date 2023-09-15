#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int unsign_n = n;

	if (n < 0)
	{
		_putchar('-');
		unsign_n *= -1;
	}

	if (unsign_n / 10)
	{
		print_number(unsign_n / 10);
	}
	_putchar('0' + (unsign_n % 10));
}
