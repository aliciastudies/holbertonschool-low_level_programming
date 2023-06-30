#include "main.h"
#include <stddef.h>

/**
 *_strchr - locates a character in a string
 * @s:pointer - specifies the pointer to the string to be searched
 * @c: char to be searched
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int index;
	char *ptr; /* stores the address of found character */

	ptr = NULL; /* set to NULL initially as default until found */
	index = 0;
	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			ptr = &s[index]; /* address of c now set to ptr */
			return (ptr);
		}
		index = index + 1;
	}
	return (NULL); /* means character doesn't exist in string */'
}
