#include "main.h"

/**
 * _strlen - calculates the lenght of string
 * @s: string lenght to be measured
 *
 * Return: the lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
