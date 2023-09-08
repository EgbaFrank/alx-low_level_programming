#include <stdio.h>

/**
 * main - print the single digits of base 10
 *
 * Return: Always (0) success
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
