#include "main.h"
/**
 *_atoi - converts a string to an integer
 *
 *@s: char string user input
 *Return: int
 */

int _atoi(char *s)
{
	int index; /* keep track of current index in string */
	int sign; /* store the sign of the int (1 for pos, -1 for neg) */
	unsigned int num; /*ensures converted int remains pos/non-neg */

	num = 0;
	sign = 1; /* starts at 1 to assume default sign of int is pos */
	index = 0;
	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9')) /* also checking current char in index is not a digit char. skips non-digit chars */
	{
		if (s[index] == '-') /* if current char is '-' means number is neg. */
		{
			sign = sign * -1; /* set the sign to pos */
		}
		index = index + 1;
	}
	if (s[index] != '\0') /* if not null, there are digits to be converted */
	{
		while (s[index] >= '0' && s[index] <= '9') /* loop continues if current char is a digit then extracts and stores in var num */
		{
			num = num * 10 + (s[index] - '0'); /* converts a string representation of digits into an int */
			/* first half shifts the existing digits in var num one place to the left ( * 10). position of the digit within a number determins its place value */
			/* then adds the numeric value of the current digit to the result. combines individual digit values into final int representation */
			/* digits '0' to '9' have consecutive ASCII values. */'
			/* second half calculates the numeric value of the current digit by subtracting the ASCII value of '0', which converts to the actual numeric value */

				index = index + 1;
		}
	}
	return (num * sign); /* * sign determines sign (pos or neg) of the int */
}
