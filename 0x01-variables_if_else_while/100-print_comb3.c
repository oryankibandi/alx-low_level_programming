#include <stdio.h>

/**
 * main - prints all combination of sngle digit numbers
 * Return: Returns 0
*/
int main(void)
{
int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;
int j;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (nums[i] < nums[j])
		{
			putchar('0' + nums[i]);
			putchar('0' + nums[j]);
			putchar(',');
		}
	}
}
putchar('\n');
return (0);
}
