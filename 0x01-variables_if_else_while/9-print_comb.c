#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit nums
 * Return: Returns 0
 */
int main(void)
{
int decimalNums[] = {0, 1, 2, 3, 4, 5, 6,7 ,8 ,9 };
int i;
for (i = 0; i < 10; i++)
{
	putchar('0'+decimalNums[i]);
	if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
