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

typedef struct dog dog_t;

/**
* init_dog - Initialize a struct dog with the given values.
* @d: Pointer to the struct dog to the initialized.
* @name: Pointer to a character array for the dog name.
* @age: The age of the dog as a float.
* @owner: Pointer to a character array for the dog owner name.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* print_dog - print the information of a struct dog.
* @d: Pointer to the struct dog to be printed.
*/
void print_dog(struct dog *d);

/**
* new_dog - Create a new dog and initialize its members.
* @name: Pointer to the character array for the dog name.
* @age: The age of the dog as a float.
* @owner: Pointer to the character array for the dog owner name.
*
* Return: Pointer to the new dog struct if successful, or NULL.
*/
dog_t *new_dog(char *name, float age, char *owner);

#endif
