#include "main.h"

/**
 * main - Displays a character with _putchar.c's function
 * Return: 0
*/
int main(void)
{
char word[] = "_putchar\n";
int i;
for (i = 0; i < 10 ; i++)
{
	if (word[i] == '\0')
	{
		_putchar('\n');
		break;
	}
	_putchar(word[i]);
}
return (0);
}
