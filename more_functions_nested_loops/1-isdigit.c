#include "main.h"
/**
 *_isdigit - checks for a digit (0 through 9)
 *@c: user input
 *Return: 1 if a giit, otherwise 0
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);

}
