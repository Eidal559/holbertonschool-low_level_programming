#include "main.h"
#include <stddef.h>

/**
* _strspn - Gets the length of a prefix substring.
*
* @s: The string to check.
* @accept: The string containing the characters to match in the prefix of s.
*
* Return: The number of bytes in the initial segment of s.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int is_match;
int i;
while (*s != '\0')
{
is_match = 0;

for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
is_match = 1;
break;
}
}
if (!is_match)
{
return (length);
}
length++;
s++;
}
return (length);
}
