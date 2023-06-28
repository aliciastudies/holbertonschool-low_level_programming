#include "main.h"
#include <stdbool.h>
/**
 *_strcmp - func that compares two strings
 *@s1: first char input
 *@s2: second char input
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int index1;
	int result;

	index1 = 0;
	while (true)
	{
		result = s1[index1] - s2[index1];
		if (result != 0)
		{
			return (result);
		}
		if (s1[index1] == '\0')
		{
			return (result);
		}
	index1 = index1 + 1;
	}
}
