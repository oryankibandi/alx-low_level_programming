#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list
 * @head: First node of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *orig_list;

	while (head != NULL)
	{
		orig_list = head;
		head = head->next;
		free(orig_list->str);
		free(orig_list);
	}
}
