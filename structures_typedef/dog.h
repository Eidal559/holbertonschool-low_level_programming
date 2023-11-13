#ifndef DOG_H
#define DOG_H

/**
* struct dog - Define a structure to represent information about dog.
* @name: pointer to a character array holding the dog name.
* @age: The age of the dog as a float.
* @owner: Pointer to a character array holding the dog owner name.
*/

struct dog
{
char *name;
float age;
char *owner;
};

#endif
