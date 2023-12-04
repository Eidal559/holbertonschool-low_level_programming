#include "main.h"
#include <stdio.h>

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: A pointer to the number whose bit needs to be cleared.
* @index: The index of the bit to clear (starting from 0).
*
* Return: 1 if it worked, or -1 if an error occured.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n = *n & ~(1ul << index);
return (1);
}