#include "main.h"

void print(char *s, int index);

/**
 * _puts_recursion - prints a character
 * @s: pointer to string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	print(s, i);
	_putchar('\n');
}

/**
 * print - prints a character
 * @s: pointer to string
 * @index: index
 * Return: void
 */
void print(char *s, int index)
{
	if (s[index] != '\0')
	{
		_putchar(s[index]);
		index = index + 1;
		print(s, index);
	}
}
