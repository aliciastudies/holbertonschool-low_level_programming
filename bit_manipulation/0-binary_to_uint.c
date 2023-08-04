#include <stddef.h>
#include "main.h"

/**
 * is_binary - checks a char if it's a binary char
 * @ch: character to check
 *
 * Return: 0 for false, 1 if true
 */

int is_binary(char c)
{
	if (c == '0' || c == '1')
	{
		return (1);
	}
	return (0);
}

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0, otherwise NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	i = 0;
	result = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (is_binary(b[i]) == 0)
		{
			return (0);
		}
		result = result << 1; /* in base 2 equivalent of * 2 */
		if (b[i] == '1')
		{
			result = result | 1; /* always return 1 */
		}
		i = i + 1;
	}

	return (result);
}
