#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: char input from user
 *Return: integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length = length + 1;
	}

	return (length);
}
