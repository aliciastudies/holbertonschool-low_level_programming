#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: takes parameter pointer to a char
 *
 * Return: length of a string
 */

unsigned int _strlen(char *s)
{
	unsigned int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer to the allocated memory or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int new_length;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";

	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= _strlen(s2))
	{
		new_length = _strlen(s2);
	}

	array = malloc(_strlen(s1) + new_length + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i = i + 1;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		array[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	array[i] = '\0';
	return (array);
}
