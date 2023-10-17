#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints numbers from 10 to 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 10; i >= 0; i--)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
