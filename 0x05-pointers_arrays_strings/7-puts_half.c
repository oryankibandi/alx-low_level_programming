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
	int i;

	if (length % 2 != 0)
	{
		for ( i = (length - 1) / 2; i < length - 1; i++)
		{
			_putchar(str[i]);
		}	
	} else
	{
		for (i = length / 2; str[i] != 0; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
