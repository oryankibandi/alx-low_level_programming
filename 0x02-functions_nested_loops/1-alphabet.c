#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: void
*/
void print_alphabet(void);
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		if (alphabet[i] != '\0')
		{
			_putchar(alphabet[i]);
		}
	}
	_putchar('\n');
}
