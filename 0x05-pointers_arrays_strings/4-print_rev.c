#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		++i;
	}

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

