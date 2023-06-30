#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: takes parameter pointer to a string s which will be sesrched
 * @accept: a string against which s is checked for matching characters
 *
 * Return: a pointer to the first matching character
 */

char *_strpbrk(char *s, char *accept)
{
	int index1;
	int index2;

	index1 = 0;
	while (s[index1] != '\0')
	{
		index2 = 0;
		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
			{
				return (s + index1);
				/* s points to the beginning of the string */
				/* + index1 moves the pointer */
				 /* to where the index1 character is located */
			}
			index2 = index2 + 1;
		}
		index1 = index1 + 1;
	}
	return (NULL);
}
