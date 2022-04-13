#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of number found or -1 if not found
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || size == NULL || cmp == NULL)
	{
		return (-1);
	}


	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
		{
			return (i);
		}
	}

	return (-1);
}
