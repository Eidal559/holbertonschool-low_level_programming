#include "main.h"

/**
* print_sign - print the sign of a number
* @n: The number to check
*
* Description - This function prints the sign of the number 'n'.
*
* Return: 1 and prints '+'
*         0 and prints '0'
*         -1 and prints '-'
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return 1;
}
else if (n == 0)
{
_putchar('0');
return 0;
}
else
{
_putchar('-');
return -1;
}
}
