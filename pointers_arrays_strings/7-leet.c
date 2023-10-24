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
int i, j;
char leet_dict[] = "aAeEoOtTlL";
char leet_replace[] = "4307711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_dict[j] != '\0'; j++)
{
if (str[i] == leet_dict[j])
{
str[i] = leet_replace[j];
break;
}
}
}
return (str);
}

int main ()
{
char str[] = "741k is ch34p. Sh0w m3 7h3 c0d3.";
printf("Original: %s\n", str);
printf("Leetified: %s\n", leet(str));
return (0);
}
