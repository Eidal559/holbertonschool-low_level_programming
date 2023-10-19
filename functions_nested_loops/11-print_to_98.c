#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print natural numbers from n to 98.
* @n: The starting number.
*
* Description: This function prints natural numbers from given numbers to 98.
*
*/

void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
}

int main()
{
int startingNumber = 5;
print_to_98(startingNumber);
return (0);
}
