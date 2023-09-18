#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: string to be printed
 *
 * Return: void;
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		++i;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}

	else
	{
		j = ((i + 1) / 2);
	}

	for (; j < i; ++j)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
