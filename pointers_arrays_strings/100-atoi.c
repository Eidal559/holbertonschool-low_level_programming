#include "main.h"

/**
* _atoi - Converts a string to an integer, considering leading signs
* @s: The input string to be converted.
*
* Return: The converted integer value.
*/

int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s)
{
if (*s == ' ' || (*s >= 9 && *s <= 13))
{
s++;
}
else if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
else if (*s >= '0' && *s <= '9')
result = result * 10 + (*s - '0');
{
s++;
}
{
break;
}
}
return (result * sign);
}
