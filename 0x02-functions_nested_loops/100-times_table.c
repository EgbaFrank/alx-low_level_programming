#include "main.h"

/**
 * print_times_table - prints the multiplication table of a given number
 * @n: number to be printed
 *
 * Return: void success;
 */

void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i = n + 1, num1, num2, num3;

	for (num1 = 0; num1 < i; ++num1)
	{
	for (num2 = 0; num2 < i; ++num2)
	{
		num3 = num1 * num2;
		if (num3 < 10)
		{
			_putchar('0' + num3);
		}
		else if ((num3 >= 10) && (num3 < 100))
		{
			_putchar('0' + (num3 / 10));
			_putchar('0' + (num3 % 10));
		}
		else
		{
			_putchar('0' + (num3 / 100));
			_putchar('0' + ((num3 % 100) / 10));
			_putchar('0' + (num3 % 10));
		}
		if (num2 < n)
		{
			_putchar(',');
			if ((num1 * (num2 + 1)) < 100)
			{
				if ((num1 * (num2 + 1)) < 10)
					_putchar(' ');
				_putchar(' ');
			}
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
	}
}
