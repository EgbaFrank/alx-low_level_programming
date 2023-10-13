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
		if (i < (n - 1))
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d\n", va_arg(ap, int));
	}
	va_end(ap);
}
