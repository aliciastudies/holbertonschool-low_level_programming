#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to a function that takes an int
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if ((cmp)(array[i]) == 0)
		{
			i = i + 1;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}
