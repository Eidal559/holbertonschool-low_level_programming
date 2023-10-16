#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* This function calculates the last digit of a given number.
*
* This program will assign a random number to the variable n.
*
* Return: Always 0 (Success)
*/
/* The main function is the entry point of the program */
int main(void) 
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10; /* Getting the last digit of n */
printf("Last digit of %d is %d and is ", n, last_digit);

if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
