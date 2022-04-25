#include <stdio.h>
#include "lists.h"

/**
 * listint_len - gets the length of a list
 * @h: head of the list
 *
 * Return: number of nodes or -1 when the program fails
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *f = h;
	size_t i = 0;

	if (!h)
		return (-1);

	while (f != NULL)
	{
		if (f->n)
		{
			f = f->next;
			i++;
		}
	}

	return (i);
}
