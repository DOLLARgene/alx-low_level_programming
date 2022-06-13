#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - ...
 * @n: number of arguments to be added
 * @...: elpsis of variadic function
 *
 * Return: 0 or sum accordinly
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list figures;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(figures, n);

	for (i = 0; i < n; i++)
		sum += va_arg(figures, int);
	va_end(figures);
	return (sum);
}
