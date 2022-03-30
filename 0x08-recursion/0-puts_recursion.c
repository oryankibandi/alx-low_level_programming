#include "main.h"

void print(char *s, int index);

void _puts_recursion(char *s)
{
	int i = 0;
	
	print(s, i);
	_putchar('\n');
}

void print(char *s, int index)
{
	if(s[index] != '\0')
	{
		_putchar(s[index]);
		index = index + 1;
		print(s, index);
	}
}
