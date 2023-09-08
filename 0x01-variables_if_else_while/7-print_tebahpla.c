#include <stdio.h>

/**
 * main - prints the alphabets in reverse
 *
 * Return: Always (0) success
 */
int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
