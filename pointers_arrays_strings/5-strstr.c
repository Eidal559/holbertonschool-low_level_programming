#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring within a string.
*
* @haystack: The string to search in.
* @needle: The substring to locate.
*
* Return: A pointer to the beginning of the located substring in haystack.
*/

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
