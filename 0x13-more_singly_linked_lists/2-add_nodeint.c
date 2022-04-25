#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint -  adds a node at the beginning of the list
 * @head: pointer to head of list
 * @n: value to set
 *
 * Return: pointer to new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
