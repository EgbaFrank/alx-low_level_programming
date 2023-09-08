#include <stdio.h>

/**
 * main - prints spaced, comma-seperated single digits of base 10
 *
 * Return: Always (0) success;
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);

		if (num == 9)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
