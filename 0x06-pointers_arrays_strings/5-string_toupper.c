/**
 * string_toupper - convert lowercase string to uppercase
 * @str: string to be converted
 *
 * Return: void;
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		++i;
	}

	return (str);
}
