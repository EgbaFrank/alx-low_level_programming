/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if strings are equal, negetive if s1 is less
 * than s2 and positive if s1 is greatere than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		++i;
	}

	return (s1[i] - s2[i]);
}
