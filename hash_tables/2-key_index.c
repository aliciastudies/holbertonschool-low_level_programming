#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - write a function that gives you the index of a key
 * @key is the key
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int value;

	if (key == NULL)
	{
		return (0);
	}
	if (size < 1)
	{
		return (0);
	}
	value = hash_djb2(key);
	index = value % size;

	return (index);
}
