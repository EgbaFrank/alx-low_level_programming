/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
