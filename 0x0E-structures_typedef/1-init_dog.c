#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes dog structure.
 * @d: dog structure.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
