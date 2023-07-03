#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: array to search
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (s[length] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
	/**
	 * "1 +" adds to the result of every recursive call, starting at "0"
	 * (which is the return value of the base case)
	 * once it has hit the base case and starts to unwind
	 * It accounts for the current character and includes it in the count
	 */
}

