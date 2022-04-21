#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: Head of the linked list
 * @str: str property to add
 * Return: pointer to newly created struct
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t size = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[size])
	{
		size++;
	}

	new_node->len = size;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
