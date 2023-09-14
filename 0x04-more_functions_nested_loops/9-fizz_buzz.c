#include <stdio.h>

/**
 * main - the Fizz-Buzz test
 *
 * Return: (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}

		else if (i % 5 == 0 && i < 100)
		{
			printf("Buzz ");
			continue;
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}

		if (i == 100)
		{
			printf("Buzz\n");
			break;
		}

		printf("%d ", i);
	}

	return (0);
}
