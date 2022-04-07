#include <stdlib>
#include "main.h"

/**
 * _calloc - allocates memory with malloc
 * @nmemb: number of items in aray
 * @size: size of each item
 * Return: pointer to created string
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(size * nmemb)

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}

	return (s);
}
