#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that  Initializes a variable of type struct dog.
 * @d: The dog struct.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 *Retun: Nothing
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

