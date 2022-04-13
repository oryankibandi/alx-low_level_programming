#include "function_pointers.h"

/**
 * print_name - prints name passed as an argument
 * @name: name to print
 * @f: pointer to function
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *word))
{
	if (name && f)
		f(name);
}
