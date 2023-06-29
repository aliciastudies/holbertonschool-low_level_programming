#include "main.h"
#include <stdio.h>

/**
 *not_alpha - check if character is a word separator
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int not_alpha(char character)
{
	char separators[] = {' ', '\t', '\n', '.'};
	int index = 0;

	while (separators[index] != '\0')
	{
		if (character == separators[index])
			return (1);
		index = index + 1;
	}
	return (0); /* if loop completes without finding a match, character is not a word separator */
}

/**
 * cap_string  - capitalize each word of a string
 * @s: pointer to a char
 *
 * Return: a string
 */

char *cap_string(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z') /* checks if current char is lowercase */
		{
			if ((index == 0) || (not_alpha(s[index - 1]) == 1)) /* checks if first char in word is lower & if preceding char is a non-alpha. if it is true, result == 1  */
			{
				s[index] = s[index] - ('a' - 'A');
			}
		}
		index = index + 1;
	}
	return (s);
}
