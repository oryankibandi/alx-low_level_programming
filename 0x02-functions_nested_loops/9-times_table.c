#include "main.h"

/**
 * times_table - creates a times table
 * Return: void
*/
void times_table(void)
{
	int i, j;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (k > 9)
			{
				_putchar(' ');
			} else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(' ');
			_putchar(k + '0');
			if (j != 9)
			{
				_putchar(",");
			}
			k += i;
		}
		_putchar('\n');
		k = 0;
	}
}
