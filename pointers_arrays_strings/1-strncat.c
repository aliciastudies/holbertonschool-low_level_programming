#include "main.h"
/**
 *_strncat - writes a function that concatenates two strings
 *
 *Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int index_a;
	int index_b;

	index_a = 0;
	while (dest[index_a] != '\0')
	{
		index_a = index_a + 1;
	}
	index_b = 0;
	while (src[index_b] != '\0' && n > 0)
	{
		dest[index_a] = src[index_b];
		index_a = index_a + 1;
		index_b = index_b + 1;
		n = n - 1;
	}

	return (dest);

}
