#include <stdio.h>

/**
 * main - Prints the combination of two non repeating digits
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
			putchar('0' + num1);
			putchar('0' + num2);

			if (num1 == 8 && num2 == 9)
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
