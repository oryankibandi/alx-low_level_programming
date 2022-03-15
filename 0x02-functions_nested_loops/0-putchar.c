#include "main.h"

/**
 * main - Displays a character with _putchar.c's function
 * Return: 0
*/
int main(void)
{
char *word = "_putchar";

while (*word != '\0')
{
	_putchar(*word);
}
_putchar('\n');
return (0);
}
