#include "main.h"

/**
* print_diagonal - prints a diagonal line of backslashes.
* @n: The number of backslashes to print in the diagonal.
*
* Return: 0
*/

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int spaces = 0;
int i;
while (n > 0)
{
for (i = 0; i < spaces; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
spaces++;
n--;
}
}
}
