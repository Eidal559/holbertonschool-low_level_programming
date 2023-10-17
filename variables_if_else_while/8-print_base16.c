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
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (char letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return(0);
}
