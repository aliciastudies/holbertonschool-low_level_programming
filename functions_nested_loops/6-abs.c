#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@i: integer to be computed
 *parameter: accepts the integer
 *Return: absolute value of integer
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;

	return (i);
}
