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
	listint_t *current_node;
	listint_t *prev_node;
	listint_t *next_node;
	int pop;

	if (!head)
		return (-1);

	if (index == 0)
	{
		pop = pop_listint(head);
		return (1);
	}

	current_node = get_nodeint_at_index(*head, index);
	prev_node = get_nodeint_at_index(*head, (index - 1));
	next_node = get_nodeint_at_index(*head, (index + 1));

	if (current_node == NULL || prev_node == NULL || next_node == NULL)
	{
		return (-1);
	}

	prev_node->next = next_node;

	free(current_node);

	return (1);
}
