#include "main.h"

/**
 * read_textfile - reads a textfile and printd it to stdout
 * @filename: name of file to be read
 * @letters: number of letters to be read
 *
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *msg = malloc(sizeof(char) * letters);
	ssize_t char_read, char_wrtn, fd;

	if (filename == NULL || msg == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char_read = read(fd, msg, letters);

	if (char_read == -1)
	{
		close(fd);
		return (0);
	}

	char_wrtn = write(STDOUT_FILENO, msg, char_read);

	if (char_wrtn == -1 || char_wrtn != char_read)
	{
		close(fd);
		return (0);
	}

	free(msg);
	close(fd);

	return (char_wrtn);
}
