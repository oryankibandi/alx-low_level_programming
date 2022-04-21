#include <stdio.h>

/**
 * first - Is run before the main function
 *
 * Return: void
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
