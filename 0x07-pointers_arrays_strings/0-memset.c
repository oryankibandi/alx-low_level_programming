#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * @s: pointer to string
 * @b: parameter to be filed
 * @n: number of bites
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
