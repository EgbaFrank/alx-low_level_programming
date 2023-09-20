/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int tmp;

		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;

		++i;
		--n;
	}
}
