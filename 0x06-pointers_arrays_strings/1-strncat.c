/**
 * _strncat - concatenate a specific number of byte from src to dest
 * @src: source of concatenation
 * @dest: destination of concatenation
 * @n: number of byte to concatenate
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];

		++i;
		++j;
	}

	dest[i] = '\0';

	return (dest);
}
