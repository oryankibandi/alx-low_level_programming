#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints every node on the list
 * @h: head of the list
 *
 * Return: number of nodes or -1 when the program fails
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *f = h;
	size_t i = 0;

	if (h == NULL || f == NULL)
		return (-1);

	while (f != NULL)
	{
		if (f->n || f->n == 0)
		{
			printf("%d\n", f->n);
			f = f->next;
			i++;
		}
	}

	return (i);
}
