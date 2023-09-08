#include <stdio.h>

/**
 * main - prints all alphabets except q and e in lowercase
 *
 * Return: Always (0) success;
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}

		putchar(ch);
	}
	putchar('\n');

	return (0);
}
