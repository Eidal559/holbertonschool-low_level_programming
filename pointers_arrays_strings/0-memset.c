#include "main.h"
#include <stddef.h>

/**
* _memset - Fills memory with a constant byte.
*
* @s: A pointer to the memory area to be filled.
* @b: The constant byte to fill the memory area with.
* @n: The number of bytes to fill.
*
* Return: A pointer to the memory area 's'.
*/

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n > 0)
{
*s = b;
s++;
n--;
}
return (ptr);
}
