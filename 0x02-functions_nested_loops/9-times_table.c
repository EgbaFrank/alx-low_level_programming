#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void success
 */

void times_table(void)
{
	int num1 = 0;

	while (num1 < 10)
	{
		int num2 = 0;

		while (num2 < 10)
		{
			int num3 = num1 * num2;

			if (num3 < 10)
			{
				_putchar('0' + num3);
			}

			else
			{
				_putchar('0' + (num3 / 10));
				_putchar('0' + (num3 % 10));
			}

			if (num2 < 9)
			{
				_putchar(',');

				if ((num1 * (num2 + 1)) < 10)
				{
					_putchar(' ');
				}

				_putchar(' ');
			}
			++num2;
		}
		_putchar('\n');
		++num1;
	}
}
