#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
