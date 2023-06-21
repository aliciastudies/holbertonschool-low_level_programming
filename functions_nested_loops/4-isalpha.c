#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *@c: input to be checked
 *parameter: accept the value
 *Return: 1 if c is a letter otherwise 0
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		result = 1;
	else
		result  = 0;

	return (result);
}
