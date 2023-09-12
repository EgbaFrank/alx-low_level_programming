#include "main.h"

/**
 * print_sign - checks if a number is postive, negative or zero
 * @n: number to be checked
 *
 * Return: '1' if positve, '-1' if negetive and '0' if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
