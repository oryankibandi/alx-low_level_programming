#include "main.h"

/**
 * _strcpy - copies one string to a buffer
 * @dest: destination
 * @src: source string
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
