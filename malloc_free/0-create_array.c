#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
* create_array - create an array of characters and initialize with character.
* @size: The size of the array to create.
* @c: The character to initialize the array with.
*
* Return: if memory allocation fails or if size is 0, return NULL.
*         otherwise, return a pointer to the created array.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (NULL);

array = (char *)malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
