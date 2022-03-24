#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Equal - 0, not equal - difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int difference = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			return (difference);
		}
	}
	return (0);
}
