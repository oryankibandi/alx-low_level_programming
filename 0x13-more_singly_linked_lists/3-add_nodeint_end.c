#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: head of the list
 * @n: value of n
 *
 * Return: address of new node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *f;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	f = *head;

	if (f == NULL)
	{
		*head = new;
	} else
	{
		while (f->next != NULL)
			f = f->next;
		f->next = new;
	}
	return (new);
}
