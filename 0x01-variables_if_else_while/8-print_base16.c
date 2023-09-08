#include <stdio.h>

/**
 * main - print the single digits of base 16
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i;
	char num;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
