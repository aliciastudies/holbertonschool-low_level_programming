#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: the size of elements
 *
 * Return: pointer to allocated memory or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array =  malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = 0;
		i = i + 1;
	}
	return (array);

}
