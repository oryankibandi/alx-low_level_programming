#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds the sum of all numbers passed
 * @n: first parameter passed
 * Return: sum or 0 if n is 0
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = n;

	if (n == 0)
		return (0);

	va_list ap;

	va_start(ap, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
