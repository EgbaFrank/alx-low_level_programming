#include <stdio.h>

/**
 * main - prints alphabets in both upper and lowercase
 *
 * Return: Always (0) success
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
