/**
 * leet - encodes a string into 1337(leek)
 * @str: string to be encoded
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i = 0;
	char array1[] = "AaEeOoTtLl";
	char array2[] = "4433007711";

	while (str[i] != '\0')
	{
		int j;

		for (j = 0; j < 10; ++j)
		{
			if (str[i] == array1[j])
			{
				str[i] = array2[j];
			}
		}
		++i;
	}

	return (str);
}
