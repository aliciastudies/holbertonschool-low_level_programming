#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: input of a string
 * Return: a string
 */

/*char convert_to_num()
{

}
*/

/**
 *leet - encodes a string into 1337
 *@s: input of a string
 * Return: a string
 */

char *leet(char *s)
{
	int number;
	int lowercase;
	int cap_next;

	lowercase = 0;
	while (s[lowercase] != '\0')
	{
		if (s[lowercase] >= 'A' && s[lowercase] <= 'Z')
		{
			s[lowercase] = s[lowercase] + 32;
		}
		lowercase = lowercase + 1;
	}
	cap_next = 0;
	while (s[cap_next] != '\0')
	{
		if (s[cap_next] == '.' && s[cap_next + 1] == ' ')
		{
			if (s[cap_next] >= 'A' && s[cap_next] <= 'Z')
			{
				s[cap_next + 1] = s[cap_next + 1] - 32;
			}
		}
		cap_next = cap_next + 1;
	}
	number = 0;
	while (s[number] != '\0')
	{
		if (s[number] == 'a')
		{
			s[number] = '4';
		}
		if (s[number] == 'e')
		{
			s[number] = '3';
		}
		if (s[number] == 'o')
		{
			s[number] = '0';
		}
		if (s[number] == 't')
		{
			s[number] = '7';
		}
		if (s[number] == 'l')
		{
			s[number] = '1';
		}
		number = number + 1;
	}
	return (s);
}
