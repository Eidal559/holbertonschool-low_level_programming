#include "main.h"

/**
* _strcpy - Copies the string pointed to by src to the buffer.
* @dest: The destination buffer.
* @src: The source string to be copied.
*
* Return: A pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';

return original_dest;
}
