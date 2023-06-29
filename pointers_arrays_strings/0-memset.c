#include "main.h"

/**
 *_memset - fills memory with a constant byte
 * @s:pointer - starting address to be filled
 * @b: char value
 * @n: of bytes
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index = index + 1;
	}

	return (s);
}
