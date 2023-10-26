#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square
* @a: Pointer to the square matrix.
* @size: The size of the square matrix.
*/

void print_diagsums(int *a, int size)
{
int primaryDiagonalSum = 0;
int secondaryDiagonalSum = 0;
int i;
for (i = 0; i < size; i++)
{
primaryDiagonalSum += a[i * size + i];
secondaryDiagonalSum += a[i * size + (size - 1 -i)];
}
printf("Sum of the primary diagonal: %d\n", primaryDiagonalSum);
printf("Sum of the secondary diagonal: %d\n", secondaryDiagonalSum);
}
