#include "main.h"
/**
 *_strcpy - copies the string pointed to by `src` including `\0` to the buffer
 *pointed to by dest
 *@dest: first input char pointer from user
 *@src: second input char pointer from user
 *Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;

	}
	dest[index] = '\0';
	return (dest);
}
