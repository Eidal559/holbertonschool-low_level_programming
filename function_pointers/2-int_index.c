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
int is_even(int num)
{
return (num % 2 == 0) ? 1 : 0;
}
int main(void)
{
int array[] = {1, 3, 5, 7, 9, 10};
int size = sizeof(array) / sizeof(array[0]);

int index = int_index(array, size, is_even);

if (index != -1)
printf("First even number found at index %d\n", index);
else
printf("No even number found\n");

return (0);
}
