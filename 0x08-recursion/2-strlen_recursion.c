/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string whose lenght to find
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return (count + _strlen_recursion(s + 1));
}
