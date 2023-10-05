#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of the program
 * @ac: argument count
 * @av: pointer to array of strings
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			++j;
		}

		len += j + 1;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			str[n] = av[i][j];
			++n;
			++j;
		}
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';

	return (str);
}
