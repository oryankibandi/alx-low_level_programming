#include "lists.h"

/**
 * get_nodeint_at_index - get node at given index
 * @head: head of list
 * @index: index
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int n = 0;

	if (head == NULL || !index)
		return (NULL);

	h = head;

	if (index == 0)
		return (head);

	while (n != index)
	{
		if (h == NULL)
			return (NULL);

		h = h->next;
		n++;
	}

	return (h);
}
