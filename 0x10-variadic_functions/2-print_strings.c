#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: delimiter to separate strings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; ++i)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";
		if (i < (n - 1))
			printf("%s%s", str, separator);
		else
			printf("%s\n", str);
	}
	va_end(ap);
}
