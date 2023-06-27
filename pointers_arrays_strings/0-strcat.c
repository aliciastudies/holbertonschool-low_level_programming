#include "main.h"
/**
 *_strcat - func that concatenates two strings
 *@src: char input from user
 *@dest: char second input
 *Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int index_a;
	int index_b;

	index_a = 0;
	while (dest[index_a] != '\0')
	{
		index_a = index_a + 1;
	}
	index_b = 0;
	while (src[index_b] != '\0')
	{
		dest[index_a] = src[index_b];
		index_a = index_a + 1;
		index_b = index_b + 1;
	}

	dest[index_a] = '\0';


	return(dest);
}
