#include "main.h"
#include <stdio.h>

/**
* print_last_digit - print and return the last digit of a number.
* @n: The number to extract the last digit from
*
* Description: This function prints the last digit of number 'n'
*
* Return: The value of the last digit of 'n'.
*/

int print_last_digit(int n)
{
int last_digit = n % 10;
last_digit = (last_digit < 0) ? -last_digit : last_digit;
putchar(last_digit + '0');
putchar(last_digit + '0');
return last_digit;
}
