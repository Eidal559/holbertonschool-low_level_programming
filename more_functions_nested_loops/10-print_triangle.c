#include "main.h"

/**
* print_triangle - prints a triangle made of '#'.
* @size: The size of the triangle.
*
* Return: 0
*/

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, col;
for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
if (col <= size - row)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
