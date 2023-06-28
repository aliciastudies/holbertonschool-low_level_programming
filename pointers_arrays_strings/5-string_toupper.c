#include "main.h"
#include <stdbool.h>

/**
 *string_toupper - changes all lowercase letters of string to uppercase
 *@s: char string input
 * Return: char string
 */

char *string_toupper(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		if (s[length] >= 'a' && s[length] <= 'z')
		{
			s[length] = s[length] - 32;
		}
		length = length + 1;
	}
	return (s);
}
