#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @separator: string that separate collection of strings
 * @n: number of strings to be printed
 * @...: notation for elipsis
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str)
		{
			printf("%s", str);
			if (separator && (i < n - 1))
				printf("%s", separator);
		}
		else
			printf("(nil)");
	}
	va_end(strings);
	printf("\n");
}
