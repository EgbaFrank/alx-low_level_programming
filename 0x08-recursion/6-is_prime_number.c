/**
 * check - actually prime checking function
 * @a: number to be checked
 * @b: a counter of sort
 *
 * Return: 1 if true and 0 otherwise
 */

int check(int a, int b)
{
	if (a < 2)
	{
		return (0);
	}

	if (b * b > a)
	{
		return (1);
	}

	if (a % b == 0)
	{
		return (0);
	}

	return (check(a, b + 1));
}


/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if true, 0 otherwise
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}
