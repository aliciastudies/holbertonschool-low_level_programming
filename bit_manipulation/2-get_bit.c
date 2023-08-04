#include <stdio.h>
#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: int
 *@index: return the value of this index
 *
 * Return: value of the bit at index, otherwise -1 for an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	if (n & (1 << index))
	{
		bit = 1;

	}
	else
	{
		bit = 0;
	}

	return (bit);

}
