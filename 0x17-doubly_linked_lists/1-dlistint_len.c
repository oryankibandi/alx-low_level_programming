#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: Head of the linked list
 *
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem;
	const dlistint_t *curr;

	elem = 0;
	curr = h;

	if (h == NULL)
		return (elem);

	while (curr != NULL)
	{
		curr = curr->next;
		elem++;
	}

	return (elem);
}
