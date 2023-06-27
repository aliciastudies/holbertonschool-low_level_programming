#include "main.h"
/**
 *_strcat - func that concatenates two strings
 *@src: char input from user
 *@dest: char second input
 *Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int index_a; /* keep track of the index of dest and src */
	int index_b;

	index_a = 0;
	while (dest[index_a] != '\0') /* find the end of dest to determine the position where src string should append. ensures no overwriting*/
	{
		index_a = index_a + 1;
	}
	index_b = 0;
	while (src[index_b] != '\0')
	{
		dest[index_a] = src[index_b];  /* copy chars from src to dest (destination where value is stored  is always left of equal sign) */
		index_a = index_a + 1;
		index_b = index_b + 1;
	}

	dest[index_a] = '\0'; /* assign null char to end of dest once above while loop has completed, ensuring it will be at the end*/


	return (dest);
}
