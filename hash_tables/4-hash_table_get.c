#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - func that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: to be found
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int value;
	int index;
	hash_node_t *node;

	if (!ht || !key)
	{
		return (NULL);
	}
	/* calculate index for key */
	value = hash_djb2((unsigned char *)key);
	index = value % ht->size;
	/* traverse the linked list at that index */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
