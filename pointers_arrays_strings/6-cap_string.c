#include "main.h"
#include <stdio.h>

/**
 *not_alpha - check if character is a word separator
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int not_alpha(char c)
{
	char separators[] = {' ', '\t', '\n', '.'};
	int index = 0;

	while (separators[index] != '\0')
	{
		if (c == separators[index])
			return (1);
		index = index + 1;
	}
	return (0);
}

/**
 * cap_string  - capitalize each word of a string
 * @s: pointer to a char
 *
 * Return: a string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0))
			s[i] = s[i] - ('a' - 'A');
		if ((s[i] >= 'a' && s[i] <= 'z') && (not_alpha(s[i - 1]) == 1))
			s[i] = s[i] - ('a' - 'A');
		i = i + 1;
	}
	return (s);
}
