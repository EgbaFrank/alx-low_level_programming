#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: character to be checked
 *
 * Return: 1 is true and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
