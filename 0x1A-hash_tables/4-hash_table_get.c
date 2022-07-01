#include "hash_tables.h"

/**
 * hash_table_get - gets the value of a key in a hash table
 * @ht:  hash table
 * @key: key to look for
 *
 * Return: Value of the key in  the hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned long int sze;

	if (ht == NULL || !key)
		return (NULL);

	sze = ht->size;
	index = key_index((const unsigned char *) key, sze);

	if (!index)
		return (NULL);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
