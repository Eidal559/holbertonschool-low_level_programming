#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - Return the length of a string using recursion.
* @s: The string for which you want to find the length.
* Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
