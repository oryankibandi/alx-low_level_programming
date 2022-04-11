#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog memory location
 * @d: pointer to dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
