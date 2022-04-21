#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a linked list
 * @h: element
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *f = h;
	char *str1;
	unsigned int len, i = 0;

	for (; f != NULL; f = f->next)
	{
		if (f->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
		}
		else
		{
			str1 = f->str;
			len = f->len;
			if (len && str1)
				printf("[%u] %s\n", len, str1);
			i++;
		}
	}

	return (i);
}
