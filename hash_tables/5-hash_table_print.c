#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *comma;

	if (!ht)
	{
		return;
	}
	printf("{");
	i = 0;
	comma = "";
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
