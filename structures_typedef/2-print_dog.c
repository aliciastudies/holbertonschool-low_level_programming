#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints a `struct dog`
 * @d: data structure used
 *
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
	{
		return;
	}
	name = d->name;
	age = d->age;
	owner = d->owner;
	if (name != NULL)
		printf("Name: %s\n", name);
	else
		printf("Name: (nil)\n");
	if (age >= 0)
		printf("Age: %f\n", age);
	else
		printf("Age: (nil)\n");
	if (name != NULL)
		printf("Owner: %s\n", owner);
	else
		printf("Owner: (nil)\n");

}
