#include "main.h"
#include <stddef.h>

/**
* reset_to_98 - Update the value pointed to by an integer pointer to 98.
* @ptr: A pointer to an integer.
*
* This function takes a pointer to an integer and updates the value it points to 98.
*
* Return: 0
*/

void reset_to_98(int *n)
{
if (n != NULL)
{
*n = 98;
}
}
