#include "main.h"

/**
* _strncat - Concatenates two strings, using at most n bytes from src.
*
* @dest: The destination string where src will be appended.
* @src: The source string to be concatenated to dest.
* @n: The maximum number of bytes to be used from src.
*
* Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;

while (dest[dest_len] != '\0')
dest_len++;

while (src[i] != '\0' && i < n)
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len +i] = '\0';
return (dest);
}
