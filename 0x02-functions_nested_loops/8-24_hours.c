#include "main.h"

/**
 * past_late - displays time past late
 * Return: void
*/
void past_late(void)
{
	for (b = 0; b < 4; b++)
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
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		if (a == 2)
		{
			past_late();
		} else
		{
			for (b = 0; b < 10; b++)
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
	}
}
