#include "main.h"

/**
 * leet  - encodes a string into 1337
 * @s: pointer to a char
 *
 * Return: a string
 */

char *leet(char *s)
{
	int index = 0;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";
	int if_match;

	while (s[index] != '\0') /* loops input with array of letters */
	{		/* to compare and identify what needs to be replaced */
		if_match = 0;
		while (letters[if_match] != '\0')
		{
			if (s[index] == letters[if_match]) /* if match found */
			{
				s[index] = numbers[if_match];
			/* replace with number in the same letter index */
			}
			if_match = if_match + 1;
		}
		index = index + 1;
	}
	return (s);
}
