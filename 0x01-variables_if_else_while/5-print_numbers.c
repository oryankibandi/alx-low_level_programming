#include <stdio.h>

/**
 * main - This function prints all numbers with base 10
 * Return: Returns 0
 */
int main(void)
{
char decimanNums[] = "0123456789";
int i;
for (i = 0; i < 10; i++)
{
	putchar(decimanNums[i]);
}

putchar('\n');

return (0);
}
