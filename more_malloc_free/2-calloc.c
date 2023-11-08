#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - Allocate memory for an array and initialize to zero
* @nmemb: Number of elements in the array
* @size: Size in bytes of each element
*
* Return: Pointer to the allocated memory, or NULL on failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
size_t total_size;
void *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, total_size);

return (ptr);
}
