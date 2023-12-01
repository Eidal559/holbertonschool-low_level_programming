#include "main.h"
#include <stdio.h>

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to extract the bit from.
* @index: The index of the bit to retrieve (starting from 0).
*
* Return: The value of the bit at the specified index, or -1
*         if an error occurs.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1ul << index;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

return ((n & mask) != 0) ? 1 : 0;
}
