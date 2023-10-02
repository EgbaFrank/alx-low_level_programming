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
	int i, sum = 0;

	for (i = 1; i < argc; ++i)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", sum);

	return (0);
}
