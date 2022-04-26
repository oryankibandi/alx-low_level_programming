#include "lists.h"

/**
 * print_listint - prints every node on the list
 * @h: head of the list
 *
 * Return: number of nodes or -1 when the program fails
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
