#include "main.h"

/**
 * print_last_digit - prints last digit of an int
 *
 * @i: digit to be checked
 *
 * Return: lastDigit
*/
int print_last_digit(int i)
{
	int lastDigit = i % 10;
	char charDigit;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	charDigit = lastDigit + '0';
	_putchar(charDigit);
	return (lastDigit);
}
