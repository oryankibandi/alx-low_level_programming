#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width of the array
 * @height: hight of the array
 *
 * Return: Pointer to array
 *
 */
int **alloc_grid(int width, int height)
{

	int *arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (width * height));

	if (!(arr))
	{
		return (NULL);
	}

	for (i = 0; i < (width * height); i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
