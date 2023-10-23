#include "main.h"
#include <stdio.h>

/**
* _puts - Prints a string followed by a new line to stdout.
* @str: A pointer to a string to be printed.
*/

void _puts(char *str)
{
if (str != NULL)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
}
