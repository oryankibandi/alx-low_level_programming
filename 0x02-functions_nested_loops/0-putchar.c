#include "main.h"

/**
 * main - Displays a character with _putchar.c's function
 * Return: 0
*/
int main(void)
{
char word[] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
	if (word[i] != '\0')
	{
		_putchar(word[i]);
	}
}
_putchar('\n');
return (0);
}
