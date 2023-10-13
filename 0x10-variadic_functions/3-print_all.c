#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - print anything
 * @format: type of argument passed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int flag = 0, i = 0;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				flag = 1;
				printf("%c",  va_arg(ap, int));
				break;
			case 'i':
				flag = 1;
				printf("%d",  va_arg(ap, int));
				break;
			case 'f':
				flag = 1;
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				flag = 1;
				printf("%s", s);
				break;
			default:
				flag = 0;
				break;
		}
		if (flag == 1 && format[i + 1] != '\0')
			printf(", ");
		++i;
	}
	putchar('\n');
	va_end(ap);
}
