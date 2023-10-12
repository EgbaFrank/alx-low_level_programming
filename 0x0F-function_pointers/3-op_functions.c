#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - performs addition
 * @a: first operand
 * @b: second operand
 *
 * Return: result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - perform substraction
 * @a: first operand
 * @b: second operand
 *
 * Return: result of substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - perform multiplication
 * @a: first operand
 * @b: second operand
 *
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - perform division
 * @a: first operand
 * @b: second operand
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - perform modulus
 * @a: first operand
 * @b: second operand
 *
 * Return: result of division remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
