#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head of the list
 * @head: head of the list
 *
 * Return: value of removed head node or 0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	listint_t *old_head;
	int n;

	if (*head == NULL)
		return (0);

	old_head = *head;
	if (old_head == NULL)
		return (0);

	n = old_head->n;
	new_head = old_head->next;
	free(old_head);

	*head = new_head;
	return (n);

}
