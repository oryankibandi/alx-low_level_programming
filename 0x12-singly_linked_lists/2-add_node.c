#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: Head of the linked list
 * @str: str property to add
 * Return: pointer to newly created struct
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
