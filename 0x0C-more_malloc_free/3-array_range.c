#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of range min to max
 * @min: minimun number
 * @max: maximum number
 * Return: pointer to array created
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *j;

	if (min > max)
		return (NULL);

	j = malloc(sizeof(j) * ((max - min) + 1));

	if (j == NULL)
	{
		free(j);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		*(j + i) = i;
	}

	return (j);
}
