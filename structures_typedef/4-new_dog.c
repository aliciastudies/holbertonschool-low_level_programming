#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
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
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if function fails else a pointer to a new struct dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *store_name;
	char *store_owner;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	store_name = _strdup(name);
	if (store_name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = store_name;
	ptr->age = age;
	store_owner = _strdup(owner);
	if (store_owner == NULL)
	{
		free(store_name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = store_owner;
	return (ptr);

}
