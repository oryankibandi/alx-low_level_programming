#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the properties of the struct
 * @d: pointer to struct
 * Return: void
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if(d->name)
		{
			printf("Name: %s\n", d->name);
		}
		if(d->age)
		{
			printf("Age: %f\n", d->age);
		}
		if(d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
