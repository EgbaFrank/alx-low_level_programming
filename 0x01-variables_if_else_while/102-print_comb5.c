#include <stdio.h>

/**
 * main - prints a combination of two two digits
 *
 * Return: Always (0) success
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 100)
	{
		int num2 = num1 + 1;

		while (num2 < 100)
		{
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');
			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));

			if (num1 == 98 && num2 == 99)
			{
				break;
			}

			putchar(',');
			putchar(' ');
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
