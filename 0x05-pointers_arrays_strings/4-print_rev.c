#include "main.h"

/**
 * stringlen - returns length of a string
 * @s: Pointer to string
 * Return: length
*/
int stringlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * print_rev - prints a string in reverse
 * @s: pointer to tring to print
 * Return: void
*/
void print_rev(char *s)
{
	int length = stringlen(s);
	int i;

	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
