/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to check
 * @accept: string of what to check for
 *
 * Return: number of byte containing of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		int match = 0;

		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				++count;

				break;
			}
		}

			if (match == 0)
			{
				break;
			}
	}

	return (count);
}
