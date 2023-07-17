#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	dup = malloc(i + 1);
	i = 0;

	while (str[i] != '\0')
	{
		if (dup == NULL)
		{
			return (NULL);
		}
		dup[i] = str[i];
		i = i + 1;
	}
	dup[i] = '\0';
	return (dup);
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
