#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void success
 */

void jack_bauer(void)
{
	int num1 = 0;

	while (num1 < 24)
	{
		int num2 = 0;

		while (num2 < 60)
		{
			_putchar('0' + (num1 / 10));
			_putchar('0' + (num1 % 10));
			_putchar(':');
			_putchar('0' + (num2 / 10));
			_putchar('0' + (num2 % 10));
			_putchar('\n');
			++num2;
		}
		++num1;
	}
}
