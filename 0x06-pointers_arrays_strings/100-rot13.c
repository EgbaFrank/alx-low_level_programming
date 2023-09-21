/**
 * rot13 - encodes a string using rot13 cipher
 * @str: string to be encoded
 *
 * Return: pointer to str
 */

char *rot13(char *str)
{
	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i = 0;

	while (str[i] != '\0')
	{
		int j;

		for (j = 0; j < 52; ++j)
		{
			if (str[i] == a1[j])
			{
				str[i] = a2[j];

				break;
			}
		}
		++i;
	}

	return (str);
}
