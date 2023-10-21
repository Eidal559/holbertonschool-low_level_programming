#include "main.h"

/**
* print_square - prints a square made of '#' characters.
* @size: The size of the square.
*
* Return: 0
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (int row = 0; row < size; row++)
{
for (int col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
