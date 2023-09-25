/**
 * _strpbrk - searches for a string for any of a set byte
 * @s: string to check
 * @accept: what byte to check for
 *
 * Return: a pointer to the byte found in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);

			}
		}
	}

	return (0);
}
