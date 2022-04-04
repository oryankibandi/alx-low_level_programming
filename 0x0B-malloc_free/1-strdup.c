#include <stdlib.h>
#include "main.h"

/**
 * _strdup - reutrns a pointer to a newly allocated space in memory
 * @str: pointer to string
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int j;
	char *arr;

	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}

	return (arr);
}
