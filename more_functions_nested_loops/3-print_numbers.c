#include "main.h"
#include <unistd.h>
#include "_putchar.h"

/**
* _putchar - Writes a character to stdout
* @c: The character to print
*
* print_numbers - prints the numbers from 0 to 9.
*/

int _putchar(char c)
{
return write(1, &c, 1);
}

void print_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
}
_putchar('\n');
}
int main(void)
{
print_numbers();
return (0);
}
