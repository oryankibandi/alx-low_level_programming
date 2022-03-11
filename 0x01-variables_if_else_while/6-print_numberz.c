#include <stdio.h>

/**
 * main - This function prints all numbers with base 10 without using char
 * Return: Returns 0
 */
int main(void)
{
int decimalNums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

for (i = 0; i < 11; i++)
{
	putchar('0' + decimalNums[i]);
}

putchar('\n');

return (0);
}
