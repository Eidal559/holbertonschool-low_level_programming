#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenate two strings using malloc.
* @s1: The first string.
* @s2: The second string
*
* Return: if memory allocation fails or if both s1 and s2 are NULL.
*         Otherwise, return a pointer to the concatenated string.
*/

char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len_s1 = 0, len_s2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;

concatenated = (char *)malloc(len_s1 + len_s2 + 1);

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len_s1; i++)
concatenated[i] = s1[i];
for (j = 0; j < len_s2; j++)
concatenated[i + j] = s2[j];

concatenated[len_s1 + len_s2] = '\0';

return (concatenated);
}
