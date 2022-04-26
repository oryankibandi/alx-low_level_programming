#include "lists.h"


/**
 * sum_listint - returns the sum of all data(n) in a liked list
 * @head: Head of the linked list
 *
 * Return: sum when successful, 0 when fail
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h;

	if (head == NULL)
		return (0);
	h = head;

	while (h != NULL)
	{
		if (!(h->n) && h->n != 0)
			return (0);

		sum += h->n;
		h = h->next;
	}

	return (sum);
}
