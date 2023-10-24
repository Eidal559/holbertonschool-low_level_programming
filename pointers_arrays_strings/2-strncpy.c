#include "main.h"

/**
* _strncpy - Copies a string from src to dest, using most n bytes.
*
* @dest: The destination string where src will be copied.
* @src: The source string to be copied to dest.
* @n: The maximum number of bytes to be copied from src.
*
* Return: A pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
