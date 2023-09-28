/**
 * _pow_recursion - finds the power of a number
 * @x: number whose power to find
 * @y: power x is raised to
 *
 * Return: the result of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
