#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: decimal number
 * @index: index to apply the change
 *
 * Return: Success: 1 Error:-1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_LENGTH))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
