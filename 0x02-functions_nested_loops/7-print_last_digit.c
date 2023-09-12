#include "main.h"
#include <stdio.h>

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
		_putchar('0' + -((long int)n % 10));

		return (-((long int)n % 10));
	}

	else
	{
	_putchar('0' + (n % 10));

	return (n % 10);
	}
}
