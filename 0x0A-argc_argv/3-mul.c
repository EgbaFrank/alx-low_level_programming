#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers as program arguments
 * @argc: argument count
 * @argv: argument vector holds argument strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
