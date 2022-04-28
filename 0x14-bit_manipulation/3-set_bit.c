#include "main.h"

/**
 * set_bit - sets value of a bit to 1
 * @n: decimal number
 * @index: index
 * Return: Success: 1 Error: -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_LENGTH))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
