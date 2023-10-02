#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of arguments (these are digits)
 * @argc: argument count
 * @argv: argument vector, holds argument strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	char *endptr;

	for (i = 1; i < argc; ++i)
	{
		n = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += n;
		}

	}

	printf("%d\n", sum);

	return (0);
}
