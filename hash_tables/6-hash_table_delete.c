#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_delete - func that deletes a hash table
 * @ht: hash table you want to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
