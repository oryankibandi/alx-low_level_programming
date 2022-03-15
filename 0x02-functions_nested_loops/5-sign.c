#include "main.h"

/**
 * print_sign - checks if n is greater than,equal or less than 0
 *
 * @n: int to be checked
 *
 * Return: 0,0,-1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
