#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints the lowercase alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
for (char letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return(0);
}
