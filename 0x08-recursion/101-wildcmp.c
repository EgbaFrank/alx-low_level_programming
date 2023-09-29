/**
 * wildcmp - compares a string taking in account wild character *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 is similar 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}

		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
