#include "main.h"

/**
* _putchar - Writes a character to stdout
* @c: The character to print
*
* print_numbers - prints the numbers from 0 to 9.
*/

void print_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}
_putchar('\n');
}
