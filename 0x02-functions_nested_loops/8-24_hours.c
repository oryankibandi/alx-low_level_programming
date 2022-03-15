#include "main.h"

/**
 * past_late - displays time past late
 * @i: parameter to be compared
 * Return: void
*/
void past_late(int i)
{
	int b, c, d;

	for (b = 0; b < i; b++)
	{
		for (c = 0; c < 6; c++)
		{
			for (d = 0; d < 10; d++)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
			}
		}
	}
}


/**
 * jack_bauer - prints time countdown
 * Return: 0
*/
void jack_bauer(void)
{
	int a;

	for (a = 0; a < 3; a++)
	{
		if (a == 2)
		{
			past_late(4);
		} else
		{
			past_late(10);
		}
	}
}
