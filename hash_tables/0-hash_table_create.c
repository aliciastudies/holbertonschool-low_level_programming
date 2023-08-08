#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_t - write a function that creates a hash table
 * @unsigned _long_int: size of array
 *
 * Return: a pointer to the newly created hash table, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
	{
		return (NULL);
	}
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
