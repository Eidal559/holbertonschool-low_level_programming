#include "main.h"

/**
* _strcmp - Compares two strings.
*
* @s1: The first string to be compared.
* @s2: The second string to be compared.
*
* Return: 0 if the strings are equal.
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
if (s1[i] != '\0')
return (s1[i]);
if (s2[i] != '\0')
return (-s2[i]);
return (0);
}
