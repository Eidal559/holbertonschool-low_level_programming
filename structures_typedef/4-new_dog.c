#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
* new_dog - Create a new dog and initialize its members.
* @name: Pointer to the character array for the dog name.
* @age: The age of the dog as a float.
* @owner: Pointer to the character array for the dog owner name.
*
* Return: Pointer to the new dog struct if successful, or null.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *name_copy, *owner_copy;

new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

name_copy = strdup(name);
if (name_copy == NULL)
{
free(new_dog_ptr);
return (NULL);
}

owner_copy = strdup(owner);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;

return (new_dog_ptr);
}

/**
* free_dog - Free memory allocated for a dog structure.
* @d: Pointer to the dog structure to be freed.
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
