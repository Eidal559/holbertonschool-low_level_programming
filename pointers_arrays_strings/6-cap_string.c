#include "main.h"
#include <ctype.h>

/**
* cap_string - Capitalizes the first letter of each word in a string.
*
* @str: The string to be capitalized.
*
* Return: A pointer to the modified string.
*/

char *cap_string(char *str)
{
int capitalize_next = 1;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
else if (capitalize_next && isalpha(str[i]))
{
str[i] = toupper(str[i]);
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}
}
return (str);
}
