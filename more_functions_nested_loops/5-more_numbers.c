#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14.
*
* Return: 0
*/

void more_numbers(void)
{
int num;
int count;

for (count = 0; count < 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar('0' + num / 10);
}
_putchar('0' + num % 10);
}
_putchar('\n');
}
}
