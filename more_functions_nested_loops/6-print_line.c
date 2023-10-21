#include "main.h"

/**
* print_line - prints a line of underscores followed by a newline.
*
* Return: 0
*/

void print_line (int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
