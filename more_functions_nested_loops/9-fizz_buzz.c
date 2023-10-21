#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: prints numbers from 1 to  100.
*
* Return: Always 0 (Success)
*/

int main()
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
