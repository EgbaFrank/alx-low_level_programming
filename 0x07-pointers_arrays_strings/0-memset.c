/**
 * _memset - fills the first n  bytes of memory with a character
 * @s: memory to be filled
 * @b: character to be filled with
 * @n: the first n bytes to be filled
 *
 * Return: pointer to the memory filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);
}
