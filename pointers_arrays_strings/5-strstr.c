#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String being searched
 * @needle: Substring being searched for
 *
 * Return: Pointer to beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (needle[0] == 0) /* if yes, string is empty */
	{
		return (haystack);
	}
	index = 0;
	while (haystack[index] != '\0')
	{
		while (haystack[index] == needle[index]) /* while equal it keeps looping */
		{
			if (needle[index + 1] == '\0') /* checks one position in front, if it's a match, the entire substring has been found */
			{
				return (haystack); /* returns starting address of substring */
			}
			index = index + 1;
		}
		haystack = haystack + 1; /* starts second while loop again */
	}
	return (NULL);
}
