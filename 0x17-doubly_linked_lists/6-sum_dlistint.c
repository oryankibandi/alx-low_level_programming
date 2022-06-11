#include "lists.h"

/**
 * sum_dlistint - gets the sum of all data of a linked list
 * @head: head of list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}

	return (sum);
}
