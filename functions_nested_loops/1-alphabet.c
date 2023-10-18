#include "main.h"

/**
* print_albhabet - prints the lowercase alphabet followed by newline
*/

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
