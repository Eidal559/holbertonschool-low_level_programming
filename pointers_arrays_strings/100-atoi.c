#include "main.h"
#include <limits.h>

/**
* _atoi - Converts a string to an integer, considering leading signs
* @s: The input string to be converted.
*
* Return: The converted integer value.
*/

int _atoi(char *s)
{
int value = 0, a, negative = 1;
for (a = 0; s[a] != '\0'; a++)
if (s[a] == '-')
{
negative = negative * -1;
}
if (s[a] >= '0' && s[a] <= '9')
{
if (value >= 214748364 && negative < 0)
{
return (-214748364);
}
value = value * 10 + (s[a] - '0');
if (s[a + 1] < '0' || s[a + 1] > '9')
{
return (value * negative);
}
}
return (value * negative);
}
