#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: the input to be checked
 *parameter: accept the value
 *Return: 1 if c is lower otherwise 0
 */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result  = 0;

	return (result);
}
