#include "main.h"
#include <stddef.h>

/**
* reset_to_98 - Update the value pointed to by an integer pointer to 98.
* @n: A pointer to an integer.
*
*/

void reset_to_98(int *n)
{
if (n != NULL)
{
*n = 98;
}
}
