#include "main.h"

/**
 * flip_bits - gets number of bits you would need to flip
 * @n: first bit
 * @m: second bit
 *
 * Return: hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGTH);
	int dist = 0;

	while (shift--)
	{
		dist += (n >> shift & 1) != (m >> shift & 1);
	}

	return (dist);
}
