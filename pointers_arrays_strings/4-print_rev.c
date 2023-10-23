#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_rev - prints a string in reverse order followed by a newline
* @s: The string to be printed in reverse.
*/

void print_rev(char *s)
{
int length = strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
