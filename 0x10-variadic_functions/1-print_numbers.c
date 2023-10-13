#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);

	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(ap, int));

		if (i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
