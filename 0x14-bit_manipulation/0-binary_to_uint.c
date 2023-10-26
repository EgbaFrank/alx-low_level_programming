#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to string to be converted
 *
 * Return: the converted number or 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	size_t result = 0, i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}

		else if (b[i] == '0')
		{
			result = result << 1;
		}

		else
		{
			result = 0;
			break;
		}
	}

	return (result);
}
