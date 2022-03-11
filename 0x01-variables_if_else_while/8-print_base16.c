#include <stdio.h>

/**
 * main - This function prints all numbers with base 16
 * Return: Returns 0
 */
int main(void)
{
char hexNums[] = "0123456789abcdef";
int i;
for (i = 0; i < 11; i++)
{
	putchar(hexNums[i]);
}

putchar('\n');

return (0);
}
