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
	list_t **original = head;
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;
	const char *str1 = str;

	new->str = strdup(str1);
	new->next = *head;
	while (str1[i] != '\0')
		i++;

	new->len = i;

	if (!(new->str) || !(new->len))
		return (NULL);
	*head = new;
	return (new);
}
