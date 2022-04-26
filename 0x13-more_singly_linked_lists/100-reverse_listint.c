#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head of list
 *
 * Return: head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;
	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;

	return (*head);
}
