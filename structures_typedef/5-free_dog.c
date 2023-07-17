#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: data structure that needs to be freed
 *
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
