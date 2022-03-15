#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Return: void
*/
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

/**
 * main - calls print_aphabet function
 * Return: 0 Success
*/
int main(void)
{
	print_alphabet();

	return (0);
}
