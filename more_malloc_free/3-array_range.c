#include "main.h"
#include <stdlib.h>

/**
* array_range - Create an array of integers from min to max
* @min: The minimum value (inclusive)
* @max: The maximum value (inclusive)
*
* Return: Pointer to the newly created array or NULL on failure
*/

int *array_range(int min, int max)
{
if (min > max)
{
return (NULL);
}

int num_elements = max - min + 1;

int *arr = (int *)malloc(num_elements * sizeof(int));

if (arr == NULL)
{
return (NULL);
}

for (int i = 0; i < num_elements; i++)
{
arr[i] = min + i;
}

return (arr);
}
