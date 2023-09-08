#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *
 * Return: Always (0) success
 */
int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
