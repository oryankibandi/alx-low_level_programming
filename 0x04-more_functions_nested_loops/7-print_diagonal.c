#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: How many lines to print
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
				for (j = 0; j < i; j++)
					_putchar(' ');
			_putchar('\\');

			_putchar('\n');
		}
	}
}
