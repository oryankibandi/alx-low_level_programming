#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (c == NULL)
	{
		free(c);
		exit(98);
	}
	return (c);
}
