#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicate a string using malloc.
* @str: The string to duplicate
*
* Return: if str is NULL or if memory allocation fails, return NULL.
*         Otherwise, return a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
char *duplicate;
int length = 0;
int i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = (char *)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];
return (duplicate);
}
