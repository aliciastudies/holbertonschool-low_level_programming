#include "main.h"
#include <stdio.h>
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
	char *ptr;

	ptr = NULL;
	index = 0;
	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			ptr = &s[index];
			return (ptr);
		}
		index = index + 1;
	}
	return (ptr);
}

/**
 *_strspn - get the length of a prefix substring
 *@s: first string to be scanned
 *@accept: second string contain the characters to match
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
	unsigned int count; /* hold count of bytes */

	index = 0;
	count = 0;
	while (s[index] != '\0')
	{
		/* call function from previous task to find matches */
		if (_strchr(accept, s[index]) != NULL)
		{
			count = count + 1;
		/* count goes up with every match found */
		}
		else
		{
			return (count);
		}
		index = index + 1;
	}
	return (count);
}
