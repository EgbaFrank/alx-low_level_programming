#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to be written to
 * @text_content: text to be written
 *
 * Return: 1 on sucess, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wrtn;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
