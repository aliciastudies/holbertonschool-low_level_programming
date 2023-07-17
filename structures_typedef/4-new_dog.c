#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	array = malloc(sizeof(char) * _strlen(str) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	while (array[i] < _strlen(str))
	{
		array[i] = str[i];
		i = i + 1;

	}
	return (array);
}

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if func fails, otherwise pointer to new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *namecopy;
	char *ownercopy;

	p = malloc(sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	namecopy = _strdup(name);
	if (namecopy == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = namecopy;
	p->age = age;
	ownercopy = _strdup(owner);
	if (ownercopy == NULL)
	{
		free(namecopy);
		free(p);
		return (NULL);
	}
	p->owner = ownercopy;
	return (p);
}
