#include "lists.h"

/**
 * free_listint - frees the list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}
}
