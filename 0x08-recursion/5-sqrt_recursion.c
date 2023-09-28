/**
 * main_sqrt - function that actually find the natural square root of a number
 * @i: number whose square root to find
 * @j: A counter of sort
 *
 * Return: the square root
 */


int main_sqrt(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}

	if (i * i > j)
	{
		return (-1);
	}

	return (main_sqrt((i + 1), j));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: number whose esquare root to find
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (main_sqrt(1, n));
}
