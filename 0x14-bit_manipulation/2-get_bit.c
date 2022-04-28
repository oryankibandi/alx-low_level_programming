#include "main.h"

/**
 * get_bit - returns value of bit at indec
 * @n: decimal number
 * @index: index
 *
 * Return:0 bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGTH)
		return (-1);

	return ((n >> index) & 1);
}
