#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to a function that takes an int
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i = i + 1;
		}
	}

}
