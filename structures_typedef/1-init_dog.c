#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type `struct dog`
 * @d: data structure used
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
