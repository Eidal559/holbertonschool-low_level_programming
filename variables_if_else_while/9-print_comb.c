#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints all possible combinations of digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
