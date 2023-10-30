#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string
 * to be written to file
 *
 * Return: 1 on success or -1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrtn;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		wrtn = write(fd, text_content, strlen(text_content));
		if (wrtn == -1)

		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}
