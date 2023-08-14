#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(structure));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
