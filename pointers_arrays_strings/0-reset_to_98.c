#include "main.h"
#include <stddef.h>

/**
* updateValue - Update the value pointed to by an integer pointer to 98.
* @ptr: A pointer to an integer.
*
* Return: 0
*/

void updateValue(int *ptr)
{
if (ptr != NULL)
{
*ptr = 98;
}
}
