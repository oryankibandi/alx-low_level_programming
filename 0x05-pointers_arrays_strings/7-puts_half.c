#include "main.h"

/**
 *  stringlen - counts length of a string
 *  @s: string to count
 *  Return: length
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
 *  puts_half - prints half a string
 *  @str: string to print
 *  Return: void
*/
void puts_half(char *str)
{
	int length = stringlen(str);
	int i, length2;

	if (length % 2 != 0)
	{
		length2 = length - 1;
	} else
	{
		length2 = length;
	}

	for (i = (length2 / 2); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
