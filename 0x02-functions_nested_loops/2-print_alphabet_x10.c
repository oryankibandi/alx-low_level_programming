#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return:0
*/
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 27; j++)
		{
			if (alphabet[j] == '\0')
			{
				_putchar('\n');
			} else
			{
				_putchar(alphabet[j]);
			}
		}
	}
}
