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
		dest[index] = src[index]; /* dest is the var that is assigned the value so goes on the left of the operator (=) */
		index = index + 1; /* copies char by char until it reaches null char */

	}
	dest[index] = '\0'; /* appending null char indicates end of the string */
	return (dest); /* returns pointer to the des string */
}
