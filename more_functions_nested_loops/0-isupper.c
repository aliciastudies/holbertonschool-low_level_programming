#include "main.h"

/**
 *_isupper - checks for uppercase
 *@c: the input to be checked
 *Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;

	else
		result = 0;

	return (result);
}
