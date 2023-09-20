/**
 * cap_string - capitalize the first letter of a word
 * the word is seperated by space,
 * tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }
 * @str: buffer containing words
 *
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int i = 0;
	char separator[] = " ,;.!?\"(){}\n\t";

	while (str[i] != '\0')
	{
		int j;

		for (j = 0; j < 13; ++j)
		{
			if (str[i] == separator[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
		++i;
	}

	return (str);
}
