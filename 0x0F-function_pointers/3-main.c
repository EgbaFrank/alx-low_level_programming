#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - A basic calculator
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: _0 if sucessful,
 * _98 if used wrongly
 * _99 if improper operators are used
 * _100 if attempt to divide by _0;
 */

int main(int argc, char *argv[])
{
	int op1, op2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);

	printf("%d\n", op_func(op1, op2));

	return (0);
}
