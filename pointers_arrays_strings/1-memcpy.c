#include "main.h"

/**
 *_memcpy - copies memory area
 * @dest: char copied to
 * @src: char copied from
 * @n: how many bytes
 *
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index = index + 1;
	}
	return (dest);
}
