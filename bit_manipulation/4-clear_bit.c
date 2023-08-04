#include <stdio.h>
#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: int
 *@index: sets the value of this index
 *
 * Return: 1 if it works, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	i = 1;
	i = ~i << index;
	*n = *n & i;
	return (1);
}
