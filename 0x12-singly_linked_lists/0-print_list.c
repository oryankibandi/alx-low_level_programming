#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a linked list
 * @h: element
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if(!h)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		size++;
	}

	return (size);
}
