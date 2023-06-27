#include "main.h"
/**
 *_strncpy - write a function copies a string
 *@dest: char input from user
 *@src: char second input
 *@n: int input
 *Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && n > 0)
	{
		dest[index] = src[index];
		index = index + 1;
		n = n - 1;

	}

	return (dest);
}
