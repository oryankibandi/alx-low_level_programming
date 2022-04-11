#include "main.h"

#define PROG __FILE__

/**
 * main - prints file name of program
 *
 * Return: 0
 */
int main(void)
{
unsigned int i = 0;
unsigned int j;

while (PROG[i] != '\0')
	i++;

for (j = 0; j < i; j++)
{
	_putchar(PROG[j]);
}
_putchar('\n');

return (0);
}
