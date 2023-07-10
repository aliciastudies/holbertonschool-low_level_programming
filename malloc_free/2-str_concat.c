#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: takes parameter pointer to a char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}

/**
 * str_concat- concatnates two strings/pointers to char
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to s1 + s2, NULL if string is empty or func fails
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";

	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	array = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
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
	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	return (array);
}
