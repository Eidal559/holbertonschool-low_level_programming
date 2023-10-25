#include "main.h"
#include <stddef.h>

/**
* _memcpy - Copies memory area from src to dest.
*
* @dest: Destination memory area.
* @src: Source memory area.
* @n: Number of bytes to copy.
*
* Return: A pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_start = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (dest_start);
}
