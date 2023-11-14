#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array.
* @array: Pointer to the array.
* @size: Number of elements in the array.
* @cmp: Pointer to the function used to compare values.
*
* Return: Index of the first element for which cmp function not return 0.
*       -1 if no element matches or if size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <=  0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i] != 0))
{
return (i);
}
}
return (-1);
}

/**
* is_strictly_positve - Check if a number is greater than 0.
* @elem: The integer to check.
*
* Return: 1 if true, 0 otherwise.
*/
int is_strickly_positive(int elem)
{
return (elem > 0);
}

/**
* main - Entry point.
*
* Return: Always 0.
*/
int main(void)
{
int array[8] = {0, -5, 3, 0, 7, 2, -1, 0};
int index;

index = int_index(array, 8, is_strickly_positive);

printf("%d\n", index);

return (0);
}
