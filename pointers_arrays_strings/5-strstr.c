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
		while (haystack[index] == needle[index])
		{
			if (needle[index + 1] == '\0')
			{
				return (haystack);
			}
			index = index + 1;
		}
		haystack = haystack + 1;
	}
	return (NULL);
}
