#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_new_node - creates a new node
 * @key: the key
 * @value: value associated with the key. must be duplicated. can be empty.
 *
 * Return: new node
 */

hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

/**
 * hash_table_set - write a function that adds an element to the hash table
 * @ht: hash table you want to add or update
 * @key: the key
 * @value: value associated with the key. must be duplicated. can be empty.
 *
 * Return: 1 if success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !*key || !value)
	{
		return (0);
	}
	index = hash_djb2((unsigned char *)key) % ht->size;
	new_node = create_new_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = (char *)value;
			return (1);
		}
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
