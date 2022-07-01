#include  "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_create - creates a hash table with the given size
 * @size: size of the has table
 *
 * Return: Returns pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_arr;

	if (size == 0)
	{
		return (NULL);
	}

	new_arr = malloc(sizeof(hash_table_t));

	if (new_arr == NULL)
		return (NULL);

	new_arr->size = size;
	new_arr->array = calloc(size, sizeof(hash_node_t *));
	if (new_arr->array == NULL)
	{
		free(new_arr);
		return (NULL);
	}

	return (new_arr);
}
