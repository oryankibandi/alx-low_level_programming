#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at given index
 * @head: head of linked list
 * @idx: index
 * @n: value of new node
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *node_at_index;
	listint_t *node_at_prev;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || !n)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}

	new_node->n = n;

	node_at_index = get_nodeint_at_index(*head, idx);
	node_at_prev = get_nodeint_at_index(*head, (idx - 1));

	if (node_at_index == NULL || node_at_prev == NULL)
		return (NULL);

	new_node->next = node_at_index;
	node_at_prev->next = new_node;

	return (new_node);
}
