#include "lists.h"

/**
 * list_len - gets the number of items in a linked list
 * @h: head of a linked list
 * Return: length of linked list (n) or (0) if null
 *
 */
size_t list_len(const list_t *h)
{
	const list_t *f = h;
	unsigned int i = 0;

	if (!f)
		return (0);

	for (; f != NULL; f = f->next)
	{
		i++;
	}

	return (i);
}
