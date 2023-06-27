#include "main.h"
/**
 *_strncpy - write a function copies a string
 *@dest: char input from user
 *@src: char second input
 *@n: int input
 *Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index = index + 1;
	}

	return (dest);
}
