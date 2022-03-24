#include "main.h"

/**
 * _strncat - concatenates a string
 * @dest: destination
 * @src: source
 * @n: bits
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	if (n > i)
	{
		n = i;
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
