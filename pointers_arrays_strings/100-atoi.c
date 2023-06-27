#include "main.h"
/**
 *_atoi - converts a string to an integer
 *
 *@s: char string user input
 *Return: int
 */

int _atoi(char *s)
{
	int index;
	int sign;
	unsigned int num;

	num = 0;
	sign = 1;
	index = 0;
	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9' ))
	{
		if (s[index] == '-')
		{
			sign = sign * -1;
		}
		index = index + 1;
	}
	if (s[index] != '\0')
	{
		while (s[index] >= '0' && s[index] <= '9')
		{
			num = num * 10 + (s[index] - '0');

				index = index + 1;
		}
	}
	return (num * sign);
}
