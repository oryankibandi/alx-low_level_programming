#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit nums
 * Return: Returns 0
 */
int main(void)
{
char decimalNums[] = "0123456789";
int i;
for (i = 0; i < 10; i++)
{
	putchar(decimalNums[i]);
	if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
