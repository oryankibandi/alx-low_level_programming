#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array dynamically and assigns the character c
 * @c: character to assign
 * @size: size of array
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size);
	if (arr)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}

		return (arr);
	}

	return (NULL);
}
