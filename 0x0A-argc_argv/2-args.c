#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: argument count
 * @argv: argument vector holds argument strings
 *
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
