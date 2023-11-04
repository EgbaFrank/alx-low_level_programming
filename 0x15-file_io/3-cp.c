#include "main.h"

/**
 * _close - close 2 file descriptors
 * @fd1: first file descrptor
 * @fd2: second file descriptor
 *
 * Return: void
 */

void _close(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}


/**
 * cp - copies the content of file1 to file2
 * @file1: copy from
 * @file2: copy to
 *
 * Return: 0 if successful, 98 - 100 otherwise
 */

size_t cp(char *file1, char *file2)
{
	int fd1 = open(file1, O_RDONLY);
	int fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	ssize_t rd, wt;
	char buf[BUF_SIZE];

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	while ((rd = read(fd1, buf, BUF_SIZE)) > 0)
	{
		wt = write(fd2, buf, rd);
		if (wt == -1 || wt != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			_close(fd1, fd2);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file1);
		_close(fd1, fd2);
		exit(98);
	}
	_close(fd1, fd2);

	return (0);
}

/**
 * main - copies a file
 * @argc:argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 97 - 100 otherwise
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
