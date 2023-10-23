#include "main.h"
#include <stdio.h>

/**
* print_array - Prints the first n elements of an integer array.
*
* @a: The integer array.
* @n: The number of elements to be printed.
*/

void print_array(int *a, int n)
{
if (n <= 0)
{
printf("\n");
return;
}

for (int i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
