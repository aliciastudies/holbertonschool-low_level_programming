#include <stdio.h>
#include "main.h"

/**
 *flip_bit - returns the number of bits you would need
 *to flip to get from one number to another
 *@n: int to compare
 *@m: int to compare
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit;
	unsigned long int result;

	result = n ^ m;
	bit = 0;
	while (result)
	{
		if ((result & 1) == 1)
		{
			bit = bit + 1;
		}
		result = result >> 1;
	}
	return (bit);
}
