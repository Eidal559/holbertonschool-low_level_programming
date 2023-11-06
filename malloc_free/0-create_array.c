#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* create_array - create an array of characters and initialize it witha character.
* @size: The size of the array to create.
* @c: The character to initialize the array with.
*
* Return: if memory allocation fails or if size is 0, return NULL.
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
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
int main(void)
{
unsigned int size = 10;
char character = 'A';
unsigned int i;
char *array;

array = create_array(size, character);

if (array == NULL)
{
write(STDOUT_FILENO, "Memory allocation failed.\n", 26);
}
else
{
write(STDOUT_FILENO, "Array created: ", 15);

for (i = 0; i < size; i++)
{
write(STDOUT_FILENO, &array[i], 1);
write(STDOUT_FILENO, " ", 1);
}
write(STDOUT_FILENO, "\n", 1);
free(array);
}
return (0);
}
