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

	while (index < n && src[index] != '\0') /* loop responsible for copying chats from src string to dest string */
	{
		dest[index] = src[index];
		index = index + 1;
	}
	while (index < n) /* if there are remaining positions in dest that need to be filled with '\0', second loop is executed to fill in remaining positions */
			  /* this ensures string isalways  terminated regardless of the length of the source string being copied. */
			  /* source string could be short than the specified number of char to be copied (`n`) */
	{
		dest[index] = '\0';
		index = index + 1;
	}

	return (dest);
}
