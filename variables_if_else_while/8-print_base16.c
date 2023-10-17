#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints all the numbers of base 16 in lowercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char character = '0';

for (; character <= 'f'; character++)
{
if (character <= '9' || (character >= 'a' && character <= 'f'))
{
putchar(character);
}
}
putchar('\n');
return(0);
}
