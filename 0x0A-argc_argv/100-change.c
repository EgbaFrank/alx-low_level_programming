#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the amount of coins for change
 * @argc: argument count
 * @argv: argument vector; array of argument strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2};
	int i, change = 0, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

		for (i = 0; i < 4; ++i)
		{
			if (money >= cents[i])
			{
				change += money / cents[i];
				money = money % cents[i];
			}
		}

		if (money == 1)
		{
			++change;
		}

		printf("%d\n", change);

		return (0);
}
