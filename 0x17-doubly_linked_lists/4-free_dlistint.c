#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: head of linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *lptr;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	while ((lptr = head) != NULL)
	{
		head = head->next;
		free(lptr);
	}
}
