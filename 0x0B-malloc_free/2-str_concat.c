#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size_s1, size_s2, tot_size;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	} else if (s2 == NULL)
	{
		s2 = "";
	}

	size_s1 = get_length(s1);
	size_s2 = get_length(s2);
	tot_size = size_s1 + size_s2;

	arr = malloc((sizeof(char) * tot_size) + 1);

	if (!(arr))
	{
		return (NULL);
	}

	for (i = 0; i < size_s1; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; j < size_s2; j++)
	{
		arr[i + j] = s2[j];
	}

	arr[tot_size] = '\0';

	return (arr);
}

/**
 * get_length - Gets length of a string
 * @s: string pointer
 *
 * Return: length of string
 */
int get_length(char *s)
{
	int l = 0;

	while (s[i] != '\0')
	{
		l++;
	}

	return (l);
}
