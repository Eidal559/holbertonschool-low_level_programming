#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints the lowercase and uppercase alphabet followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
for (char letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
