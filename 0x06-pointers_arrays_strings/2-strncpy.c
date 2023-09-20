/**
 * _strncpy - copies a string to another
 * @src: source to copy from
 * @dest: destination to copy to
 * @n: number of byte to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}

	for (; i < n; ++i) /* if 1st for exited by null */
	{
		dest[i] = '\0';
	}

	/* replaces the other elements in dest[i] with '\0' */

	return (dest);
}
