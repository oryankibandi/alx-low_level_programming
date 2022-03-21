#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: address of the first int
 * @b: address of the second int
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
