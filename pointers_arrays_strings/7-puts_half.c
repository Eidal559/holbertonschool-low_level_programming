#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts_half - prints the second half of a string,
* @str: The input string.
*/

void puts_half(char *str)
{
int length = strlen(str);
int i;
int start_index;
if (length == 0)
{
return;
}
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}
if (start_index < length)
{
for (i = start_index; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
}
