#include "main.h"
#include <stdio.h>

/**
* leet - Encodes a string into "leet" (1337).
*
* @str: The string to be encoded.
*
* Return: A pointer to the modified string.
*/

char *leet(char *str)
{
char leet_chars[] = "aAeEoOtTlL";
char leet_replacements[] = "4307711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replacements[j];
break;
}
}
}
return (str);
}
