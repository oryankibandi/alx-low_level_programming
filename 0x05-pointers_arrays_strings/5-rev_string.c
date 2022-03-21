#include "main.h"


/**
 * print_rev - prints a string in reverse
 * @s: pointer to tring to print
 * Return: void
*/
void rev_string(char *s)
{
	char a;
	int b, c, d;

	c = 0;
	d = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	d = c - 1;

	for (b = 0; b < c / 2; b++)
	{
		a = s[b];
		s[b] = s[d];
		s[d--] = a;
	}
}
