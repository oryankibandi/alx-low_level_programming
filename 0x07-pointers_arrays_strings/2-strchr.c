#include "main.h"

/**
 * _strchr - Pointer to the first occurrence of c in a string
 * @s: pointer to string
 * @c: character to look for
 *
 * Return: pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
	int j;

	for (i = 0; *(s + j) != '\0'; i++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	if (*(s + j) == c)
	{
		return (s + j);
	}

	return ('\0');
}
