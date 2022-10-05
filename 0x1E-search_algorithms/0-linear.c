#include "search_algos.h"

/**
 * linear_search - uses linear search to get a value from an array
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[i] == value)
			return (j);
		j++;
	}

	return (-1);
}
