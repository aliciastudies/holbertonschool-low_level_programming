#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initialises it with a specific char
 * @c: initilisation char
 * @size: how many array of chars
 *
 * Return: pointer to array, NULL if size = 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i = i + 1;

	}
	return (array);
}
