#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a number
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;
	int end_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	end_num	= n % 10;

	if (end_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, end_num);
	}

	else if (end_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, end_num);
	}

	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, end_num);

	return (0);
}
