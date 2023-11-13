#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initialize a struct dog with the given values.
* @d: Pointer to the struct dog to be initialized.
* @name: Pointer to a character array for the dog name.
* @age: The age of the dog as a float.
* @owner: Pointer to a character array for the dog owner name.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}

d->name = name;
d->age = age;
d->owner = owner;
}
