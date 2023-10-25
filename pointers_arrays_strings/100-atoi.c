#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
* _atoi - Converts a string to an integer, considering leading signs
* @s: The input string to be converted.
*
* Return: The integer value represented by the string.
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
if (result > (INT_MAX - (*s - '0')) / 10)
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
result = result * 10 + (*s - '0');
s++;
}
return (result *sign);
}
