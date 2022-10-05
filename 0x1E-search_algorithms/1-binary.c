#include "search_algos.h"

/**
 * binary_search - Retrieves a value from a sorted list with binary search
 * @array: A sorted array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value, or -1 on Fail
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int) size - 1;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while (1)
	{
		mid = (high + low) / 2;

		print_array(array, high, low);

		if (low == high)
			break;

		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @high: last index of the array
 * @low: first index of the array
 *
 * Returns: void
 */
void print_array(int *array, int high, int low)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
