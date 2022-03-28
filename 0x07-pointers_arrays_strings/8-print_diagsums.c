#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers.
 * @a:array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, leadingSum = 0, antidiagSum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			leadingSum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			antidiagSum += *(a + i);
	}

	printf("%d, %d\n", leadingSum, antidiagSum)
}
