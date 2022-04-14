#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed
 * @separator: separator to print
 * @n: number of arguments
 * Return: void
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;

	va_start(pa, n);

	int i;
	char *word;

	for (i = 0; i < n; i++)
	{
		word = va_arg(pa, char *);

		if (word)
			printf("%s", word);
		else
			printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
