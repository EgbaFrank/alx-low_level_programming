/**
 * factorial - finds the factorial of a number
 * @n: number factorial to find
 *
 * Return: the result of factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}


	return (n * factorial(n - 1));
}
