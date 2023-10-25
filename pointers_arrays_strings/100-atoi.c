#include "main.h"
#include <stdio.h>

/**
* _atoi - Converts a string to an integer, considering leading signs
* @s: The input string to be converted.
*
* Return: The integer value represented by the string.
*/

int _atoi(char *s)
{
int sign = 1;

while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
break;
}
s++;
}
}
