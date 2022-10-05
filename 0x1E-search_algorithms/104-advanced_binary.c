#include "search_algos.h"

/**
 * advanced_binary - Retrieves a value from a sorted list with binary search
 * @array: A sorted array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value, or -1 on Fail
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int) size - 1;
	int mid = (high + low) / 2;
	int *new_arr = advanced_print_array(array, high, low);

	if (array == NULL)
		return (-1);


	if (low == high)
		return (-1);

	if (value == array[mid])
		return (mid);

	if (value > array[mid])
	{
		low = mid;
		mid += advanced_binary(new_arr, (size_t) (high - low), value);
		return (mid);
	}
	else
	{
		high = mid;
		mid = advanced_binary(new_arr, (size_t) (high - low), value);
		return (mid);
	}

	return (-1);
}

/**
 * advanced_print_array - prints an array
 * @array: array to print
 * @high: last index of the array
 * @low: first index of the array
 *
 * Return: void
 */
int *advanced_print_array(int *array, int high, int low)
{
	int i;
	size_t size = (size_t) high;
	int arr[size];
	int idx = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		arr[idx] = array[i];
		idx++;
	}
	printf("\n");

	return (arr);
}
