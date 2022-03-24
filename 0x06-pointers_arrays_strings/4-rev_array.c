#include "main.h"

/**
 * reverse_array - reverses a string
 * @a: array
 * @n: number of bits
 * Return: Void
*/
void reverse_array(int *a, int n)
{
	int i;
	int b[n];

	for (i = 0; i < n; i++)
	{
		b[i] = a[(n - 1) - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
