#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array
 * @n: number of elements
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
