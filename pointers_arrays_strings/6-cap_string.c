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
	return (0); /* if loop completes without finding a match, c is not a word separator  */
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
		if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0)) /* checks if current char is lowercase & if first char in string  */
			s[i] = s[i] - ('a' - 'A'); /* if both conditions are true, it converts lowercase to upper by subtracting with ASCII values  */
		if ((s[i] >= 'a' && s[i] <= 'z') && (not_alpha(s[i - 1]) == 1)) /* checks if current char is lowercase & checks if precedeing char is a word separator */
			s[i] = s[i] - ('a' - 'A'); /* returns 1 if it is. ^ compares the return value. if == 1, evaluates to true and current char is a word separator */
		i = i + 1;
	}
	return (s);
}
