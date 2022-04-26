#include "lists.h"


/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: head of the linked list
 * @index: index to delete
 *
 * Return: Success : 1 , Fail : (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	current = *head;

	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
