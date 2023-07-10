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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:pointer to char/string to be copied
 *
 * Return: pointer to duplicated string, NULL if str = 0
 * or if insufficient memory is available
 */

char *_strdup(char *str)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * _strlen(str) + 1);
	if (str == NULL || array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (array[i] < _strlen(str))
	{
		array[i] = str[i];
		i = i + 1;

	}
	return (array);
}
