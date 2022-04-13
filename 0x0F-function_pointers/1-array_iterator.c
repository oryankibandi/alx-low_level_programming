#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - perfoms a function on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
