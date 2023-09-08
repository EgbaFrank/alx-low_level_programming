#include <stdio.h>

/**
 * main - prints the combintion of three single digits of base 10
 *
 * Return: Always (0) success
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 10)
	{
		int num2 = num1 + 1;

		while (num2 < 10)
		{
			int num3 = num2 + 1;

			while (num3 < 10)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);

				if (num1 == 7 && num2 == 8 && num3 == 9)
				{
					break;
				}

				putchar(',');
				putchar(' ');
				++num3;
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
