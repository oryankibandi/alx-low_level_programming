#include "function_pointers.h"


/**
 * array_iterator - iterates through the array and calls the given function
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
