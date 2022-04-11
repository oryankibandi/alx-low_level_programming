#include "dog.h"

/**
 * init_dog - initializes a struct variable
 * @d: pointer to struct
 * @name: name property
 * @age: age property
 * @owner: owner property
 *
 * Return: void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
